#include "ReversiGamePlayer.h"
#include "pch.h"

void ReversiGamePlayer::SetupPlayer(string name, CellType cellType) {
	this->name = name;
	this->cellType = cellType;
}

void ReversiGamePlayer::SetBoard(ReversiGameBoard* board) {
	this->board = board;
}

bool ReversiGamePlayer::MakeMove() {
	unsigned int row, col;
	cout << endl << "Игрок " << name << ", Ваш ход: " << endl;
	cout << "Введите строку: ";
	cin >> row;
	cout << "Введите столбец: ";
	cin >> col;

	if (this->board->CheckLegal(row, col, this->cellType)) {
		this->board->SetCell(row, col, this->cellType);
		return	true;
	}
	
	return false;
}

string ReversiGamePlayer::GetName() {
	return this->name;
}

ReversiGamePlayer::ReversiGamePlayer() {
}

ReversiGamePlayer::~ReversiGamePlayer() {
}