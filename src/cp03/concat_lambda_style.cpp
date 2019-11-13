#include <iostream>

int main()
{
  auto concat = [](std::string x, std::string y)
  {
    return x + y;
  };

  std::string s = concat("a"s, "b"s);
  std::cout << s;
}