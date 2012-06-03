#include "Subdir.h"

template<typename T>
typename std::enable_if<std::is_fundamental<T>::value, T>::type index(T& t, int)
{
  return 0;
}

void SubdirFunction()
{
  int thing = 4;
  int a = index(thing, 0);
}
