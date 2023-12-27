#include <iostream>
using namespace std;
bool check(int boards[], int k, int mid,int n)
{
    int boardsum=0;
    int painterCount=1;
    for(int i=0; i<=n-1; i++)
    {
        if(boardsum+boards[i]<=mid)
        {
            boardsum=boardsum+boards[i];
        }
        else{
            painterCount=painterCount+1;
            boardsum=boards[i];
            if(painterCount>k || boards[i]>mid)
            {
                return false;
            }
        }
    }
    return true;
}
int findLargestMinDistance(int boards[], int k, int n)
{
    int sum=0;
    for(int i=0; i<=n-1; i++)
    {
        sum=sum+boards[i];
    }
    int start=0;
    int end=sum;
    int ans=-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(check(boards,k,mid,n))
        {
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        
    }
    return ans;
}
int main()
{
	int array[]={3,4,5,7,8};
	cout<<findLargestMinDistance(array,2,5);
}
