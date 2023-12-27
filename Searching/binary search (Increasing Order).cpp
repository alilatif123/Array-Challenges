//binary search accending order(Increasing order)

#include <iostream>
using namespace std;
void binarySearch(int array[],int size, int key)
{
	int start=0;
	int end=size-1;
	int found=0;
	while(start<=end)
	{
		int middle=(start+end)/2;
		if(array[middle]==key)
		{
			cout<<"Key present at index  "<<middle<<endl;
			found=1;
			break;
		}
		else if(array[middle]>key)
		{
			end=middle-1;
		}
		else if(array[middle]<key)
		{
			start=middle+1;
		}
		
	}
	if(found==0)
	{
		cout<<"Given key not found"<<endl;
	}
}
int main()
{
	int arr1[]={2,5,7,8,9,11};
	binarySearch(arr1,6,9);
}
