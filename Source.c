#include "Header.h"

void PrintMas(double* a, int l)
{
  int i = 0;
  for (i = 0; i < l; i++)
  {
    printf("%d) %lf\n", i+1, a[i]);
  }
}

void Puzirec(double* a, int l)
{
  int i, j;
  double tmp = 0;

  for (i = 0; i < l; i++)
  {
    for (j = 0; j < l - i - 1; j++)
    {
      if (a[j] > a[j + 1])
      {
        tmp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = tmp;

      }
    }
  }
}

void qSort(double* mas, int l)
{
  int i = 0;
  int j = l - 1;
  double tmp = 0;
  double x = mas[(int)(l / 2)];

  do
  {
    while (mas[i] < x) i++;
    while (mas[j] > x) j--;

    if (i <= j)
    {
      tmp = mas[i];
      mas[i] = mas[j];
      mas[j] = tmp;
      i++;
      j--;
    }

  } while (i <= j);

  if (j > 0)
    qSort(mas, j + 1);

  if (i < l)
    qSort(&mas[i], l - i);
}

void Vstavki(double* mas, int l )
{
  int i, j;
  double tmp = 0.0;

  for (i = 1; i < l; i++)
  {
    tmp = mas[i];
    j = i - 1;
    while((j >= 0) && (mas[j] > tmp))
    {
      mas[j+1] = mas[j];
      j--;
    }
    mas[j+1] = tmp;
  }
}
