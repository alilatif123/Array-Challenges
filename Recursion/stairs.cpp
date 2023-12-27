#include <iostream>
using namespace std;
int stair(int step)
{
	if(step==0)
	{
		return 1;
	}
	if(step<0)
	{
		return 0;
	}
	int total_ways=stair(step-1)+stair(step-2);
	return  total_ways;
}
int main()
{
	int step;
	cout<<"kon se stair tek jana hai"<<endl;
	cin>>step;
	int ans=stair(step);
	cout<<ans;
}
