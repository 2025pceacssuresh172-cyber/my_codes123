#include<stdio.h>
int main() {
   int arr[20], i, n;

   scanf("%d", &n); /* Accepts the number of elements in the array */

   for (i = 0; i < n; i++) 
      scanf("%d", &arr[i]); /* Accepts the elements of the array */

   /* Print elements in reverse order */
   for (i = n - 1; i >= 0; i--) {
      printf("%d ", arr[i]);
   }

   return 0;
}
