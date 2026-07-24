#include <stdio.h>
#include <stdlib.h>

int partition(int *v, int inicio, int fim)
{
  int pivo = (v[inicio] + v[fim] + v[(inicio + fim) / 2]) / 3;
  printf("%d\n", pivo);
  while (inicio < fim)
  {
    while (inicio < fim && v[inicio] <= pivo)
    {
      inicio++;
    }
    while (inicio < fim && v[fim] > pivo)
    {
      fim--;
    }
    int aux = v[inicio];
    v[inicio] = v[fim];
    v[fim] = aux;
  }
  return inicio;
}

void quicksort(int *v, int inicio, int fim)
{
  if (inicio < fim)
  {
    int pos = partition(v, inicio, fim);
    quicksort(v, inicio, pos - 1);
    quicksort(v, pos, fim);
  }
}

void printaVetor(int *v, int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ", v[i]);
  }
  printf("\n");
}

int main(void)
{
  int vetor[] = {4, 6, 21, 99, 15, 23, 1, 5, 81, 33, 10, 8, 17, 3};
  printaVetor(vetor, 14);
  quicksort(vetor, 0, 13);
  printaVetor(vetor, 14);
}