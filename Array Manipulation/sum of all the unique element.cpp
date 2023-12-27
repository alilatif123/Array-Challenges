//sum of all the unique element
#include <iostream>
using namespace std;
int unique(int array[],int size)
{
	int sum=0;
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
		sum=sum+array[i];
	}
	}
	return sum;
}
int main()
{
	int sum;
	int size=5;
	int arr[size]={3,5,6,7,7};
	sum=unique(arr,size);
	cout<<"Sum is "<<sum<<endl;

}
