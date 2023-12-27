#include <iostream>
using namespace std;
bool issorted(int array[],int size){
	if(size==1)
	{
		return true;
	}
	if(array[0]>array[1]){
		return false;
	}
	else
	{
		int ans=issorted(array+1,size-1);
		return ans;
	}
}
int main(){
	int size=5;
	int array[size]={2,4,5,8,9};
	bool ans=issorted(array,size);
	if(ans==true){
		cout<<"This array is sorted"<<endl;
	}
	else
	{
		cout<<"This array is not sorted"<<endl;
	}
}
