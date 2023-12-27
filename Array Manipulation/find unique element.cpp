//find unique element in array
#include <iostream>
using namespace std;
void unique(int array[],int size)
{
	for(int i=0; i<=size-1; i++)
	{
		int count=0;
	 for(int j=0; j<=size-1; j++)
	{
		if(i==j)
		{
			continue;
		}
	if(array[i]==array[j])
	{
		count=count+1;
	}
	}
	if(count==0)
	{
		cout<<array[i]<<" is unique"<<endl;
	}
	}
}
int main()
{
	int size=5;
	int arr[size]={3,5,6,7,7};
	unique(arr,size);
}

//complexity is O(n^2)
