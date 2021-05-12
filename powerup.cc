#include "powerup.h"

void Powerup::Draw(graphics::Image &draw){
  draw.DrawRectangle(x_ + 11, y_ + 6, 2, 1, 0, 0, 0);///////
  draw.DrawRectangle(x_ + 10, y_ + 7, 1, 2, 0, 0, 0);//outline
  draw.DrawRectangle(x_ + 9, y_ + 9, 1, 2, 0, 0, 0);
  draw.DrawRectangle(x_ + 4, y_ + 10, 6, 1, 0, 0, 0);
  draw.DrawRectangle(x_ + 4, y_ + 10, 1, 2, 0, 0, 0);
  draw.DrawRectangle(x_ + 5, y_ + 12, 1, 1, 0, 0, 0);
  draw.DrawRectangle(x_ + 6, y_ + 13, 1, 1, 0, 0, 0);
  draw.DrawRectangle(x_ + 7, y_ + 14, 1, 2, 0, 0, 0);
  draw.DrawRectangle(x_ + 6, y_ + 16, 1, 2, 0, 0, 0);///outline
  draw.DrawRectangle(x_ + 5, y_ + 18, 1, 2, 0, 0, 0);
  draw.DrawRectangle(x_ + 4, y_ + 20, 1, 2, 0, 0, 0);
  draw.DrawRectangle(x_ + 4, y_ + 21, 3, 1, 0, 0, 0);
  draw.DrawRectangle(x_ + 7, y_ + 20, 2, 1, 0, 0, 0);
  draw.DrawRectangle(x_ + 9, y_ + 19, 2, 1, 0, 0, 0);
  draw.DrawRectangle(x_ + 11, y_ + 18, 2, 1, 0, 0, 0);
  draw.DrawRectangle(x_ + 13, y_ + 19, 2, 1, 0, 0, 0);
  draw.DrawRectangle(x_ + 15, y_ + 20, 2, 1, 0, 0, 0);
  draw.DrawRectangle(x_ + 17, y_ + 21, 3, 1, 0, 0, 0);
  draw.DrawRectangle(x_ + 19, y_ + 20, 1, 2, 0, 0, 0);
  draw.DrawRectangle(x_ + 18, y_ + 18, 1, 2, 0, 0, 0);
  draw.DrawRectangle(x_ + 17, y_ + 16, 1, 2, 0, 0, 0);
  draw.DrawRectangle(x_ + 16, y_ + 14, 2, 1, 0, 0, 0);///
  draw.DrawRectangle(x_ + 17, y_ + 13, 1, 1, 0, 0, 0);///
  draw.DrawRectangle(x_ + 17, y_ + 13, 1, 1, 0, 0, 0);///
  draw.DrawRectangle(x_ + 18, y_ + 12, 1, 1, 0, 0, 0);//
  draw.DrawRectangle(x_ + 19, y_ + 10, 1, 2, 0, 0, 0);//
  draw.DrawRectangle(x_ + 14, y_ + 10, 6, 1, 0, 0, 0);///
  draw.DrawRectangle(x_ + 14, y_ + 9, 1, 2, 0, 0, 0);////
  draw.DrawRectangle(x_ + 13, y_ + 7, 1, 2, 0, 0, 0);/////////////
  draw.DrawRectangle(x_ + 11, y_ + 7, 2, 9, rand % 256,rand % 256,rand % 256);////////////////
  draw.DrawRectangle(x_ + 10, y_ + 9, 1, 3, rand % 256,rand % 256,rand % 256);////
  draw.DrawRectangle(x_ + 6, y_ + 11, 12, 1, rand % 256,rand % 256,rand % 256);////body
  draw.DrawRectangle(x_ + 7, y_ + 12, 3, 1, rand % 256,rand % 256,rand % 256);////of
  draw.DrawRectangle(x_ + 8, y_ + 13, 2, 1, rand % 256,rand % 256,rand % 256);////star
  draw.DrawRectangle(x_ + 9, y_ + 11, 1, 7, rand % 256,rand % 256,rand % 256);///
  draw.DrawRectangle(x_ + 7, y_ + 18, 2, 1, rand % 256,rand % 256,rand % 256);////
  draw.DrawRectangle(x_ + 8, y_ + 16, 2, 2, rand % 256,rand % 256,rand % 256);///
  draw.DrawRectangle(x_ + 10, y_ + 17, 1, 1, rand % 256,rand % 256,rand % 256);////
  draw.DrawRectangle(x_ + 9, y_ + 15, 6, 1, rand % 256,rand % 256,rand % 256);///
  draw.DrawRectangle(x_ + 14, y_ + 11, 7, 1, rand % 256,rand % 256,rand % 256);///
  draw.DrawRectangle(x_ + 13, y_ + 17, 3, 1, rand % 256,rand % 256,rand % 256);////
  draw.DrawRectangle(x_ + 15, y_ + 18, 2, 1, rand % 256,rand % 256,rand % 256);
  draw.DrawRectangle(x_ + 14, y_ + 16, 2, 2, rand % 256,rand % 256,rand % 256);
  draw.DrawRectangle(x_ + 14, y_ + 11, 2, 3, rand % 256,rand % 256,rand % 256);
  draw.DrawRectangle(x_ + 16, y_ + 11, 2, 1, rand % 256,rand % 256,rand % 256);
  draw.DrawRectangle(x_ + 16, y_ + 11, 1, 2, rand % 256,rand % 256,rand % 256);//////////////
  draw.DrawRectangle(x_ + 10, y_ + 12, 1, 3, 0 ,0 ,0);/////////////////////////////////////////////////
  draw.DrawRectangle(x_ + 13, y_ + 12, 1, 3, 0 ,0 ,0);/////// Face and
  draw.DrawRectangle(x_ + 10, y_ + 16, 4, 1, 0 ,0 ,0);///////Eyes
  draw.DrawRectangle(x_ + 5, y_ + 11, 1, 1,181 ,16 ,215));/////////////////////////
  draw.DrawRectangle(x_ + 6, y_ + 12, 1, 1, 181 ,16 ,215);///////////////////////////////////Inner outlines
  draw.DrawRectangle(x_ + 7, y_ + 13, 1, 1, 181 ,16 ,215);
  draw.DrawRectangle(x_ + 8, y_ + 14, 1, 1, 181 ,16 ,215);
  draw.DrawRectangle(x_ + 7, y_ + 16, 1, 2, 181 ,16 ,215);
  draw.DrawRectangle(x_ + 6, y_ + 18, 1, 2, 181 ,16 ,215);
  draw.DrawRectangle(x_ + 5, y_ + 20, 2, 1, 181 ,16 ,215);
  draw.DrawRectangle(x_ + 6, y_ + 19, 3, 1, 181 ,16 ,215);
  draw.DrawRectangle(x_ + 7, y_ + 16, 1, 2, 181 ,16 ,215);
  draw.DrawRectangle(x_ + 9, y_ + 18, 2, 1, 181 ,16 ,215);
  draw.DrawRectangle(x_ + 9, y_ + 18, 2, 1, 181 ,16 ,215);
  draw.DrawRectangle(x_ + 11, y_ + 17, 2, 1, 181 ,16 ,215);
  draw.DrawRectangle(x_ + 13, y_ + 18, 2, 1, 181 ,16 ,215);
  draw.DrawRectangle(x_ + 15, y_ + 19, 3, 1, 181 ,16 ,215);
  draw.DrawRectangle(x_ + 17, y_ + 18, 1, 3, 181 ,16 ,215);
  draw.DrawRectangle(x_ + 17, y_ + 20, 2, 1, 181 ,16 ,215);
  draw.DrawRectangle(x_ + 16, y_ + 16, 1, 2, 181 ,16 ,215);
  draw.DrawRectangle(x_ + 15, y_ + 14, 1, 2, 181 ,16 ,215);
  draw.DrawRectangle(x_ + 16, y_ + 13, 1, 1, 181 ,16 ,215);
  draw.DrawRectangle(x_ + 17, y_ + 12, 1, 1, 181 ,16 ,215);
  draw.DrawRectangle(x_ + 16, y_ + 13, 1, 1, 181 ,16 ,215);
  draw.DrawRectangle(x_ + 18, y_ + 11, 1, 1, 181 ,16 ,215);///////////
}

void Move(const graphics::Image &move) {}
