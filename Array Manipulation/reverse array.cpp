#include <iostream>
using namespace std;
//array reverse
int reverse(int array[],int size)
{
	for(int i=0; i<=size-1; i++)
	{
		swap(array[i],array[size-1]);
		size=size-1;
	}
}
//print
int print(int array[],int size)
{
	for(int i=0; i<=size-1; i++)
	{
		cout<<array[i]<<endl;
	}
}
int main()
{
	int array[]={3,4,5,3,9};
	reverse(array,5);
	print(array,5);

}
