#include <iostream>
using namespace std;
bool linear_search(int array[], int size,int key){
	if(size==0){
		return false;
	}
	if(array[0]==key){
		return true;
	}
	bool ans=linear_search(array+1,size-1,key);
	return ans;
}
int main()
{
	int size=5;
	int array[size]={3,2,7,9,1};
	int key=7;
	bool ans=linear_search(array,size,key);
	if(ans==true)
	{
		cout<<key<<" is present in array"<<endl;
	}
	else{
		cout<<key<<" is not present in array"<<endl;
	}
}
