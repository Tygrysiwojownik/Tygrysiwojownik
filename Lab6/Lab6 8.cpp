#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int P(int p1,int p2){
return p1,p2;
};
int P1(int p3, int p4){
return p3,p4;
};
int P2(int p5, int p6){
return p5,p6;
};
int main(){
	int p1,p2,p3,p4,p5,p6;
	cout<<"Wpisz wspolrzedne pierwszego punktu"<<endl;
	cin>>p1;
	cin>>p2;
	cout<<"Wpisz wspolrzedne drugiego punkty"<<endl;
	cin>>p3;
	cin>>p4;
	cout<<"Wpisz wsporzedne trzeciego punktu"<<endl;
	cin>>p5;
	cin>>p6;
	cout<<"Punkt 1 "<<P(p1,p2)<<"  Punkt 2 "<<P1(p3,p4)<<" Punkt 3 "<<P2(p5,p6);
	int k=(pow(p1,2)-pow(p3,2))+(pow(p2,2)-pow(p4,2));
	int k1=(pow(p3,2)-pow(p5,2))+(pow(p4,2)-pow(p6,2));
	if(k==k1){
		cout<<"Punkt jest wspoliniowy";
	}else 
	cout<<"Nie jest wspoliniowy";
}

