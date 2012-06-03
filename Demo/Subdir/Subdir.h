#ifndef SUBDIR_H
#define SUBDIR_H

template<typename T>
typename std::enable_if<std::is_fundamental<T>::value, T>::type index(T& t, int);

#endif
