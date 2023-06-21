#include "pch.h"
#include <iostream>
#include "ReversiGameManager.h"

int main()
{
  setlocale(LC_ALL, "Russian");
  ReversiGameManager manager;
  if (!manager.Init()) {
    cout << "Неверные данные, игра закрывается!";
    _getch();
    return 0;
  }
  while (true) {
    manager.MakeMove();
  }
  _getch();
}
