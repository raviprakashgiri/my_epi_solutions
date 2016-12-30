#include <iostream>
// #include <>

using namespace std;

int main(int argc, char const *argv[])
{
	int number = 0;
	int count = 0;
	while(number)
	{
		count++;
		number &= (number - 1);
	}
	cout<<count<<endl;
	return 0;
}