#include <iostream>
using namespace std;
long fact(long n)
{
	if (n > 1)
	{
		return (n * fact(n-1));
	}
	else
	{
		return 1;	
	}
}
int main ()
{
	long num;
	cout <<"Enter a number: ";
	cin >> num;
	cout<<fact(num);
	return 0;
}