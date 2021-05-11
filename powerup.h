#ifndef POWERUP_H
#define POWERUP_H
#include "game_element.h"

class Powerup : public GameElement {
  public:
  Powerup(int x, int y) : GameElement(x, y, 25,25) {}
  Powerup() : GameElement() {}
  void Draw(graphics::Image &draw) override;
  void Move(const graphics::Image &move) override;
};
