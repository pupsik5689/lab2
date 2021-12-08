#include <stdio.h>
#include <malloc.h>
#include <time.h>
#include "Header.h"

int main()
{
  FILE* file;
  double a = 0.0;
  unsigned int begin = 0.0, end = 0.0;
  int N = 0, i = 0, menu = 0, flag = 0;
  double *mas1, *mas2, *mas3 , *mas;

  fopen_s(&file, "..\\abc.txt", "r"); 
  //printf("%lf", l);

  while (feof(file) != 1)
  {
    fscanf_s(file, "%lf", &a);
    //printf("%lf\n", a);
    //printf("\n");
    //l = a;

    N += 1;
  } 

  fclose(file);
  N -= 1;
  //printf("%d", N);

  mas = (double*)malloc(N * sizeof(double));
  mas1 = (double*)malloc(N * sizeof(double));
  mas2 = (double*)malloc(N * sizeof(double));
  mas3 = (double*)malloc(N * sizeof(double));

  fopen_s(&file, "..\\abc.txt", "r");

  for (i = 0; i < N; i++)
  {
    fscanf_s(file, "%lf", &a); 
    mas[i] = a;
    mas1[i] = a;
    mas2[i] = a;
    mas3[i] = a;
  }

  fclose(file);


  
  

  while (flag == 0)
  {
    printf("Menu \n1)print \n2)Puzirec \n3)Vstavki \n4)Bistra \n5)Exit\n\n");
    scanf_s("%d", &menu);
    if (menu == 1)
    {
      PrintMas(mas, N);
    }
    else
      if (menu == 2)
      {
        begin = clock();
        Puzirec(mas1, N);
        end = clock();
        //PrintMas(mas1, N);
        printf("%d ms\n", (end - begin));

        printf("\n____________________\n\n");
        printf("\n____________________\n");
      }
      else
        if (menu == 3)
        {
          begin = clock();
          Vstavki(mas2, N);
          //InsertionSort(mas2, N);
          end = clock();
          //PrintMas(mas2, N);
          printf("%d ms\n", (end - begin));

          printf("\n____________________\n\n");
          printf("\n____________________\n");
        }
        else
          if (menu == 4)
          {
            begin = clock();
            qSort(mas3, N);
            end = clock();
            //PrintMas(mas3, N);
            printf("%d ms\n", (end - begin));

            printf("\n____________________\n\n");
            printf("\n____________________\n");
          }
          else
            if (menu == 5)
            {
              free(mas);
              free(mas1);
              free(mas2);
              free(mas3);
              return 0;
            }
            else
            {
              printf("Vvedite korreektie dannie!\n");
            }
    printf("\n\n");
  }
}