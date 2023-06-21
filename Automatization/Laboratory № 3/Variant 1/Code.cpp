#define _CRT_SECURE_NO_WARNINGS  // Отключение предупреждений strcpy

#include "Header.h"  // Наш заголовочный файл

using namespace std;  // Использование 

int main(int argc, const char** argv)
{
  setlocale(LC_ALL, "Russian");  // Подключение русского языка в консоли
  SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
  SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода

  list* Students = list_create(); // Список мы создали
  {
    list_insert(Students, 1, student1, &tmp1); // Добавим несколько солдат
    list_insert(Students, 2, student2, &tmp2);
    list_insert(Students, 3, student3, &tmp3);
    list_insert(Students, 4, student4, &tmp4);
    list_insert(Students, 5, student5, &tmp5);
    list_insert(Students, 6, student6, &tmp6);
    list_insert(Students, 7, student7, &tmp7);
    list_insert(Students, 8, student8, &tmp8);
    list_insert(Students, 9, student9, &tmp9);
    list_insert(Students, 10, student10, &tmp10);
    list_insert(Students, 11, student11, &tmp11);
    list_insert(Students, 12, student12, &tmp12);
    list_insert(Students, 13, student13, &tmp13);
    list_insert(Students, 14, student14, &tmp14);
    list_insert(Students, 15, student15, &tmp15);
    list_insert(Students, 16, student16, &tmp16);
    list_insert(Students, 17, student17, &tmp17);
    list_insert(Students, 18, student18, &tmp18);
    list_insert(Students, 19, student19, &tmp19);
    list_insert(Students, 20, student20, &tmp20);
    list_insert(Students, 21, student21, &tmp21);
    list_insert(Students, 22, student22, &tmp22);
    list_insert(Students, 23, student23, &tmp23);
    list_insert(Students, 24, student24, &tmp24);
    list_insert(Students, 25, student25, &tmp25);
    list_insert(Students, 26, student26, &tmp26);
    list_insert(Students, 27, student27, &tmp27);
    list_insert(Students, 28, student28, &tmp28);
    list_insert(Students, 29, student29, &tmp29);
    list_insert(Students, 30, student30, &tmp30);
    list_insert(Students, 31, student31, &tmp31);
    list_insert(Students, 32, student32, &tmp32);
    list_insert(Students, 33, student33, &tmp33);
    list_insert(Students, 34, student34, &tmp34);
    list_insert(Students, 35, student35, &tmp35);
    list_insert(Students, 36, student36, &tmp36);
    list_insert(Students, 37, student37, &tmp37);
    list_insert(Students, 38, student38, &tmp38);
    list_insert(Students, 39, student39, &tmp39);
    list_insert(Students, 40, student40, &tmp40);
    list_insert(Students, 41, student41, &tmp41);
    list_insert(Students, 42, student42, &tmp42);
    list_insert(Students, 43, student43, &tmp43);
    list_insert(Students, 44, student44, &tmp44);
    list_insert(Students, 45, student45, &tmp45);
    list_insert(Students, 46, student46, &tmp46);
    list_insert(Students, 47, student47, &tmp47);
    list_insert(Students, 48, student48, &tmp48);
    list_insert(Students, 49, student49, &tmp49);
    list_insert(Students, 50, student50, &tmp50);
    list_insert(Students, 51, student51, &tmp51);
    list_insert(Students, 52, student52, &tmp52);
    list_insert(Students, 53, student53, &tmp53);
    list_insert(Students, 54, student54, &tmp54);
    list_insert(Students, 55, student55, &tmp55);
    list_insert(Students, 56, student56, &tmp56);
    list_insert(Students, 57, student57, &tmp57);
    list_insert(Students, 58, student58, &tmp58);
    list_insert(Students, 59, student59, &tmp59);
    list_insert(Students, 60, student60, &tmp60);
    list_insert(Students, 61, student61, &tmp61);
    list_insert(Students, 62, student62, &tmp62);
    list_insert(Students, 63, student63, &tmp63);
    list_insert(Students, 64, student64, &tmp64);
    list_insert(Students, 65, student65, &tmp65);
    list_insert(Students, 66, student66, &tmp66);
    list_insert(Students, 67, student67, &tmp67);
    list_insert(Students, 68, student68, &tmp68);
    list_insert(Students, 69, student69, &tmp69);
    list_insert(Students, 70, student70, &tmp70);
    list_insert(Students, 71, student71, &tmp71);
    list_insert(Students, 72, student72, &tmp72);
    list_insert(Students, 73, student73, &tmp73);
    list_insert(Students, 74, student74, &tmp74);
    list_insert(Students, 75, student75, &tmp75);
    list_insert(Students, 76, student76, &tmp76);
    list_insert(Students, 77, student77, &tmp77);
    list_insert(Students, 78, student78, &tmp78);
    list_insert(Students, 79, student79, &tmp79);
    list_insert(Students, 80, student80, &tmp80);
    list_insert(Students, 81, student81, &tmp81);
    list_insert(Students, 82, student82, &tmp82);
    list_insert(Students, 83, student83, &tmp83);
    list_insert(Students, 84, student84, &tmp84);
  }
  list_print(Students);
  list_sort(Students);
  list_print(Students);
  list_sort2(Students);
  list_print(Students);
  list_search(Students);
  
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

void list_insert(list* lst, int index, char* data, int* number)
{
  // Создадим указатель переменной элемента списка, 
  // и присвоим ему значение указателя на первый элемент списка
  student* base = lst->head;

  // Создадим указатель переменной на новый элемент и выделим под него память
  student* new_student = (student*)malloc(sizeof(student));

  // Выделим память внутри самого элемента структуры куда принимаем данные,
  // и получим указатель на него,
  // strlen() нужен, чтобы выделенная память была равна длинне полученной строки.
  new_student->surname = (char*)malloc(sizeof(char) * strlen(data));
  strcpy(new_student->surname, data);  // Копируем туда данные
  new_student->number = (int*)malloc(sizeof(int));
  new_student->number = number;
  new_student->number = (int*)malloc(sizeof(int));
  new_student->number = number;

  // Пришла пора решить куда мы определим элемент,
  // т.к. у нас еще нет элементов, lst->head вернет нам NULL.
  // Следовательно нужно условие, при создании первого элемента списка.
  if (base == NULL) {
    // Этот элемент единственный, а значит его указатели будут NULL.
    new_student->next = NULL;
    new_student->prev = NULL;

    // При этом, он сам будет первым и последним в списке.
    lst->head = new_student;
    lst->tail = new_student;
    lst->count++;  // Увеличем кол-во на единицу
    return;
  }

  // Если индекс, который пришел будет меньше нуля, то будем вставлять в конец
  if (index < 0) {
    // Голова теперь будет ссылаться на новый элм. впереди себя
    base->prev = new_student;
    new_student->prev = NULL;
    new_student->next = base;  // А ссылка на след. элм. у нового будет на голову

    lst->head = new_student;  // Назначаем новый элемент головой
  }
  else 
  {  // Тут все в обратном порядке
    base = lst->tail;  // Перейдем в хвост списка

    // Пусть он теперь ссылаеться на новый элемент
    base->next = new_student;
    new_student->next = NULL;  // Новый не будет иметь ссылки на следующий
    new_student->prev = base;  // А предыдущий у него будет хвост списка

    lst->tail = new_student;  // Назначаем новый элемент хвостом списка
  }
  lst->count++;  // Увеличим размер на единицу
}

void list_sort(list* lst)
{
  student* base;

  int tmp = 0;
  int w;

  for(int i = 1 ; i < 85; ++i)
  {
    base = lst->head;
    while(base->next != NULL) 
    {
      w = 0;
      while (w < 20)
      {
        if ((base->surname[w]) > (base->next->surname[w]))
        {
          tmp = *base->number;
          *base->number = *base->next->number;
          *base->next->number = tmp;
          Swap(base->surname, base->next->surname);
          break;
        }

        if ((base->surname[w]) < (base->next->surname[w]))
        {
          break;
        }
        ++w;
      }
      base = base->next;
    }
  }
}

void list_sort2(list* lst)
{
  student* base;
  
  int tmp = 0;

  for (int i = 1; i < 85; ++i)
  {
    base = lst->head;
    while (base->next != NULL)
    {
      if ((base->surname[0] == base->next->surname[0]) && (*base->number > *base->next->number))
      {
        tmp = *base->number;
        *base->number = *base->next->number;
        *base->next->number = tmp;
        Swap(base->surname, base->next->surname);
      }
      base = base->next;
    }

    base = lst->tail;
    while (base->prev != NULL)
    {
      if ((base->surname[0] == base->prev->surname[0]) && (*base->number < *base->prev->number))
      {
        tmp = *base->number;
        *base->number = *base->prev->number;
        *base->prev->number = tmp;
        Swap(base->surname, base->prev->surname);
        break;
      }
      base = base->prev;
    }
  }
}

  void list_search(list * lst)
  {
    int tmp_number = 0;
    string tmp_surname;
    cout << "Введите балл студента:" << endl;
    InputINT(&tmp_number);
    cout << "Введите фамилию студента:" << endl;
    cin >> tmp_surname;

    int i = 0;
    bool key = false;
    student* base = lst->head;

    while (base != NULL)
    {
      if ((*base->number == tmp_number) && (base->surname == tmp_surname))
      {
        cout << "Студент найден!" << endl;
        printf("ID: %.2d || Фамилия: %s || Балл: %.3d ||\n", i, base->surname, *base->number);
        key = true;
        break;
      }
      if (base->next != NULL)
      {   
      base = base->next;
      ++i;
      }
      else
      {
        break;
      }
    }

    if (key == false)
    {
      cout << "Студент не найден!" << endl << endl;
    }
  }

void list_print(list* lst) 
{
  student* base = lst->head;  // Переходим к началу списка
  puts("\033[45m***Выводим список:***\033[0m");

  if (lst->count == 0) 
  {  // Если список пустой, так и говорим
    printf("Этот список пуст!\n");
    return;
  }

  int i = 1;  // Организуем счетчик
  while (base != NULL) 
  {  // Пока все элементы не кончаться мы будем их перебирать
    printf("ID: %.2d || Фамилия: %s || Балл: %.2d ||\n", i, base->surname, *base->number);  // Выводя на экран

    base = base->next;
    ++i;
  }
  // В конце покажем какой размер у нашего списка
  printf("\nРазмер таблицы: %d\n", lst->count);
}

void InputINT(int* tmp)  // Описание метода ввода целых чисел
{
  while (!(cin >> *tmp) || (cin.peek() != '\n') || (*tmp < 25) || (*tmp > 54))
  {
    cin.clear();
    while (cin.get() != '\n');
    cout << "Неверный ввод!" << endl;
  }
}

void Swap(char *a, char *b)  // Функция замены местами ФИО студентов
{
  char tmp;

  for (int i = 0; i < 20; ++i)
  {
    tmp = a[i];
    a[i] = b[i];
    b[i] = tmp;
  }
}

bool Checker(char* a, char* b)
{
  bool key;
  for (int i = 0; i < 20; ++i)
  {
    if ((int)a[i] != (int)b[i])
    {
      key = false;
      break;
    }
  }
  return key;
}
