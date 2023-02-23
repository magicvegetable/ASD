#include <stdio.h>

long double recursion (int itemIndex, long double firstItem, long double *path);

int main() {

  printf("n: ");
  int n;
  scanf("%d", &n);
  long double x;
  printf("Write x from 0 to 2: ");
  scanf("%Lf", &x);
  long double firstItem = x - 1;
  long double sum = firstItem;

  recursion(n, firstItem, &sum); // recursion works

  // output
  printf("\nSum of all items: %.9Lf\n", sum);

  return 0;
}

long double recursion (int itemIndex, long double firstItem, long double *sumIndex) {
  if(1 < itemIndex) {
    long double item = - recursion(itemIndex - 1, firstItem, sumIndex)* firstItem * (itemIndex - 1)  / itemIndex;
    *sumIndex += item;
    return item;
  } else {
    return firstItem;
  }
}