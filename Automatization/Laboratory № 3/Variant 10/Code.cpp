#define _CRT_SECURE_NO_WARNINGS  // Отключение предупреждений strcpy

#include "Header.h"  // Наш заголовочный файл

using namespace std;

int main(int argc, const char** argv) {
  list* Soldiers = list_create(); // Список мы создали
  list* Soldiers2 = list_create();
  {     
    list_insert(Soldiers, 0, surname45, &tmp1,&squad1); // Добавим несколько солдат
    list_insert(Soldiers, 1, surname1, &tmp2, &squad2);
    list_insert(Soldiers, 2, surname2, &tmp3, &squad3);
    list_insert(Soldiers, 3, surname3, &tmp4, &squad1);
    list_insert(Soldiers, 4, surname4, &tmp5, &squad2);
    list_insert(Soldiers, 5, surname5, &tmp6, &squad3);
    list_insert(Soldiers, 6, surname6, &tmp7, &squad1);
    list_insert(Soldiers, 7, surname7, &tmp8, &squad2);
    list_insert(Soldiers, 8, surname8, &tmp9, &squad3);
    list_insert(Soldiers, 9, surname9, &tmp10, &squad1);
    list_insert(Soldiers, 10, surname10, &tmp11, &squad2);
    list_insert(Soldiers, 11, surname11, &tmp12, &squad3);
    list_insert(Soldiers, 12, surname12, &tmp13, &squad1);
    list_insert(Soldiers, 13, surname13, &tmp14, &squad2);
    list_insert(Soldiers, 14, surname14, &tmp15, &squad3);
    list_insert(Soldiers, 15, surname15, &tmp16, &squad1);
    list_insert(Soldiers, 16, surname16, &tmp17, &squad2);
    list_insert(Soldiers, 17, surname17, &tmp18, &squad3);
    list_insert(Soldiers, 18, surname18, &tmp19, &squad1);
    list_insert(Soldiers, 19, surname19, &tmp20, &squad2);
    list_insert(Soldiers, 20, surname20, &tmp21, &squad3);
    list_insert(Soldiers, 21, surname21, &tmp22, &squad1);
    list_insert(Soldiers, 22, surname22, &tmp23, &squad2);
    list_insert(Soldiers, 23, surname23, &tmp24, &squad3);
    list_insert(Soldiers, 24, surname24, &tmp25, &squad1);
    list_insert(Soldiers, 25, surname25, &tmp26, &squad2);
    list_insert(Soldiers, 26, surname26, &tmp27, &squad3);
    list_insert(Soldiers, 27, surname27, &tmp28, &squad1);
    list_insert(Soldiers, 28, surname28, &tmp29, &squad2);
    list_insert(Soldiers, 29, surname29, &tmp30, &squad3);
    list_insert(Soldiers, 30, surname30, &tmp31, &squad1);
    list_insert(Soldiers, 31, surname31, &tmp32, &squad2);
    list_insert(Soldiers, 32, surname32, &tmp33, &squad3);
    list_insert(Soldiers, 33, surname33, &tmp34, &squad1);
    list_insert(Soldiers, 34, surname34, &tmp35, &squad2);
    list_insert(Soldiers, 35, surname35, &tmp36, &squad3);
    list_insert(Soldiers, 36, surname36, &tmp37, &squad1);
    list_insert(Soldiers, 37, surname37, &tmp38, &squad2);
    list_insert(Soldiers, 38, surname38, &tmp39, &squad3);
    list_insert(Soldiers, 39, surname39, &tmp40, &squad1);
    list_insert(Soldiers, 40, surname40, &tmp41, &squad2);
    list_insert(Soldiers, 41, surname41, &tmp42, &squad3);
    list_insert(Soldiers, 42, surname42, &tmp43, &squad1);
    list_insert(Soldiers, 43, surname43, &tmp44, &squad2);
    list_insert(Soldiers, 44, surname44, &tmp0, &squad3);
  }
  list_print(Soldiers);
  list_search(Soldiers);
  list_sort(Soldiers, Soldiers2);
  list_sort2(Soldiers2);
  // Пришла пора посмотреть, что там в нашем списке
  list_print(Soldiers2);
  list_search(Soldiers);
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

void list_insert(list* lst, int index, char* data, int* height, int* squad) 
{
  // Создадим указатель переменной элемента списка, 
  // и присвоим ему значение указателя на первый элемент списка
  soldier* base = lst->head;

  // Создадим указатель переменной на новый элемент и выделим под него память
  soldier* new_soldier = (soldier*)malloc(sizeof(soldier));

  // Выделим память внутри самого элемента структуры куда принимаем данные,
  // и получим указатель на него,
  // strlen() нужен, чтобы выделенная память была равна длинне полученной строки.
  new_soldier->surname = (char*)malloc(sizeof(char) * strlen(data));
  strcpy(new_soldier->surname, data);  // Копируем туда данные
  new_soldier->height = (int*)malloc(sizeof(int));
  new_soldier->height = height;
  new_soldier->squad = (int*)malloc(sizeof(int));
  new_soldier->squad = squad;

  // Пришла пора решить куда мы определим элемент,
  // т.к. у нас еще нет элементов, lst->head вернет нам NULL.
  // Следовательно нужно условие, при создании первого элемента списка.
  if (base == NULL) {
    // Этот элемент единственный, а значит его указатели будут NULL.
    new_soldier->next = NULL;
    new_soldier->prev = NULL;

    // При этом, он сам будет первым и последним в списке.
    lst->head = new_soldier;
    lst->tail = new_soldier;
    lst->count++;  // Увеличем кол-во на единицу
    return;
  }

  // Если индекс, который пришел будет меньше нуля, то будем вставлять в конец
  if (index < 0) {
    // Голова теперь будет ссылаться на новый элм. впереди себя
    base->prev = new_soldier;
    new_soldier->prev = NULL;
    new_soldier->next = base;  // А ссылка на след. элм. у нового будет на голову

    lst->head = new_soldier;  // Назначаем новый элемент головой
  }
  else {  // Тут все в обратном порядке
    base = lst->tail;  // Перейдем в хвост списка

    // Пусть он теперь ссылаеться на новый элемент
    base->next = new_soldier;
    new_soldier->next = NULL;  // Новый не будет иметь ссылки на следующий
    new_soldier->prev = base;  // А предыдущий у него будет хвост списка

    lst->tail = new_soldier;  // Назначаем новый элемент хвостом списка
  }
  lst->count++;  // Увеличим размер на единицу
}

void list_sort(list* lst, list* lst2)
{
  soldier* base = lst->head;

  while(base->next != NULL)
  {
    if (*base->squad == 1)
    {
      list_insert(lst2, lst->count, base->surname, base->height, base->squad);
    }
    base = base->next;
  }
  base = lst->head;
  while (base->next != NULL)
  {
    if (*base->squad == 2)
    {
      list_insert(lst2, lst->count, base->surname, base->height, base->squad);
    }
    base = base->next;
  }
  base = lst->head;
  while (base->next != NULL)
  {
    if (*base->squad == 3)
    {
      list_insert(lst2, lst->count, base->surname, base->height, base->squad);
    }
    base = base->next;
  }
  if (*base->squad == 3)
  {
    list_insert(lst2, lst->count, base->surname, base->height, base->squad);
  }
}

void list_sort2(list* lst2)
{
  soldier* base = lst2->head;

  int tmp;
  char* a;

  for (int i = 0;i <45; ++i) 
  {
    while (base->next != NULL) 
    {
      if ((*base->height > *base->next->height) && (*base->squad == *base->next->squad))
      {
        tmp = *base->height;
        a = base->surname;
        base->height = base->next->height;
        base->surname = base->next->surname;
        *base->next->height = tmp;
        base->next->surname = a;

      }
      base = base->next;
    }
  }
}

void list_search(list* lst) 
{
  int tmp_squad = 0;
  string tmp_surname;
  cout << "Input number of squad:" << endl;
  InputINT(&tmp_squad);
  cout << "Input surname:" << endl;
  cin >> tmp_surname;

  int i = 0;
  bool key = false;
  soldier* base = lst->head;

  while (base->next != NULL)
  {
    if ((*base->squad == tmp_squad) && (base->surname == tmp_surname))
    {
      cout << "Soldier was found!" << endl;
      printf("ID: %.2d || Surname: %s || Height: %.3d || Squad: %.1d ||\n", i, base->surname, *base->height, *base->squad);
      key = true;
      break;
    }
    base = base->next;
    ++i;
  }
  if (key == false)
  {
    cout << "Soldier wasn't found!" << endl << endl;
  }
}

void list_print(list* lst) {
  soldier* base = lst->head; // переходим к началу списка
  puts("\033[45m***Printing a list***\033[0m");

  if (lst->count == 0) { // если список пустой, так и говорим
    printf("The list is empty\n");
    return;
  }

  int i = 0; // организуем счетчик
  while (base != NULL) { // Пока все элементы не кончаться мы будем их перебирать
    printf("ID: %.2d || Surname: %s || Height: %.3d || Squad: %.1d ||\n", i, base->surname, *base->height, *base->squad); // выводя на экран
    
    base = base->next;
    ++i;
  }
  // В конце покажем какой размер у нашего списка
  printf("\nBase size: %d\n", lst->count);
}

void InputINT(int* tmp)
{
  while (!(cin >> *tmp) || (cin.peek() != '\n') || (*tmp <= 0))
  {
    cin.clear();
    while (cin.get() != '\n');
    cout << "Incorrect input!" << endl;
  }
}
