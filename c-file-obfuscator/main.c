#include <stdio.h>

int transform(int c) { return ~c; }

int main(int argc, char *argv[]) {
  int c;
  while ((c = getchar()) != EOF) {
    putchar(transform(c));
  }
  return 0;
}
