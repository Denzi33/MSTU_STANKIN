#include "ReversiGameManager.h"
#include "pch.h"
#include <string>

bool ReversiGameManager::Init(void) {
	unsigned int boardsize;
	string playerName;
	cout << "\t\t\tИгра началась!" << endl << endl;
	this->board = new ReversiGameBoard(8);
	this->player1 = new ReversiGamePlayer();
	this->player2 = new ReversiGamePlayer();
	//cin.ignore();
	cout << "\tВведите имя игрока № 1, играющий X (черные фишки): ";
	getline(cin, playerName);
	player1->SetupPlayer(playerName, CellType_X);
	cout << "\tВведите имя игрока № 2, играющий O (белые фишки): ";
	getline(cin, playerName);
	board->FSetCell(3, 3, CellType_O);
	board->FSetCell(3, 4, CellType_X);
	board->FSetCell(4, 3, CellType_X);
	board->FSetCell(4, 4, CellType_O);
	player2->SetupPlayer(playerName, CellType_O);
	player1->SetBoard(this->board);
	player2->SetBoard(this->board);
	currentPlayer = player1;
	cout << endl;
	return true;
}

ReversiGameManager:: ~ReversiGameManager() {
	delete this->player2;
	delete this->player1;
	delete this->board;
}

void ReversiGameManager::ShowBoard() {
	this->board->Show();
}

void ReversiGameManager::MakeMove() {
	ShowBoard();
	while (!currentPlayer->MakeMove()) {
		cout << endl << "Недопустимый ход!\n Попробуйте ещё раз." << endl;
		ShowBoard();
	}
	currentPlayer = (currentPlayer == player1) ? player2 : player1;
}

ReversiGameManager::ReversiGameManager() {
}

bool ReversiGameManager::IsGameFinished() {
	return bGameFinished;
}