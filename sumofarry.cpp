#include <iostream>

using namespace std;

int main() {
	int arry[10],i,sum=0;
	
	cout<<"Enter The Number: ";
	
	
	for(i=0;i<10;i++)
	{
	   cin>>arry[i];
	   sum=sum+arry[i];
	}
	
	cout<<"Sum of elements : "<<sum;
}