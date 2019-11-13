#include <iostream>

std::string concat(std::string x, std::string y)
{
  return x + y;
}

int main() {
    std::string s = concat("a"s, "b"s);
    std::cout << s;
}