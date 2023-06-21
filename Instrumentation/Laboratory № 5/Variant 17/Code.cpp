#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

#pragma warning(disable: 4996)

int Input(double*);
void Process(double*, int);
void Output(double*, int);

int main(void) 
{
  setlocale(LC_ALL, "Russian");

  double arr[25] = { 0 };
  
  int size = 0;

  size = Input(arr);
  Process(arr, size);
  Output(arr, size);

  return 0;
}

int Input(double* array) 
{
  int key = 1;
  double tmp = 0;
  char ch;

  printf("Input size of array:\n");
  if ((scanf("%lf%c", &tmp, &ch) == 2) && (ch == '\n') && ((int)tmp == tmp) && (tmp > 0)) 
  {
    printf("Input elements of array:\n");
    int el = (int)tmp;
    for (int i = 0; i < el; ++i) 
    {
      if (scanf("%lf", (array + i)) != 1) 
      {
        printf("Incorrect input!\n");
        key = 0;
        break;
      }
    }
  }
  else 
  {
    printf("Incorrect input!\n");
    key = 0;
  }

  if (key == 0) 
  {
    tmp = -1;
  }
  return (int)tmp;
}

void Process(double* array, int n) 
{
  if (n != -1) 
  {
    printf("Process...\n");

    double SumSquad = 0;
    for (int i = 0; i < n; ++i) 
    {
      SumSquad += (*(array + i) * *(array + i));
    }

    double SumCube = 0;
    for (int i = 0; i < n; ++i) 
    {
      SumCube += (*(array + i) * *(array + i) * *(array + i));
    }

    printf("Summary of cubes = %lf\n", SumCube);
    printf("Summary of squades = %lf\n", SumSquad);
    
    if (SumCube > SumSquad) 
    {
      printf("Summary of cubes bigger!\n");
    }
    else if (SumCube == SumSquad) 
    {
      printf("Summary of cubes and squads same!\n");
    }
    else 
    {
      printf("Summary of squads bigger!\n");
    }
  }
}

void Output(double* array, int n) 
{
  if (n != -1 && n > 0) 
  {
    printf("Elements of array:\n");
    for (int i = 0; i < n; ++i) 
    {
      printf("%.2lf ", *(array + i));
    }
    printf("\n");

    printf("Size of array: %d\n", n);
  }
}
