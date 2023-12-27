#include <iostream>
#include <algorithm>
using namespace std;
int isPossible(int array[], int size, int mid, int totalCow)
{
	int cowCount=1;
	int firstcow=array[0];
	for(int i=0; i<=size-1; i++)
	{
		if(array[i]-firstcow>=mid)
		{
			cowCount=cowCount+1;
			firstcow=array[i];
		}
		
	}
	if(cowCount>=totalCow)
	{
		return true;
	}
	else
	{
		return false;
	}

}
int aggresive_cows(int array[], int size)
{
   sort(array,array+size);
	int start=0;
	int max=INT_MIN;
	int ans=-1;
	for(int i=0; i<=size-1; i++)
	{
		for(int j=0; j<=size-1; j++)
		{
		if(i==j)
		{
			continue;
		}
		if(array[i]>max)
		{
			max=array[i];
		}
	}
	}
	int end=max;
	while(start<=end)
	{
		int mid=start+(end-start)/2;
		if(isPossible(array,size,mid,3))
		{
			ans=mid;
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
	}
	return ans;
}
int main()
{
	int array[]={1,7,5,3};
	cout<<aggresive_cows(array,4);
}
