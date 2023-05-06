#include <stdio.h>

int main(void) {
  int ctr = 0;
  while (ctr < 5)
    {
      printf("Counter is at %d\n", ++ctr);
    }
  puts("\n");
  while (ctr >= 1)
    {
      printf("Counter is at %d\n", ctr--);
    }
  return 0;
}
