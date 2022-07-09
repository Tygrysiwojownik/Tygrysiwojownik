#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	int k;
	int suma;
	cout<<"Wpisz liczbe";
	cin>>k;
	for(int i=1;i<k;i++){
		if(k%i==0){
			cout<<"Liczba doskonala "<<i<<endl;
			suma+=i;
		}
	}
	cout<<"Suma ich wynosi"<<suma;

}
