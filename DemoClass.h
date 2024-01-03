#include <iostream>
#include <string>

template <typename T>
class DemoClass {
  private:
    T x{};
    T y{};
    std::string str;

  public:
    DemoClass<T>() = default;
    DemoClass<T>(T x, T y, std::string str) : x(x), y(y), str(str) {}
    virtual ~DemoClass<T>() {}
    template <typename U>
    DemoClass<T>(const DemoClass<U>& dc) : x(static_cast<T>(dc.x)), y(static_cast<T>(dc.y)), str(dc.str) {}

    void fn() { std::cout << str << std::endl; }
};

using DemoClassi = DemoClass<int>;
using DemoClassd = DemoClass<double>;
using DemoClassf = DemoClass<float>;
