#include <iostream>
using namespace std;

bool solutionISPossible(int array[],int size,int mid,int totalStudent)
{
	int totalPages=0;
	int studentCount=1;
	for(int i=0; i<=size-1; i++)
	{
		if((totalPages+array[i])<=mid)
		{
			totalPages=totalPages+array[i];
		}
		else
		{
			studentCount=studentCount+1;
			totalPages=array[i];
			if(studentCount>totalStudent)
			{
				return false;
			}
		}
	}
	return true;
}
int bookAllocation(int array[],int size)
{
	int sum=0;
	int ans=-1;
	for(int i=0; i<=size-1; i++)
	{
		sum=sum+array[i];
	}
	int start=0;
	int end=sum;
	while(start<=end)
	{
		int mid=(start+end)/2;
		if(solutionISPossible(array,size,mid,2))
		{
			ans=mid;
			end=mid-1;
		}
		else
		{
			start=mid+1;
		}
	}
	return ans;
}
int main()
{
	int array[]={10,20,30,40};
	int output=bookAllocation(array,4);
	cout<<output;
}
