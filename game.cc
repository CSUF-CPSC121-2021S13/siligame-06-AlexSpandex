#include "game.h"

// member function
void Game::CreateOpponents() {
  std::unique_ptr<Opponent> ghost = std::make_unique<Opponent>(rand() % 800 , rand() % 400);
  opponentlist.push_back(std::move(ghost));
}

void Game::CreatePowerup() {
  std::unique_ptr<Powerup> star = std::make_unique<Powerup>(rand() % 800 , rand() % 50);
  powerup_.push_back(std::move(star));
}

void Game::LaunchProjectiles() {
  for (int i = 0; i < opponentlist.size(); i++) {
    std::unique_ptr<OpponentProjectile> badbeam =
        opponentlist[i]->LaunchProjectile();
    if (badbeam != nullptr) {
      opponentbeams_.push_back(std::move(badbeam));
    } else
      continue;
  }
}

void Game::RemoveInactive() {
  for (int i = opponentlist.size() - 1; i >= 0; i--) {
    if (!(opponentlist[i]->GetIsActive())) {
      opponentlist.erase(opponentlist.begin() + i);
    }
  }
  for (int i = playerbeams_.size() - 1; i >= 0; i--) {
    if (!(playerbeams_[i]->GetIsActive())) {
      playerbeams_.erase(playerbeams_.begin() + i);
    }
  }
  for (int i = opponentbeams_.size() - 1; i >= 0; i--) {
    if (!(opponentbeams_[i]->GetIsActive())) {
      opponentbeams_.erase(opponentbeams_.begin() + i);
    }
  }
   for (int i = powerup_.size() - 1; i >= 0; i--) {
    if (!(powerup_[i]->GetIsActive())) {
      powerup_.erase(powerup_.begin() + i);
    }
  }
}

void Game::Init() {
  backgroundscreen.AddMouseEventListener(*this); 
  backgroundscreen.AddAnimationEventListener(*this);
  player.GameElement::SetX(player.GameElement::GetX() + 3);
  player.GameElement::SetY(player.GameElement::GetY() + 3);
}

void Game::UpdateScreen() {
//  backgroundscreen.DrawRectangle(0, 0, 800, 600, 255, 255, 255);
if(start_ == true){
  // background.Load("start-screen-siligame-06.bmp")
  
}

if (player_score_ == 0){
 for (int i = 0; i < powerup_.size(); i++) {
    if (powerup_[i]->GetIsActive()) {
      powerup_[i]->Draw(backgroundscreen);
    }
  }

}
 backgroundscreen.Load("8-bit-dance-floor.bmp");

  std::string show_score = "Score: " + std::to_string(player_score_);
  backgroundscreen.DrawText(40, 10, show_score, 30, 255, 255, 255);

  if (player.GetIsActive()) {
    player.Draw(backgroundscreen);
  }
  for (int i = 0; i < opponentlist.size(); i++) {
    if (opponentlist[i]->GetIsActive()) {
      opponentlist[i]->Draw(backgroundscreen);
    }
  }

  for (int j = 0; j < opponentbeams_.size(); j++) {
    if (opponentbeams_[j]->GetIsActive()) {
      opponentbeams_[j]->Draw(backgroundscreen);
    }
  }

  for (int k = 0; k < playerbeams_.size(); k++) {
    if (playerbeams_[k]->GetIsActive()) {
      playerbeams_[k]->Draw(backgroundscreen);
    }
  }
  if (lost_) {
    backgroundscreen.Load("8-bit-dance-floor.bmp");
    std::string gameOver = "Game Over";
    backgroundscreen.DrawText(300, 300, gameOver, 50, graphics::Color(255, 255, 255));
  }

}

void Game::Start() { backgroundscreen.ShowUntilClosed(); }

void Game::MoveGameElements() {
  for (int i = 0; i < opponentlist.size(); i++) {
    if (opponentlist[i]->GetIsActive()) opponentlist[i]->Move(backgroundscreen);
  }

  for (int j = 0; j < opponentbeams_.size(); j++) {
    if (opponentbeams_[j]->GetIsActive()) {
      opponentbeams_[j]->Move(backgroundscreen);
    }
  }

  for (int k = 0; k < playerbeams_.size(); k++) {
    if (playerbeams_[k]->GetIsActive()) {
      playerbeams_[k]->Move(backgroundscreen);
    }
  }

  for (int i = 0; i < powerup_.size(); i++) {
    if (powerup_[i]->GetIsActive()) {
      powerup_[i]->Move(backgroundscreen);
    }
  }
}

void Game::FilterIntersections() {
  // Opponent and Player
  for (int i = 0; i < opponentlist.size(); i++) {
    if (opponentlist[i]->IntersectsWith(&player)) {
      opponentlist[i]->SetIsActive(false);
      player.SetIsActive(false);
      lost_ = true;
    }
  }

  // Player Projectile and Opponent
  for (int j = 0; j < playerbeams_.size(); j++) {
    for (int x = 0; x < opponentlist.size(); x++) {
      if (playerbeams_[j]->IntersectsWith(opponentlist[x].get())) {
        playerbeams_[j]->SetIsActive(false);
        opponentlist[x]->SetIsActive(false);
        if (player.GetIsActive()) {
          player_score_++;
        }
      }
    }
  }
  // Opponent Projectile and Player
  for (int k = 0; k < opponentbeams_.size(); k++) {
    if (opponentbeams_[k]->IntersectsWith(&player)) {
      opponentbeams_[k]->SetIsActive(false);
      player.SetIsActive(false);
      lost_ = true;
    }
  }
  //Powerup and Player
  for (int i = 0; i < powerup_.size(); i++) {
    if (powerup_[i]->IntersectsWith(&player)) {
      powerup_[i]->SetIsActive(false);
    }
  }
}

void Game::OnAnimationStep() {
  if(powerup_.size() == 0){
    CreatePowerup();
  }

  if (opponentlist.size() == 0) {
    CreateOpponents();
  }

  MoveGameElements();
  LaunchProjectiles();
  FilterIntersections();
  RemoveInactive();
  UpdateScreen();

  backgroundscreen.Flush();
}

void Game::OnMouseEvent(const graphics::MouseEvent& event) {
  if (event.GetX() <= backgroundscreen.GetWidth() && event.GetX() >= 0 &&
      event.GetY() <= backgroundscreen.GetHeight() && event.GetY() >= 0) {
    player.SetX(event.GetX() - (player.GetWidth() / 2));
    player.SetY(event.GetY() - (player.GetHeight() / 2));
  }
  if (event.GetMouseAction() == graphics::MouseAction::kPressed ||
      event.GetMouseAction() == graphics::MouseAction::kDragged) {
    std::unique_ptr<PlayerProjectile> pp =
        std::make_unique<PlayerProjectile>(player.GetX() + 25, player.GetY());
    playerbeams_.push_back(std::move(pp));
  }
}
