#include <stdio.h>

long double recursion(int itemIndex, int amountOfOperations, long double firstItem, long double sum, long double nextItem);

int main() {
  printf("n: ");
  int n;
  scanf("%d", &n);
  long double x;
  printf("Write x from 0 to 2: ");
  scanf("%Lf", &x);
  long double firstItem = x - 1;
  long double sum = recursion(1, n, firstItem, firstItem, firstItem); // recursion works

  // output
  printf("\nSum of all items: %.9Lf\n", sum);

  return 0;
}

long double recursion(int itemIndex, int amountOfOperations, long double firstItem, long double sum, long double nextItem) {
  long double res;
  if(itemIndex < amountOfOperations) {
    nextItem *= - firstItem * itemIndex / (itemIndex + 1);
    sum += nextItem;
    res = recursion(++itemIndex, amountOfOperations, firstItem, sum, nextItem);
  } else {
    return sum;
  }
  return res;
}