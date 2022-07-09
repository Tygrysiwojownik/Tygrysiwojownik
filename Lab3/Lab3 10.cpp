#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main(){
	int a;
	int p=0;
	cout<<"Wpisz iloœæ liczb"<<endl;
	cin>>a;
	for(int i=0;i<a;i++){
		p=pow(2,i)-1;
		cout<<"Liczba wynosi "<<p<<endl;
	}
}
