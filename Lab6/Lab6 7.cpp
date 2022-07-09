#include<iostream>
using namespace std;
int main(){
	int l,s;
	cout<<"Wpisz liczbe"<<endl;
	cin>>l;
	if(l<=255){
		cout<<"Wpisz jeszcze raz"<<endl;
		cin>>l;
	}
	for(int i=0;i<l;i++){
		if(i%3==0){
			cout<<"Liczba podzielna przez trzy to"<<i<<endl;
			s+=i;
		}
	}
	cout<<"Suma wynosi"<<s;
}
