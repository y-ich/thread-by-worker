#include <stdio.h>
#include <thread>

int main() {
  std::thread t([]{ printf("hello by thread.\n"); });
  t.join();
  return 0;
}