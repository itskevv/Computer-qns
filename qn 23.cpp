#include<iostream>
using namespace std;
int main()
{
	int i;
	float a[100]={1,2,3,4,5,6,7,8,9,10};
	for(i=1;i<10;++i)
		{
			if(a[0] > a[i])
			{
				a[0] = a[i];	
			}		
		}	
		cout<<"The smallest element is: "<<a[0]<<endl;
}