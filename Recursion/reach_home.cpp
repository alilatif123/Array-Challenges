#include <iostream>
using namespace std;
void reachhome(int total_steps_required,int steps)
{
	cout<<"Step no "<<steps<<endl;
	if(total_steps_required==steps){
		cout<<"Pounch gia hon"<<endl;
		return;
	}
	steps++;
	reachhome(total_steps_required,steps);
}
int main(){
	double distance;
	int steps;
	cout<<"Enter distance to your home (in km )"<<endl;
	cin>>distance;
	cout<<"Total steps currently covered"<<endl;
	cin>>steps;
	int total_steps_required=(distance*30);//30 steps required to cover 1 km
	reachhome(total_steps_required,steps);
}
