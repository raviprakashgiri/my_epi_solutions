// bitset::test
#include <iostream>       // std::cout
#include <string>         // std::string
#include <cstddef>        // std::size_t
#include <bitset>         // std::bitset

using namespace std;

int main ()
{
  std::bitset<5> foo (std::string("01011"));

  std::cout << "foo contains:\n";
  // std::cout << std::boolalpha;
  cout << foo;
  for (std::size_t i=0; i<foo.size(); ++i)
    std::cout << foo.test(i) << '\n';

  return 0;
}