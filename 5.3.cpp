#include <iostream>
#include <cstddef>
#include <bitset>

using namespace std;

int main(int argc, char const *argv[])
{
	unsigned long number = 113;
	unsigned long reversed = number;
	unsigned long count_bits = sizeof(number)*8 -1;
	
	cout<<"bits:"<<count_bits+1<<endl;
	string str = bitset<64>(number).to_string();
	bitset<64> str_bit1(str);


	cout<<reversed<<":"<<str_bit1<<endl;
	while(number)
	{
		number >>= 1;
		reversed <<= 1;
		reversed |= (number & 1);
		count_bits--;
	}
	reversed <<= count_bits;

	str = bitset<64>(reversed).to_string();
	bitset<64> str_bit(str);


	cout<<reversed<<":"<<str_bit<<endl;

	return 0;
}