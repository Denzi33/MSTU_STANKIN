#pragma once
#include <iostream>  // Стандартная библиотека
#include <string.h>  // Для работы со строками
#include <stdlib.h>  // Для работы с памятью
#include <ctime>  // Для рандомайза чисел

// Структура элемента списка
typedef struct number
{
  int* firstNumber = 0;  // По этому указателю мы храним первую часть номера
  char* code;  // По этому указателю мы храним вторую часть номера
  int* secondNumber = 0;  // По этому указателю мы храним третью часть номера
  struct number* next;  // Это у нас ссылка на следующий указатель
  struct number* prev;  // Это у нас ссылка на предыдущий указатель
} number;

// Общая структура списка
typedef struct list
{
  int count;  // Информация о размере списка
  number* head;  // Это ссылка на головной элемент
  number* tail;  // Это у нас ссылка на последний элемент (хвост списка)
} list;

list* list_create();  // Создает список, возвращает список.
void list_insert(list* lst, int index, char* mark, int* first, int* second);  // Функция для добавления элементов
void list_search(list* lst);  // Функция поиска нужного элемента
void list_print(list* lst);  // Функция вывода списка
void list_sort(list* lst);
void InputINT(int* tmp); // Функция проверки корректности ввода целых чисел

// Сет данных вторая часть
char mark1[5] = "ABC";
char mark2[5] = "ACB";
char mark3[5] = "CBA";
char mark4[5] = "BMW";
char mark5[5] = "MWB";
char mark6[5] = "WMB";
char mark7[5] = "WBM";
char mark8[5] = "ZXC";
char mark9[5] = "CZX";
char mark10[5] = "CXZ";
char mark11[5] = "ZCX";
char mark12[5] = "QWE";
char mark13[5] = "EWQ";
char mark14[5] = "WQE";
char mark15[5] = "WEQ";
char mark16[5] = "EEQ";
char mark17[5] = "QEQ";
char mark18[5] = "EQE";
char mark19[5] = "QEE";
char mark20[5] = "ASA";
char mark21[5] = "AAS";
char mark22[5] = "SAA";
char mark23[5] = "AAA";
char mark24[5] = "QQQ";
char mark25[5] = "WWW";
char mark26[5] = "EEE";
char mark27[5] = "RRR";
char mark28[5] = "TTT";
char mark29[5] = "YYY";
char mark30[5] = "UUU";
char mark31[5] = "III";
char mark32[5] = "OOO";
char mark33[5] = "PPP";
char mark34[5] = "LLL";
char mark35[5] = "KKK";
char mark36[5] = "JJJ";
char mark37[5] = "HHH";
char mark38[5] = "GGG";
char mark39[5] = "FFF";
char mark40[5] = "DDD";
char mark41[5] = "ZZZ";
char mark42[5] = "XXX";
char mark43[5] = "CCC";
char mark44[5] = "VVV";
char mark45[5] = "NNN";
char mark46[5] = "MMM";
char mark47[5] = "FDR";
char mark48[5] = "FCB";
char mark49[5] = "FOR";
char mark50[5] = "HEX";

// Сет данных первая часть
int tmp1 = rand() % 10;
int tmp2 = rand() % 10;
int tmp3 = rand() % 10;
int tmp4 = rand() % 10;
int tmp5 = rand() % 10;
int tmp6 = rand() % 10;
int tmp7 = rand() % 10;
int tmp8 = rand() % 10;
int tmp9 = rand() % 10;
int tmp10 = rand() % 10;
int tmp11 = rand() % 10;
int tmp12 = rand() % 10;
int tmp13 = rand() % 10;
int tmp14 = rand() % 10;
int tmp15 = rand() % 10;
int tmp16 = rand() % 10;
int tmp17 = rand() % 10;
int tmp18 = rand() % 10;
int tmp19 = rand() % 10;
int tmp20 = rand() % 10;
int tmp21 = rand() % 10;
int tmp22 = rand() % 10;
int tmp23 = rand() % 10;
int tmp24 = rand() % 10;
int tmp25 = rand() % 10;
int tmp26 = rand() % 10;
int tmp27 = rand() % 10;
int tmp28 = rand() % 10;
int tmp29 = rand() % 10;
int tmp30 = rand() % 10;
int tmp31 = rand() % 10;
int tmp32 = rand() % 10;
int tmp33 = rand() % 10;
int tmp34 = rand() % 10;
int tmp35 = rand() % 10;
int tmp36 = rand() % 10;
int tmp37 = rand() % 10;
int tmp38 = rand() % 10;
int tmp39 = rand() % 10;
int tmp40 = rand() % 10;
int tmp41 = rand() % 10;
int tmp42 = rand() % 10;
int tmp43 = rand() % 10;
int tmp44 = rand() % 10;
int tmp45 = rand() % 10;
int tmp46 = rand() % 10;
int tmp47 = rand() % 10;
int tmp48 = rand() % 10;
int tmp49 = rand() % 10;
int tmp50 = rand() % 10;

// Сет данных часть 3
int mp1 = rand() % 100;
int mp2 = rand() % 100;
int mp3 = rand() % 100;
int mp4 = rand() % 100;
int mp5 = rand() % 100;
int mp6 = rand() % 100;
int mp7 = rand() % 100;
int mp8 = rand() % 100;
int mp9 = rand() % 100;
int mp10 = rand() % 100;
int mp11 = rand() % 100;
int mp12 = rand() % 100;
int mp13 = rand() % 100;
int mp14 = rand() % 100;
int mp15 = rand() % 100;
int mp16 = rand() % 100;
int mp17 = rand() % 100;
int mp18 = rand() % 100;
int mp19 = rand() % 100;
int mp20 = rand() % 100;
int mp21 = rand() % 100;
int mp22 = rand() % 100;
int mp23 = rand() % 100;
int mp24 = rand() % 100;
int mp25 = rand() % 100;
int mp26 = rand() % 100;
int mp27 = rand() % 100;
int mp28 = rand() % 100;
int mp29 = rand() % 100;
int mp30 = rand() % 100;
int mp31 = rand() % 100;
int mp32 = rand() % 100;
int mp33 = rand() % 100;
int mp34 = rand() % 100;
int mp35 = rand() % 100;
int mp36 = rand() % 100;
int mp37 = rand() % 100;
int mp38 = rand() % 100;
int mp39 = rand() % 100;
int mp40 = rand() % 100;
int mp41 = rand() % 100;
int mp42 = rand() % 100;
int mp43 = rand() % 100;
int mp44 = rand() % 100;
int mp45 = rand() % 100;
int mp46 = rand() % 100;
int mp47 = rand() % 100;
int mp48 = rand() % 100;
int mp49 = rand() % 100;
int mp50 = rand() % 100;
