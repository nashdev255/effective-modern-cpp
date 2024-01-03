template <typename T>
class DemoClass {
  private:
    T x{};
    T y{};

  public:
    DemoClass<T>() = default;
    DemoClass<T>(T x, T y) : x(x), y(y) {}
    virtual ~DemoClass<T>() {}
    template <typename U>
    DemoClass<T>(const DemoClass<U>& dc) : x(static_cast<T>(dc.x)), y(static_cast<T>(dc.y)) {}

};

using DemoClassi = DemoClass<int>;
using DemoClassd = DemoClass<double>;
using DemoClassf = DemoClass<float>;
