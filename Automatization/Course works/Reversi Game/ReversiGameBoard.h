#pragma once
#include "CellType.h"

class ReversiGameBoard
{
private:
  bool first_step = true;
  bool bVictory = false;
  unsigned int boardsize;
  CellType** cells;
  bool IsBoardFull();
public:
  ReversiGameBoard(unsigned int size);
  virtual ~ReversiGameBoard();
  void Show();
  void SetCell(unsigned int ypos, unsigned int xpos, CellType ct);
  void FSetCell(unsigned int ypos, unsigned int xpos, CellType ct);
  bool CheckLegal(unsigned int ypos, unsigned int xpos, CellType ct);
  bool CheckEndConditions();
  bool IsVictory();
  //bool Calc(ReversiGameBoard cells);
  //bool Steps();
};