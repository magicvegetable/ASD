#include <stdio.h>

long double recursion (long double prevItem, int itemIndex, long double amountOfOperations, long double firstItem);

int main() {
  printf("n: ");
  long double n;
  scanf("%Lf", &n);
  long double x;
  printf("Write x from 0 to 2: ");
  scanf("%Lf", &x);
  long double firstItem = x - 1;

  long double sum = recursion(firstItem, 1, n, firstItem); // recursion works
  
  // output
  printf("\nSum of all items: %.9Lf\n", sum);

  return 0;
}

long double recursion (long double prevItem, int itemIndex, long double amountOfOperations, long double firstItem) {
  if(itemIndex < amountOfOperations) {
    long double nowItem = - prevItem * firstItem * itemIndex / (itemIndex + 1);
    long double sumItem = recursion(nowItem, itemIndex + 1, amountOfOperations, firstItem) + prevItem;
    return sumItem;
  } else {
    return prevItem;
  }
}