#include <iostream>
using namespace std;
int sum(int array[], int size)
{

		if(size==1){
		return array[0];
	}
	return array[0]+sum(array+1,size-1);
}
int main(){
	int size=6;
	int array[size]={1,3,4,8,3,1};
	int ans=sum(array,size);
	cout<<"Sum of complete array is "<<ans <<endl;
}
