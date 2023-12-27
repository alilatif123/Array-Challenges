#include <iostream>
using namespace std;
void bubble_sort(int array[], int size)
{
	if(size==1)
	{
		return;
	}
	for(int i=0; i<=size-2; i++)
	{
		if(array[i]>array[i+1])
		{
			swap(array[i],array[i+1]);
		}
	}
	bubble_sort(array,size-1);
}
int main()
{
	int array[7]={9,8,2,1,3,4,6};
	bubble_sort(array,7);
	for(int i=0; i<=7-1; i++)
	{
		cout<<array[i]<<" ";
	}
}

