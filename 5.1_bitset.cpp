#include <iostream>
#include <cstdio>
#include <bitset>
#include <string>

using namespace std;

int main()
{

	long int number = 9223372036854775807;
	string str_number = bitset<64>(number).to_string();

	bitset<64> bitset_str_num(str_number);
	int count = bitset_str_num.count();
	cout<<count<<endl;

	return 0;
}