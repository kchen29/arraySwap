#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand( time(NULL) );

  //1
  int arr[10];

  //2
  int i;
  for (i = 0; i < 10; i++)
    arr[i] = rand();

  //3
  arr[9] = 0;

  //4
  for (i = 0; i < 10; i++)
    printf("%d\n", arr[i]);

  //5
  int arr2[10];

  //6
  //point to last value
  int *arr1p = arr + 9;

  for (i = 0; i < 10; i++)
    *(arr2 + i) = *(arr1p - i);

  //7
  for (i = 0; i < 10; i++)
    printf("%d\n", arr2[i]);
  
  return 0;
}
