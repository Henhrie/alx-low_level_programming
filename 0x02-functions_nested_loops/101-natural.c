#include <stdio.h>


/**
 *main - Entry point.
 *
 *Result: Always 0(Sucess)
 */

int main() {
  int sum = 0;
  int i;
  for (i = 3; i < 1024; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
}
printf("%d\n", sum);
return 0;
}
