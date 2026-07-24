#include <stdio.h>
#include <stdlib.h>

int partition(int *v, int inicio, int fim)
{
  int pivo = v[fim];
  int i = inicio - 1, j = inicio;
  while (j < fim)
  {
    if (v[j] < pivo)
    {
      i++;
      int aux = v[j];
      v[j] = v[i];
      v[i] = aux;
    }
    j++;
  }
  int aux = pivo;
  v[fim] = v[i + 1];
  v[i + 1] = aux;
  return i + 1;
}

void quicksort(int *v, int inicio, int fim)
{
  if (inicio < fim)
  {
    int pos = partition(v, inicio, fim);
    quicksort(v, inicio, pos - 1);
    quicksort(v, pos + 1, fim);
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