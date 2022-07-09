#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int h;
	cout<<"Wpisz liczbe"<<endl;
	cin>>h;
	for(int i=1;i<=h;++i){
		if(h%i==0){
			cout<<"Dzielniki liczby "<<h<<" jest "<<i<<endl;
		}
	}
}

