#include <stdio.h>

int main ()
{

  int arr[] = { 1, 2, 3, 4, 5, 6};

  int item, k, n = 6;
  printf("\nEnter the number: ");
  scanf("%d",&item);
  printf("\nEnter the index: ");
  scanf("%d",&k);

  int i = 0, j = n;

  printf ("The original array elements are :\n");

  for (i = 0; i < n; i++)

    printf ("arr[%d] = %d \n", i, arr[i]);
    
  printf("\n\n");

  n = n + 1;

  while (j >= k)

    {
      arr[j + 1] = arr[j];

      j = j - 1;

    }

  arr[k] = item;

  printf ("The array elements after insertion :\n");

  for (i = 0; i < n; i++)

    printf ("arr[%d] = %d \n", i, arr[i]);
}
