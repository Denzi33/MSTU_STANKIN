#pragma once
#include <iostream>
#include <string.h>  // Для работы со строками
#include <stdlib.h>  // Для работы с памятью
#include <ctime>

// Структура элемента списка
typedef struct soldier 
{ 
  char* surname;  // По этому указателю мы храним фамилию
  int* squad = 0;  // По этому указателю мы храним взвод
  int* height = 0;  // По этому указателю мы храним рост
  struct soldier* next;  // Это у нас ссылка на следующий указатель
  struct soldier* prev;  // Это у нас ссылка на предыдущий указатель
} soldier;

// Общая структура списка
typedef struct list 
{
  int count;  // Информация о размере списка
  soldier* head;  // Это ссылка на головной элемент
  soldier* tail;  // Это у нас ссылка на последний элемент (хвост списка)
} list;

list* list_create();  // Создает список. возвращает список.
void list_insert(list* lst, int index, char* data, int* height, int* squad);  // Функция для добавления элементов
void list_search(list* lst);  // Функция получения индекса по элементу
void list_print(list* lst);  // Функция вывода списка
void list_sort(list* lst1, list* lst2);
void list_sort2(list* lst2);
//void list_sort2(list* lst2);
void InputINT(int* tmp); // Функция проверки корректности ввода взвода

// Сет данных - фамилии
char surname1[10] = "Ivanov";
char surname2[10] = "Smirnov";
char surname3[10] = "Kuznecov";
char surname4[10] = "Popov";
char surname5[10] = "Vasilev";
char surname6[10] = "Petrov";
char surname7[10] = "Sokolov";
char surname8[10] = "Mihailov";
char surname9[10] = "Novikov";
char surname10[10] = "Fedorov";
char surname11[10] = "Morozov";
char surname12[10] = "Volkov";
char surname13[10] = "Alekseev";
char surname14[10] = "Lebedev";
char surname15[10] = "Semenov";
char surname16[10] = "Egorov";
char surname17[10] = "Pavlov";
char surname18[10] = "Kozlov";
char surname19[10] = "Stepanov";
char surname20[10] = "Nikolaev";
char surname21[10] = "Orlov";
char surname22[10] = "Andreev";
char surname23[10] = "Makarov";
char surname24[10] = "Nikitin";
char surname25[10] = "Zaharov";
char surname26[10] = "Zaicev";
char surname27[10] = "Solovyev";
char surname28[10] = "Borisov";
char surname29[10] = "Yakovlev";
char surname30[10] = "Grigoriev";
char surname31[10] = "Romanov";
char surname32[10] = "Vorobiyev";
char surname33[10] = "Sergeev";
char surname34[10] = "Kuzmin";
char surname35[10] = "Frolov";
char surname36[12] = "Alexandrov";
char surname37[10] = "Dmitriev";
char surname38[10] = "Korolev";
char surname39[10] = "Gusev";
char surname40[10] = "Kiselev";
char surname41[10] = "Iliyin";
char surname42[10] = "Maksimov";
char surname43[10] = "Polyakov";
char surname44[10] = "Sorokin";
char surname45[10] = "Belov";

// Сет данных - взводы
int squad1 = 1;
int squad2 = 2;
int squad3 = 3;

// Сет данных роста
int tmp0 = rand() % 60 + 150;
int tmp1 = rand() % 60 + 150;
int tmp2 = rand() % 60 + 150;
int tmp3 = rand() % 60 + 150;
int tmp4 = rand() % 60 + 150;
int tmp5 = rand() % 60 + 150;
int tmp6 = rand() % 60 + 150;
int tmp7 = rand() % 60 + 150;
int tmp8 = rand() % 60 + 150;
int tmp9 = rand() % 60 + 150;
int tmp10 = rand() % 60 + 150;
int tmp11 = rand() % 60 + 150;
int tmp12 = rand() % 60 + 150;
int tmp13 = rand() % 60 + 150;
int tmp14 = rand() % 60 + 150;
int tmp15 = rand() % 60 + 150;
int tmp16 = rand() % 60 + 150;
int tmp17 = rand() % 60 + 150;
int tmp18 = rand() % 60 + 150;
int tmp19 = rand() % 60 + 150;
int tmp20 = rand() % 60 + 150;
int tmp21 = rand() % 60 + 150;
int tmp22 = rand() % 60 + 150;
int tmp23 = rand() % 60 + 150;
int tmp24 = rand() % 60 + 150;
int tmp25 = rand() % 60 + 150;
int tmp26 = rand() % 60 + 150;
int tmp27 = rand() % 60 + 150;
int tmp28 = rand() % 60 + 150;
int tmp29 = rand() % 60 + 150;
int tmp30 = rand() % 60 + 150;
int tmp31 = rand() % 60 + 150;
int tmp32 = rand() % 60 + 150;
int tmp33 = rand() % 60 + 150;
int tmp34 = rand() % 60 + 150;
int tmp35 = rand() % 60 + 150;
int tmp36 = rand() % 60 + 150;
int tmp37 = rand() % 60 + 150;
int tmp38 = rand() % 60 + 150;
int tmp39 = rand() % 60 + 150;
int tmp40 = rand() % 60 + 150;
int tmp41 = rand() % 60 + 150;
int tmp42 = rand() % 60 + 150;
int tmp43 = rand() % 60 + 150;
int tmp44 = rand() % 60 + 150;
