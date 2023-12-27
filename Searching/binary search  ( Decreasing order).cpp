#include <iostream>
using namespace std;
void binarySeacrh(int arr[],int size,int key)
{
	int start=0;
	int end=size-1;
	bool check=false;
	while(start<=end)
	{
		int middle=(start+end)/2;
		if(arr[middle]==key)
		{
			cout<<"Key is Present at index "<<middle<<endl;
			check=true;
			break;
		}
		else if(arr[middle]>key)
		{
			start=middle+1;
		}
		else if(arr[middle]>key)
		{
			end=middle-1;
		}
	}
	if(check==false)
	{
		cout<<"Key is not Present"<<endl;
	}
}
int main()
{
	int array[]={10,9,8,7,6,3,2};
	binarySeacrh(array,7,3);
}
