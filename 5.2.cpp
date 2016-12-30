#include <iostream>
#include <bitset>
#include <string>


using namespace std;

void swap_bits(unsigned long *x, int i, int j)
{
	if ((*x >> i) & 1 != (*x >> j) & 1)
	{
		*x ^= (1L << i) | (1L << j);
	}
}

int main(int argc, char const *argv[])
{
	unsigned long number = 235;

	int i = 3, j = 8;

	string str_num = bitset<64>(number).to_string();
	bitset<64> bit_str_num(str_num);

	cout<< "before:"<<number<<":"<<bit_str_num<<endl;
	swap_bits(&number, i, j);

	str_num = bitset<64>(number).to_string();
	bitset<64> bit_str_num1(str_num);

	cout<< "after:"<<number<<":"<<bit_str_num1<<endl;
	/* code */
	return 0;
}