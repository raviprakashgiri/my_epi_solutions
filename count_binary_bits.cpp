#include <iostream>       // std::cout
#include <string>         // std::string
#include <cstddef>        // std::size_t
#include <bitset>         // std::bitset

using namespace std;

int main(int argc, char const *argv[])
{
	int number = 66667;

	string str_number = bitset<8>(number).to_string();
	bitset<8> bit_str_number(str_number);

	cout<<str_number;
	long int count = bit_str_number.size();
	cout<< "::"<<count;

	for (std::size_t i=0; i<count; ++i)
    std::cout << bit_str_number.test(i) << '\n';

	return 0;
}