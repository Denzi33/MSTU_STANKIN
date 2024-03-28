#define _CRT_SECURE_NO_WARNINGS  // Отключение предупреждений strcpy

#include "Header.h"  // Наш заголовочный файл

using namespace std;  // Использование стандартного пространства имён

int main(int argc, const char** argv) {
  list* Numbers = list_create(); // Список мы создали

  { // Добавим номера
    list_insert(Numbers, 1, mark1, &tmp1, &mp1);
    list_insert(Numbers, 2, mark2, &tmp2, &mp2);
    list_insert(Numbers, 3, mark3, &tmp3, &mp3);
    list_insert(Numbers, 4, mark4, &tmp4, &mp4);
    list_insert(Numbers, 5, mark5, &tmp5, &mp5);
    list_insert(Numbers, 6, mark6, &tmp6, &mp6);
    list_insert(Numbers, 7, mark7, &tmp7, &mp7);
    list_insert(Numbers, 8, mark8, &tmp8, &mp8);
    list_insert(Numbers, 9, mark9, &tmp9, &mp9);
    list_insert(Numbers, 10, mark10, &tmp10, &mp10);
    list_insert(Numbers, 11, mark11, &tmp11, &mp11);
    list_insert(Numbers, 12, mark12, &tmp12, &mp12);
    list_insert(Numbers, 13, mark13, &tmp13, &mp13);
    list_insert(Numbers, 14, mark14, &tmp14, &mp14);
    list_insert(Numbers, 15, mark15, &tmp15, &mp15);
    list_insert(Numbers, 16, mark16, &tmp16, &mp16);
    list_insert(Numbers, 17, mark17, &tmp17, &mp17);
    list_insert(Numbers, 18, mark18, &tmp18, &mp18);
    list_insert(Numbers, 19, mark19, &tmp19, &mp19);
    list_insert(Numbers, 20, mark20, &tmp20, &mp20);
    list_insert(Numbers, 21, mark21, &tmp21, &mp21);
    list_insert(Numbers, 22, mark22, &tmp22, &mp22);
    list_insert(Numbers, 23, mark23, &tmp23, &mp23);
    list_insert(Numbers, 24, mark24, &tmp24, &mp24);
    list_insert(Numbers, 25, mark25, &tmp25, &mp25);
    list_insert(Numbers, 26, mark26, &tmp26, &mp26);
    list_insert(Numbers, 27, mark27, &tmp27, &mp27);
    list_insert(Numbers, 28, mark28, &tmp28, &mp28);
    list_insert(Numbers, 29, mark29, &tmp29, &mp29);
    list_insert(Numbers, 30, mark30, &tmp30, &mp30);
    list_insert(Numbers, 31, mark31, &tmp31, &mp31);
    list_insert(Numbers, 32, mark32, &tmp32, &mp32);
    list_insert(Numbers, 33, mark33, &tmp33, &mp33);
    list_insert(Numbers, 34, mark34, &tmp34, &mp34);
    list_insert(Numbers, 35, mark35, &tmp35, &mp35);
    list_insert(Numbers, 36, mark36, &tmp36, &mp36);
    list_insert(Numbers, 37, mark37, &tmp37, &mp37);
    list_insert(Numbers, 38, mark38, &tmp38, &mp38);
    list_insert(Numbers, 39, mark39, &tmp39, &mp39);
    list_insert(Numbers, 40, mark40, &tmp40, &mp40);
    list_insert(Numbers, 41, mark41, &tmp41, &mp41);
    list_insert(Numbers, 42, mark42, &tmp42, &mp42);
    list_insert(Numbers, 43, mark43, &tmp43, &mp43);
    list_insert(Numbers, 44, mark44, &tmp44, &mp44);
    list_insert(Numbers, 45, mark45, &tmp45, &mp45);
    list_insert(Numbers, 46, mark46, &tmp46, &mp46);
    list_insert(Numbers, 47, mark47, &tmp47, &mp47);
    list_insert(Numbers, 48, mark48, &tmp48, &mp48);
    list_insert(Numbers, 49, mark49, &tmp49, &mp49);
    list_insert(Numbers, 50, mark50, &tmp50, &mp50);
  }
  list_print(Numbers);
  list_sort(Numbers);
  list_print(Numbers);
  list_search(Numbers);
}

list* list_create()
{
  // Создадим указатель на переменную структуры списка и выделим немного памяти для неё
  list* lst = (list*)malloc(sizeof(list));

  // Задаем первоначальные значения
  lst->count = 0;  // Наш список пуст
  lst->head = NULL;  // Первого элемента у нас нет
  lst->tail = NULL;  // И последнего

  return lst;
}

void list_insert(list* lst, int index, char* code, int* first, int* second)
{
  // Создадим указатель переменной элемента списка, 
  // и присвоим ему значение указателя на первый элемент списка
  number* base = lst->head;

  // Создадим указатель переменной на новый элемент и выделим под него память
  number* new_number = (number*)malloc(sizeof(number));

  // Выделим память внутри самого элемента структуры куда принимаем данные,
  // и получим указатель на него,
  // strlen() нужен, чтобы выделенная память была равна длинне полученной строки.
  new_number->code = (char*)malloc(sizeof(char) * strlen(code));
  strcpy(new_number->code, code);  // Копируем туда данные
  new_number->firstNumber = (int*)malloc(sizeof(int));
  new_number->firstNumber = first;
  new_number->secondNumber = (int*)malloc(sizeof(int));
  new_number->secondNumber = second;

  // Пришла пора решить куда мы определим элемент,
  // т.к. у нас еще нет элементов, lst->head вернет нам NULL.
  // Следовательно нужно условие, при создании первого элемента списка.
  if (base == NULL) {
    // Этот элемент единственный, а значит его указатели будут NULL.
    new_number->next = NULL;
    new_number->prev = NULL;

    // При этом, он сам будет первым и последним в списке.
    lst->head = new_number;
    lst->tail = new_number;
    lst->count++;  // Увеличем кол-во на единицу
    return;
  }

  // Если индекс, который пришел будет меньше нуля, то будем вставлять в конец
  if (index < 0) {
    // Голова теперь будет ссылаться на новый элм. впереди себя
    base->prev = new_number;
    new_number->prev = NULL;
    new_number->next = base;  // А ссылка на след. элм. у нового будет на голову

    lst->head = new_number;  // Назначаем новый элемент головой
  }
  else {  // Тут все в обратном порядке
    base = lst->tail;  // Перейдем в хвост списка

    // Пусть он теперь ссылаеться на новый элемент
    base->next = new_number;
    new_number->next = NULL;  // Новый не будет иметь ссылки на следующий
    new_number->prev = base;  // А предыдущий у него будет хвост списка

    lst->tail = new_number;  // Назначаем новый элемент хвостом списка
  }
  lst->count++;  // Увеличим размер на единицу
}

void list_sort(list* lst)
{
  number* base;

  int tmp;
  int Tmp;
  char* a;

  for (int i = 0; i < 50; ++i)
  {
    base = lst->head;
    while (base->next != NULL)
    {
      if (base->code[0] > base->next->code[0])
      {
        tmp = *base->firstNumber;
        a = base->code;
        Tmp = *base->secondNumber;

       *base->firstNumber = *base->next->firstNumber;
        base->code = base->next->code;
        *base->secondNumber = *base->next->secondNumber;

        *base->next->firstNumber = tmp;
        base->next->code = a;
        *base->secondNumber = Tmp;
      }
      base = base->next;
    }
  }

  for (int i = 0; i < 50; ++i)
  {
    base = lst->head;
    while (base->next != NULL)
    {
      if ((base->code[1] > base->next->code[1]) && (base->code[0] == base->next->code[0]))
      {
        tmp = *base->firstNumber;
        a = base->code;
        Tmp = *base->secondNumber;

        *base->firstNumber = *base->next->firstNumber;
        base->code = base->next->code;
        *base->secondNumber = *base->next->secondNumber;

        *base->next->firstNumber = tmp;
        base->next->code = a;
        *base->secondNumber = Tmp;
      }
      base = base->next;
    }
  }

  for (int i = 0; i < 50; ++i)
  {
    base = lst->head;
    while (base->next != NULL)
    {
      if ((base->code[2] > base->next->code[2]) && (base->code[1] == base->next->code[1]))
      {
        tmp = *base->firstNumber;
        a = base->code;
        Tmp = *base->secondNumber;

        *base->firstNumber = *base->next->firstNumber;
        base->code = base->next->code;
        *base->secondNumber = *base->next->secondNumber;

        *base->next->firstNumber = tmp;
        base->next->code = a;
        *base->secondNumber = Tmp;
      }
      base = base->next;
    }
  }

  for (int i = 0; i < 50; ++i)
  {
    base = lst->head;
    while (base->next != NULL)
    {
      if ((base->code == base->next->code) && (*base->firstNumber > *base->next->firstNumber))
      {
        tmp = *base->firstNumber;
        a = base->code;
        Tmp = *base->secondNumber;

        *base->firstNumber = *base->next->firstNumber;
        base->code = base->next->code;
        *base->secondNumber = *base->next->secondNumber;

        *base->next->firstNumber = tmp;
        base->next->code = a;
        *base->secondNumber = Tmp;
      }
      base = base->next;
    }
  }

  for (int i = 0; i < 50; ++i)
  {
    base = lst->head;
    while (base->next != NULL)
    {
      if ((base->code == base->next->code) && (*base->firstNumber == *base->next->firstNumber) && (*base->secondNumber > *base->next->secondNumber))
      {
        tmp = *base->firstNumber;
        a = base->code;
        Tmp = *base->secondNumber;

        *base->firstNumber = *base->next->firstNumber;
        base->code = base->next->code;
        *base->secondNumber = *base->next->secondNumber;

        *base->next->firstNumber = tmp;
        base->next->code = a;
        *base->secondNumber = Tmp;
      }
      base = base->next;
    }
  }
}

void list_search(list* lst)
{
  int tmp = 0;
  char a[25];
  cout << "Input number:" << endl;
  InputINT(&tmp);
  cout << "Input mark:" << endl;
  cin >> a;

  int i = 0;
  bool key = false;
  number* base = lst->head;

  while (base->next != NULL)
  {
    if ((*base->firstNumber == tmp) && (base->code[0] == a[0]) && (base->code[1] == a[1]) && (base->code[2] == a[2]))
    {
      cout << "Number was found!" << endl;
      printf("ID: %.2d || Number: %d %s %d ||\n", i, *base->firstNumber, base->code, *base->secondNumber);
      cout << "SOA";
      key = true;
      break;
    }
    base = base->next;
    ++i;
  }

  if ((*base->firstNumber == tmp) && (base->code[0] == a[0]) && (base->code[1] == a[1]) && (base->code[2] == a[2]))
  {
    cout << "Number was found!" << endl;
    printf("ID: %.2d || Number: %d %s %d ||\n", i, *base->firstNumber, base->code, *base->secondNumber);
    key = true;
  }
  base = base->next;
  ++i;

  if (key == false)
  {
    cout << "Number wasn't found!" << endl << endl;
  }
}

void list_print(list* lst) {
  number* base = lst->head; // переходим к началу списка
  puts("\033[45m***Printing a list***\033[0m");

  if (lst->count == 0) { // если список пустой, так и говорим
    printf("The list is empty\n");
    return;
  }

  int i = 0; // организуем счетчик
  while (base != NULL) { // Пока все элементы не кончаться мы будем их перебирать
    printf("ID: %.2d || Number: %d %s %d ||\n", i, *base->firstNumber, base->code, *base->secondNumber); // выводя на экран

    base = base->next;
    ++i;
  }
  // В конце покажем какой размер у нашего списка
  printf("\nBase size: %d\n", lst->count);
}

void InputINT(int* tmp)
{
  while (!(cin >> *tmp) || (cin.peek() != '\n') || (*tmp <= 0) || (*tmp > 9))
  {
    cin.clear();
    while (cin.get() != '\n');
    cout << "Incorrect input!" << endl;
  }
}
