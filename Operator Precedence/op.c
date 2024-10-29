#include <stdio.h>
#define disp(v) printf("%s = %d\n", #v, v)

int main(void) {
  int a = 0;
  int b = 0;
  int c = 15;

  a = b = c += 5;

  disp(a);
  disp(b);
  disp(c);

  return 0;
}
