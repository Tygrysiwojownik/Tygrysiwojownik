#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int h;
	int k;
	cout<<"Wpisz liczbe"<<endl;
	cin>>h;
	cout<<"Wpisz liczbe"<<endl;
	cin>>k;
	if(h<k){
	for(int i=1;i<=h;++i){
		if((h%i==0)&&(k%i==0)){
			cout<<"Dzielniki liczby "<<h<<" i "<<k<<i<<endl;
		}
	}
}
if(h>k){
	for(int i=1;i<=k;++i){
		if((h%i==0)&&(k%i==0)){
			cout<<"Dzielniki liczby "<<h<<" i "<<k<<" jest liczba "<<i<<endl;
		}
	}	
}
if(h==k){
	for(int i=1;i<=k;++i){
		if((h%i==0)&&(k%i==0)){
			cout<<"Dzielniki liczby "<<h<<" i "<<k<<" jest liczba "<<i<<endl;
		}
	}	
}
}
