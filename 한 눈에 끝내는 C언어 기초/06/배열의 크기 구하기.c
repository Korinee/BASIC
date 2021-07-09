#include <stdio.h>

int main()
{
  int arr1[] = {1, 2, 3, 4, 5};
  int arr2[] = {2519, 31, 7988, 165326, 100, 150};
  int arr3[] = {5, 25, 34, 60, 1, 4, 435, 9, 78};
  
  printf("%d\n", sizeof(arr1) / sizeof(int));
  printf("%d\n", sizeof(arr2) / sizeof(int));
  printf("%d\n", sizeof(arr3) / sizeof(int));
  
  return 0;  
}
