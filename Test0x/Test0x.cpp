#include <vector>

struct MyClass
{
  int const x;
  MyClass(int x): x(x) {}
};

int main()
{
  std::vector<MyClass> vec;
  vec.push_back(MyClass(3));
  return 0;
}
