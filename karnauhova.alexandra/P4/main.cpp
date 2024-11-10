#include "dubl_char.hpp"
#include "input_string.hpp"
#include <iostream>
int main()
{
  char* t = nullptr;
  constexpr char end = '\n';
  try
  {
    t = karnauhova::input_string(std::cin, end);
  }
  catch (const std::bad_alloc &e)
  {
    std::cerr << "Error: out of memory\n";
    return 1;
  }
  if (t[0] == end)
  {
    std::cerr << "Error: empty string\n";
    return 1;
  }
  std::cout << karnauhova::dubl_char(t) << "\n";
}