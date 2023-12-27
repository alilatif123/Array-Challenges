#include <iostream>
using namespace std;
int size_of_array(char array[])
{
	int count=0;
	for(int i=0; array[i]!='\0'; i++)
	{
		count=count+1;
	}
	return count;
}
void array_reverse(char array[],int size)
{
	cout<<"Original Array is "<<array<<endl;
	int start=0;
	int end=size-1;
	while(start<=end)
	{
		swap(array[start],array[end]);
		start=start+1;
		end=end-1;
	}
	cout<<"Reverse of Array is "<<array<<endl;
}
int main()
{
	char array[20]={'a','b','c','d','e','f'};
	int size=size_of_array(array);
	array_reverse(array,size);
}

