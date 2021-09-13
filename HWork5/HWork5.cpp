#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
 
void quickSort(int *numbers, int l, int r)
{
  int pivot; 
  int l_hold = l; 
  int r_hold = r; 
  pivot = numbers[l];
  while (l < r) 
  {
    while ((numbers[r] >= pivot) && (l < r))
      r--;
    if (l != r)
    {
      numbers[l] = numbers[r]; 
      l++;
    }
    while ((numbers[l] <= pivot) && (l < r))
      l++; 
    if (l != r) 
    {
      numbers[r] = numbers[l];
      r--; 
    }
  }
  numbers[l] = pivot;
  pivot = l;
  l = l_hold;
  r = r_hold;
  if (l < pivot)
    quickSort(numbers, l, pivot - 1);
  if (r > pivot)
    quickSort(numbers, pivot + 1, r);
}
int main()
{
  int a[SIZE];
  for (int i = 0; i<SIZE; i++)
    a[i] = rand() % 201 - 100;

  for (int i = 0; i<SIZE; i++)
    printf("%4d ", a[i]);
  printf("\n");
  quickSort(a, 0, SIZE-1);
  for (int i = 0; i<SIZE; i++)
    printf("%4d ", a[i]);
  printf("\n");
  getchar();
  return 0;
}