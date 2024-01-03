#include <iostream>
#include <memory>

#include "../DemoClass.h"

int main() {
  std::unique_ptr<DemoClassi> demoi(new DemoClassi(1, 2, "Hello, World!"));
  demoi->fn();
  return 0;
}
