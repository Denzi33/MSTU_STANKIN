#pragma once  // Для однократного подключения заголовочного файла
#include <iostream>  // Для работы со стандартными функциями
#include <string.h>  // Для работы со строками
#include <stdlib.h>  // Для работы с памятью
#include <ctime>  // Для задавания случайного числа от 25 до 54
#include <Windows.h>

// Структура элемента списка
typedef struct student
{
  char* surname;  // По этому указателю мы храним фамилии студентов
  int* number = 0;  // По этому указателю мы храним балл студента
  struct student* next;  // Это у нас ссылка на следующий указатель
  struct student* prev;  // Это у нас ссылка на предыдущий указатель
} student;

// Общая структура списка
typedef struct list
{
  int count;  // Информация о размере списка
  student* head;  // Это ссылка на головной элемент
  student* tail;  // Это у нас ссылка на последний элемент (хвост списка)
} list;

list* list_create();  // Создает список, возвращает его.
void list_insert(list*, int, char*, int*);  // Функция для добавления элементов
void list_search(list*);  // Функция получения индекса по элементу
void list_print(list*);  // Функция вывода списка
void list_sort(list*);
void Swap(char *a, char *b);
void list_sort2(list*);
bool Checker(char*, char*);
void InputINT(int* tmp); // Функция проверки корректности ввода баллов

// Сет данных - студенты
char student1[20] = "Андреев";
char student2[20] = "Абоелкомсан";
char student3[20] = "Ашуров";
char student4[20] = "Анисимов";
char student5[20] = "Арапов";
char student6[20] = "Бернев";
char student7[20] = "Аскаров";
char student8[20] = "Буров";
char student9[20] = "Брюшенцов";
char student10[20] = "Афанасьев";
char student11[20] = "Волохова";
char student12[20] = "Выжлов";
char student13[20] = "Борис";
char student14[20] = "Гасанов";
char student15[20] = "Герасимов";
char student16[20] = "Бочарова";
char student17[20] = "Голубев";
char student18[20] = "Грибанов";
char student19[20] = "Быков";
char student20[20] = "Елсуков";
char student21[20] = "Дегтярев";
char student22[20] = "Быков";
char student23[20] = "Ермачков";
char student24[20] = "Дулев";
char student25[20] = "Габдуллина";
char student26[20] = "Зотов";
char student27[20] = "Карданов";
char student28[20] = "Гулаков";
char student29[20] = "Калашников";
char student30[20] = "Косяков";
char student31[20] = "Ермаков";
char student32[20] = "Карпеченков";
char student33[20] = "Куимов";
char student34[20] = "Зародыш";
char student35[20] = "Клюев";
char student36[20] = "Лебедева";
char student37[20] = "Зверев";
char student38[20] = "Кудымов";
char student39[20] = "Лушников";
char student40[20] = "Игнатьев";
char student41[20] = "Латипов";
char student42[20] = "Любимов";
char student43[20] = "Катунин";
char student44[20] = "Лория";
char student45[20] = "Марковец";
char student46[20] = "Клепчук";
char student47[20] = "Ярослав";
char student48[20] = "Мироненко";  
char student49[20] = "Королев";
char student50[20] = "Маслова";
char student51[20] = "Орлов";
char student52[20] = "Кузьмич";
char student53[20] = "Мелешенко";
char student54[20] = "Помельников";
char student55[20] = "Лазарева";
char student56[20] = "Метельков";
char student57[20] = "Раменский";
char student58[20] = "Леонов";
char student59[20] = "Протопопов";
char student60[20] = "Савилов";
char student61[20] = "Семенов";
char student62[20] = "Рудометов";
char student63[20] = "Санталов";
char student64[20] = "Сергеев";
char student65[20] = "Сабин";
char student66[20] = "Сахаров";
char student67[20] = "Трегубов";
char student68[20] = "Санжиев";
char student69[20] = "Семиноженко";
char student70[20] = "Ушков";
char student71[20] = "Тараканов";
char student72[20] = "Соколов";
char student73[20] = "Хлызов";
char student74[20] = "Турсунов";
char student75[20] = "Тростин";
char student76[20] = "Чепрасов";
char student77[20] = "Турсунов";
char student78[20] = "Усов";
char student79[20] = "Юларжи";
char student80[20] = "Хотарев";
char student81[20] = "Хохлов";
char student82[20] = "Яськевич";
char student83[20] = "Хотарев";
char student84[20] = "Шилов";

// Сет данных баллов студентов
int tmp1 = rand() % 29 + 25;
int tmp2 = rand() % 29 + 25;
int tmp3 = rand() % 29 + 25;
int tmp4 = rand() % 29 + 25;
int tmp5 = rand() % 29 + 25;
int tmp6 = rand() % 29 + 25;
int tmp7 = rand() % 29 + 25;
int tmp8 = rand() % 29 + 25;
int tmp9 = rand() % 29 + 25;
int tmp10 = rand() % 29 + 25;
int tmp11 = rand() % 29 + 25;
int tmp12 = rand() % 29 + 25;
int tmp13 = rand() % 29 + 25;
int tmp14 = rand() % 29 + 25;
int tmp15 = rand() % 29 + 25;
int tmp16 = rand() % 29 + 25;
int tmp17 = rand() % 29 + 25;
int tmp18 = rand() % 29 + 25;
int tmp19 = rand() % 29 + 25;
int tmp20 = rand() % 29 + 25;
int tmp21 = rand() % 29 + 25;
int tmp22 = rand() % 29 + 25;
int tmp23 = rand() % 29 + 25;
int tmp24 = rand() % 29 + 25;
int tmp25 = rand() % 29 + 25;
int tmp26 = rand() % 29 + 25;
int tmp27 = rand() % 29 + 25;
int tmp28 = rand() % 29 + 25;
int tmp29 = rand() % 29 + 25;
int tmp30 = rand() % 29 + 25;
int tmp31 = rand() % 29 + 25;
int tmp32 = rand() % 29 + 25;
int tmp33 = rand() % 29 + 25;
int tmp34 = rand() % 29 + 25;
int tmp35 = rand() % 29 + 25;
int tmp36 = rand() % 29 + 25;
int tmp37 = rand() % 29 + 25;
int tmp38 = rand() % 29 + 25;
int tmp39 = rand() % 29 + 25;
int tmp40 = rand() % 29 + 25;
int tmp41 = rand() % 29 + 25;
int tmp42 = rand() % 29 + 25;
int tmp43 = rand() % 29 + 25;
int tmp44 = rand() % 29 + 25;
int tmp45 = rand() % 29 + 25;
int tmp46 = rand() % 29 + 25;
int tmp47 = rand() % 29 + 25;
int tmp48 = rand() % 29 + 25;
int tmp49 = rand() % 29 + 25;
int tmp50 = rand() % 29 + 25;
int tmp51 = rand() % 29 + 25;
int tmp52 = rand() % 29 + 25;
int tmp53 = rand() % 29 + 25;
int tmp54 = rand() % 29 + 25;
int tmp55 = rand() % 29 + 25;
int tmp56 = rand() % 29 + 25;
int tmp57 = rand() % 29 + 25;
int tmp58 = rand() % 29 + 25;
int tmp59 = rand() % 29 + 25;
int tmp60 = rand() % 29 + 25;
int tmp61 = rand() % 29 + 25;
int tmp62 = rand() % 29 + 25;
int tmp63 = rand() % 29 + 25;
int tmp64 = rand() % 29 + 25;
int tmp65 = rand() % 29 + 25;
int tmp66 = rand() % 29 + 25;
int tmp67 = rand() % 29 + 25;
int tmp68 = rand() % 29 + 25;
int tmp69 = rand() % 29 + 25;
int tmp70 = rand() % 29 + 25;
int tmp71 = rand() % 29 + 25;
int tmp72 = rand() % 29 + 25;
int tmp73 = rand() % 29 + 25;
int tmp74 = rand() % 29 + 25;
int tmp75 = rand() % 29 + 25;
int tmp76 = rand() % 29 + 25;
int tmp77 = rand() % 29 + 25;
int tmp78 = rand() % 29 + 25;
int tmp79 = rand() % 29 + 25;
int tmp80 = rand() % 29 + 25;
int tmp81 = rand() % 29 + 25;
int tmp82 = rand() % 29 + 25;
int tmp83 = rand() % 29 + 25;
int tmp84 = rand() % 29 + 25;
