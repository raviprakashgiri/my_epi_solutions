#include <iostream>


using namespace std;

unsigned long calculate_parity(unsigned long n)
{
	short x = 1;
	short result = 0;
	while(n)
	{
		result += (n & x);
		n >>= 1;
	}
	return result;
}

int main(int argc, char const *argv[])
{
	unsigned long given_int = 7;

	short output = calculate_parity(given_int);

	cout<<output<<endl;

	return 0;
}