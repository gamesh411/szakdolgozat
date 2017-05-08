#include <fcntl.h>
#include <unistd.h>

void simple_read(char *file, char *dst, size_t size) {
  int fd = open(file, 0);
  read(fd, dst, size);
}

void uninitialized(int a) {
  int b;
  int c = 23;

  if (a < 3) {
    b = 42;
  }

  int d = c / b;
}
