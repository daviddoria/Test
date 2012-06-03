#include <iostream>
#include <vector>

struct MyStruct
{
  MyStruct()
  {
    std::cout << "Constructor." << std::endl;
  }
};

int main(int, char *[])
{
  //std::vector<MyStruct> imageLevels(4); // Constructor only called once
  std::vector<MyStruct> imageLevels(4, MyStruct()); // Constructor still only called once!

  return 0;
}
