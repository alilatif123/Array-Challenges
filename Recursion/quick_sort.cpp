#include <iostream>
using namespace std;
int pointRight(int array[],int end,int count){
	if(end<=0){
		return count;
	}
	if(array[0]<array[end])
	{
		count=count+1;
	}
	end=end-1;
	return pointRight(array,end,count);
	
}
void quickSort(int array[],int size){
	if(size<=1){
		return;
	}
	int point=pointRight(array,0,size-1);
	swap(array[0],array[point]);
	//aage aur peche
	int a=0;
	
}
int main(){
	int size=5;
	int array[size]={6,2,3,2,11};
	quickSort(array,size);
}
