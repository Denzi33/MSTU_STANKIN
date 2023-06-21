#pragma once
#include "ReversiGameBoard.h"
#include "pch.h"

class ReversiGamePlayer
{
private:
  ReversiGameBoard* board;
  CellType cellType;
  string name;
public:
  ReversiGamePlayer();
  virtual ~ReversiGamePlayer();
  void SetupPlayer(string name, CellType cellType);
  void SetBoard(ReversiGameBoard* board);
  bool MakeMove();
  string GetName();
};