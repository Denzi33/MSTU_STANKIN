#include "ReversiGameBoard.h"
#include "pch.h"

ReversiGameBoard::ReversiGameBoard(unsigned int size)
{
  this->boardsize = size;
  cells = new CellType * [size];
  
  for (unsigned int i = 0; i < size; i++)
    cells[i] = new CellType[size];

  for (unsigned int i = 0; i < size; i++)
    for (unsigned int j = 0; j < size; j++)
      cells[i][j] = CellType_Empty;
}

ReversiGameBoard::~ReversiGameBoard()
{
  for (unsigned int i = 0; i < boardsize; i++)
    delete[]cells[i];
  delete[]cells;
}

void ReversiGameBoard::Show()
{
  cout << "   ";
  for (unsigned int j = 0; j < boardsize; j++)
    cout << j << " ";
  cout << endl;

  for (unsigned int i = 0; i < boardsize; i++)
  {
    cout << i << "  ";
    for (unsigned int j = 0; j < boardsize; j++) {
      switch (cells[i][j])
      {
      case CellType_X:
        cout << "X";
        break;
      case CellType_O:
        cout << "0";
        break;
      case CellType_Empty:
        cout << "-";
        break;
      }
      cout << " ";
    }
    cout << endl;
  }
}

void ReversiGameBoard::SetCell(unsigned int ypos, unsigned int xpos, CellType ct) {
  cells[ypos][xpos] = ct;

  unsigned int ind = 0;  // Временный индекс для внутренних циклов при заполнении
  unsigned int ind2 = 0;  // Временный индекс для внутренних циклов при заполнении

  bool key1 = false;  // Проверка наличия фишки противника
  bool key2 = false;  // Проверка наличия нашей фишки в линии
  bool act = false;  // Наличие линии заполнения
  
  for (int i = xpos - 1; i >= 0; --i) {  // Налево от поставленного элемента и обратно
    if (key1 && key2)
    {
      for (unsigned int w = ind; w < xpos; ++w)
      {
        cells[ypos][w] = ct;
      }
      act = true;
      break;
    }

    if ((cells[ypos][i] != '-') && (cells[ypos][i] != ct))  // Обнаружение фишки противника
      key1 = true;

    if ((cells[ypos][i] == ct) && key1) {  // Поиск одинаковой фишки в линии
      key2 = true;
      ind = i;
    }
  }
  key1 = false;
  key2 = false;
  
  if (!act) {  // От поставленного элемента диагональ слево-направо снизу-вверх
    for (int i = ypos - 1, j = xpos + 1; (i >= 0) && (j <= 7); --i, ++j) {
      if (key1 && key2)
      {
        for (int w = ind, q = ind2; (w < ypos) && (q > xpos); ++w, --q)
        {
          cells[w][q] = ct;
        }
        act = true;
        break;
      }

      if (cells[i][j] != '-' && cells[i][j] != ct) {  // Обнаружение фишки противника
        key1 = true;
      }

      if (cells[i][j] == ct && key1) {  // Поиск одинаковой фишки в линии
        key2 = true;
        ind = i;
        ind2 = j;
      }
    }
  }
  key1 = false;
  key2 = false;

  if (!act) {  // От поставленного элемента диагональ слево-направо сверху-вниз
    for (int i = ypos + 1, j = xpos + 1; (i <= 7) && (j <= 7); ++i, ++j) {
      if (key1 && key2)
      {
        for (int w = ind, q = ind2; (w > ypos) && (q > xpos); --w, --q)
        {
          cells[w][q] = ct;
        }
        act = true;
        break;
      }

      if (cells[i][j] != '-' && cells[i][j] != ct) {  // Обнаружение фишки противника
        key1 = true;
      }

      if (cells[i][j] == ct && key1) {  // Поиск одинаковой фишки в линии
        cout << "Key 1 = " << key1 << endl;
        key2 = true;
        ind = i;
        ind2 = j;
      }
    }
  }
  key1 = false;
  key2 = false;

  if (!act) {  // От поставленного элемента диагональ справо-налево сверху-вниз
    for (int i = ypos + 1, j = xpos - 1; (i <= 7) && (j >= 0); ++i, --j) {
      if (key1 && key2)
      {
        for (int w = ind, q = ind2; (w > ypos) && (q < xpos); --w, ++q)
        {
          cells[w][q] = ct;
        }
        act = true;
        break;
      }

      if (cells[i][j] != '-' && cells[i][j] != ct) {  // Обнаружение фишки противника
        key1 = true;
      }

      if (cells[i][j] == ct && key1) {  // Поиск одинаковой фишки в линии
        key2 = true;
        ind = i;
        ind2 = j;
      }
    }
  }
  key1 = false;
  key2 = false;

  if (!act) {  // От поставленного элемента диагональ cправо-налево снизу-вверх
    for (int i = ypos - 1, j = xpos - 1; (i >= 0) && (j >= 0); --i, --j) {
      if (key1 && key2)
      {
        for (int w = ind, q = ind2; (w < ypos) && (q < xpos); ++w, ++q)
        {
          cells[w][q] = ct;
        }
        act = true;
        break;
      }

      if (cells[i][j] != '-' && cells[i][j] != ct) {  // Обнаружение фишки противника
        key1 = true;
      }

      if (cells[i][j] == ct && key1) {  // Поиск одинаковой фишки в линии
        key2 = true;
        ind = i;
        ind2 = j;
      }
    }
  }
  key1 = false;
  key2 = false;
  
  if (!act) {  // Направо от поставленного элемента и обратно
    for (int i = xpos + 1; i <= 7; ++i) {
      if (key1 && key2)
      {
        for (int w = xpos; w < ind; ++w)
        {
          cells[ypos][w] = ct;
        }
        act = true;
        break;
      }

      if ((cells[ypos][i] == ct) && key1) {  // Поиск одинаковой фишки в линии
        key2 = true;
        ind = i;
      }


      if ((cells[ypos][i] != '-') && (cells[ypos][i] != ct))  // Обнаружение фишки противника
        key1 = true;
    }
  }
  key1 = false;
  key2 = false;

  if (!act) {  // Снизу от поставленного элемента и обратно
    for (int i = ypos + 1; i <= 7; ++i) {
      if (key1 && key2)
      {
        for (int w = ind; w > ypos; --w)
        {
          cells[w][xpos] = ct;
        }
        act = true;
        break;
      }

      if ((cells[i][xpos] != '-') && (cells[i][xpos] != ct))  // Обнаружение фишки противника
        key1 = true;

      if ((cells[i][xpos] == ct) && key1) {  // Поиск одинаковой фишки в линии
        key2 = true;
        ind = i;
      }
    }
  }
  key1 = false;
  key2 = false;

  if (!act) {  // Сверху от поставленного элемента и обратно
    for (int i = ypos - 1; i >= 0; --i) {
      if (key1 && key2)
      {
        for (int w = ind; w < ypos; ++w)
        {
          cells[w][xpos] = ct;
        }
        act = true;
        break;
      }

      if ((cells[i][xpos] != '-') && (cells[i][xpos] != ct)) { // Обнаружение фишки противника
        key1 = true;
      }

      if ((cells[i][xpos] == ct) && key1) {  // Поиск одинаковой фишки в линии
        key2 = true;
        ind = i;
      }
    }
  }
}

bool ReversiGameBoard::IsBoardFull() {
  for (unsigned int i = 0; i < 8; ++i)
    for (unsigned int j = 0; j < 8; ++j)
      if (cells[i][j] == '-')
        return false;
  return true;
}

bool ReversiGameBoard::CheckEndConditions() {
  if (IsBoardFull())
        return true;
  return false;
}

bool ReversiGameBoard::IsVictory() {
  return bVictory;
}

/*bool ReversiGameBoard::Steps() {
  for (int i = 0; i < 8; ++i) {
    for (int j = 0; j < 8; ++j) {
      if (CheckLegal(i, j, CellType_X) || CheckLegal(i, j, CellType_O))
        return true;
    }
  }
}

bool ReversiGameBoard::Calc() {
  int cX = 0;
  int c0 = 0;
  if (!Steps()){
    for (int i = 0; i < 8; ++i) {
      for (int j = 0; j < 8; ++j) {
        if (cells[i][j] == 'X')
          cX += 1;
        if (cells[i][j] == '0')
          c0 += 1;
      }
    }
  }
  if (cX > c0):
  {
    cout << "Игрок" << player1->name << "выйграл со счётом : " << c0 << endl;
    exit(0);
  }
  else
  {
    cout << "Игрок" << player2->name << "выйграл со счётом : " << c0 << endl;
    exit(0);
  }
}*/

void ReversiGameBoard::FSetCell(unsigned int ypos, unsigned int xpos, CellType ct) {
  cells[ypos][xpos] = ct;
}

bool ReversiGameBoard::CheckLegal(unsigned int ypos, unsigned int xpos, CellType ct) {
  bool eflag = false;
  bool sflag = false;
  bool s2flag = false;
  bool res = true;

  if ((xpos < 0) || (xpos > boardsize - 1) || (ypos < 0) || (ypos > boardsize - 1))
    return false;

  // № 1: от поставленного элемента диагональ cправо-налево снизу-вверх
  for (int i = ypos - 1, j = xpos - 1; (i >= 0) && (j >= 0); --i, --j) {
    if (cells[i][j] == '-')
    {
      eflag = true;
      break;
    }

    if (cells[i][j] != ct && cells[i][j] != '-') {
      s2flag = true;
    }

    if (cells[i][j] == ct) {
      sflag = true;
      break;
    }
  }
  
  res = !eflag && sflag && s2flag ? true: false;

  if (res)
    return res;
  eflag = false, sflag = false, s2flag = false;

  // № 2: от поставленного элемента вверх
  for (int i = ypos - 1; (i >= 0); --i) {
    if (cells[i][xpos] == '-')
    {
      eflag = true;
      break;
    }

    if (cells[i][xpos] != ct && cells[i][xpos] != '-') {
      s2flag = true;
    }

    if (cells[i][xpos] == ct) {
      sflag = true;
      break;
    }
  }

  res = !eflag && sflag && s2flag ? true : false;

  if (res)
    return res;
  eflag = false, sflag = false, s2flag = false;

  // № 3: от поставленного элемента слево-направо снизу-вверх
  for (int i = ypos - 1, j = xpos + 1; (i >= 0) && (j <= 7); --i, ++j) {
    if (cells[i][j] == '-')
    {
      eflag = true;
      break;
    }

    if (cells[i][j] != ct && cells[i][j] != '-') {
      s2flag = true;
    }

    if (cells[i][j] == ct) {
      sflag = true;
      break;
    }
  }

  res = !eflag && sflag && s2flag ? true : false;

  if (res)
    return res;
  eflag = false, sflag = false, s2flag = false;

  // № 4: от поставленного элемента направо
  for (int i = xpos + 1; i <= 7; ++i) {
    if (cells[ypos][i] == '-')
    {
      eflag = true;
      break;
    }

    if (cells[ypos][i] != ct && cells[ypos][i] != '-') {
      s2flag = true;
    }

    if (cells[ypos][i] == ct) {
      sflag = true;
      break;
    }
  }

  res = !eflag && sflag && s2flag ? true : false;

  if (res)
    return res;
  eflag = false, sflag = false, s2flag = false;

  // № 5: от поставленного элемента слево-направо сверху-вниз
  for (int i = ypos + 1, j = xpos + 1; (i <= 7) && (j <= 7); ++i, ++j) {
    if (cells[i][j] == '-')
    {
      eflag = true;
      break;
    }

    if (cells[i][j] != ct && cells[i][j] != '-') {
      s2flag = true;
    }

    if (cells[i][j] == ct) {
      sflag = true;
      break;
    }
  }

  res = !eflag && sflag && s2flag ? true : false;

  if (res)
    return res;
  eflag = false, sflag = false, s2flag = false;

  // № 6: от поставленного элемента вниз
  for (int i = ypos + 1; i <= 7; ++i) {
    if (cells[i][xpos] == '-')
    {
      eflag = true;
      break;
    }

    if (cells[i][xpos] != ct && cells[i][xpos] != '-') {
      s2flag = true;
    }

    if (cells[i][xpos] == ct) {
      sflag = true;
      break;
    }
  }

  res = !eflag && sflag && s2flag ? true : false;

  if (res)
    return res;
  eflag = false, sflag = false, s2flag = false;

  // № 7: от поставленного элемента справо-налево сверху-вниз
  for (int i = ypos + 1, j = xpos - 1; (i <= 7) && (j >= 0); ++i, --j) {
    if (cells[i][j] == '-')
    {
      eflag = true;
      break;
    }

    if (cells[i][j] != ct && cells[i][j] != '-') {
      s2flag = true;
    }

    if (cells[i][j] == ct) {
      sflag = true;
      break;
    }
  }

  res = !eflag && sflag && s2flag ? true : false;

  if (res)
    return res;
  eflag = false, sflag = false, s2flag = false;

  // № 8: от поставленного элемента влево
  for (int i = xpos - 1; i >= 0; --i) {
    if (cells[ypos][i] == '-')
    {
      eflag = true;
      break;
    }

    if (cells[ypos][i] != ct && cells[ypos][i] != '-') {
      s2flag = true;
    }

    if (cells[ypos][i] == ct) {
      sflag = true;
      break;
    }
  }

  res = !eflag && sflag && s2flag ? true : false;
  eflag = false, sflag = false, s2flag = false;
  return res;
}