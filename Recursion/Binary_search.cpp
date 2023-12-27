#include <iostream>
using namespace std;
int binarySearch(int array[],int size,int key,int start,int end){
	int mid=(start+end)/2;
	if(start>end)
	{
		return -1;
	}
	if(array[mid]==key)
	{
		return mid;
	}
	else if(key<array[mid]){
		return binarySearch(array,size,key,start,mid-1);
	}
	else{
		return binarySearch(array,size,key,mid+1,end); //if(key>array[mid])
	}
	}
int main()
{
	int size=5;
	int array[size]={3,5,11,19,21};
	int key=19;
	int ans=binarySearch(array,size,key,0,size-1);
	if(ans==-1)
	{
		cout<<key<<" is not present in array"<<endl;
	}
	else{
	cout<<key<<" is present in index "<<ans<<endl;	}
}
