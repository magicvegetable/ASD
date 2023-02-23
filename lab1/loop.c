#include <stdio.h>

int main() {
  printf("n: ");
  int n;
  scanf("%d", &n);
  long double x;
  printf("Write x from 0 to 2: ");
  scanf("%Lf", &x);
  long double firstItem = x - 1;
  long double sum = firstItem;
  long double nextItem = firstItem;

  // loop works
  for(int itemIndex = 1; itemIndex < n; itemIndex++) {
    nextItem *=  - firstItem * itemIndex / (itemIndex + 1);
    sum += nextItem;
  };

  // output
  printf("\nSum of all items: %.9Lf\n", sum);

  return 0;
}