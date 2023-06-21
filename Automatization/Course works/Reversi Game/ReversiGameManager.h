#pragma once
#include "ReversiGameBoard.h"
#include "ReversiGamePlayer.h"

class ReversiGameManager
{
private:
  ReversiGameBoard* board;
  ReversiGamePlayer* player1;
  ReversiGamePlayer* player2;
  ReversiGamePlayer* currentPlayer;
  bool bGameFinished = false;
public:
  ReversiGameManager();
  virtual ~ReversiGameManager();
  bool Init();
  void ShowBoard();
  void MakeMove();
  bool IsGameFinished();
};