#include <vector>

int main()
{
  // Without compiling with c++0x, "error: in c++98 'v' must be initialized by constructor
  std::vector<int> v = {1,2,3};
  return 0;
}
