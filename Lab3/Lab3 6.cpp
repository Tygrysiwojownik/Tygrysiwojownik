#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	int k,k1;
	int suma,suma1;
	cout<<"Wpisz liczbe"<<endl;
	cin>>k;
	cout<<"Wpisz liczbe"<<endl;
	cin>>k1;
	for(int i=1;i<k;i++){
		if(k%i==0){
			cout<<"Liczba dzielna "<<i<<endl;
			suma+=i;
		}
	}
	for(int i=1;i<k1;i++){
		if(k1%i==0){
			cout<<"Liczba dzielna "<<i<<endl;
			suma1+=i;
		}
	}
	if(suma==suma1){
		cout<<"Liczby sa zaprzyjaznine";
	}
	if(suma!=suma1){
		cout<<"Liczby nie sa zaprzyjaznine";
	}
}
