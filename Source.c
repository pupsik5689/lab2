#include <stdio.h>
#include <stdlib.h>



int main()
{
  int N, i, f = 0;
  double l = 0, u = 0, a = 0;
  FILE* file = 0;

  printf("Zhelaete li sami vvseti znachenia?\n1-yes\n0-no\n");
  scanf_s("%d", &f);

  printf("Vvedite kol-vo elementov:\t");
  scanf_s("%d", &N);
 /* if (f == 0)
  {
    printf("Vvedite minimalnoe znachenie:\t");
    scanf_s("%lf", &l);

    printf("Vvedite maximalnoe znachenie:\t");
    scanf_s("%lf", &u);

    if (u <= l)
    {
      printf("!!!ERROR!!! DANNIE NE KORREKTNI\n");
      return 0;
    }
  }*/

  

  
  if (f == 0)
  {
    printf("Vvedite minimalnoe znachenie:\t");
    scanf_s("%lf", &l);

    printf("Vvedite maximalnoe znachenie:\t");
    scanf_s("%lf", &u);

    if (u <= l)
    {
      printf("!!!ERROR!!! DANNIE NE KORREKTNI\n");
      return 0;
    }

    fopen_s(&file, "..\\abc.txt", "w");

    for (i = 0; i < N; i++)
    {
      a = ((double)rand()) / RAND_MAX * (u - l) + l;
      fprintf(file, "%lf\n", a);
      
    }

    fclose(file);
  }
  else
  {
    fopen_s(&file, "..\\abc.txt", "w");

    for (i = 0; i < N; i++)
    {
      scanf_s("%lf", &a); 
      
      fprintf(file, "%lf\n", a);
    }

    fclose(file);

  }
  return 0;
}