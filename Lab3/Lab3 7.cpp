#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main(){
	int n=10000;
	bool liczba[n+1];
	for(int i=0;i<=n;i++){
		liczba[i]=true;
	}
	liczba[1]=false;
	int h = sqrt(n);
	for(int i=2;i<=h;i++){
		if(liczba[i]==true){
			for(int j=i+i;j<=n;j=j+i){
				liczba[j]= false;
			}
		}
	}
	int a;
	int b;
	cout<<"Wpisz liczbe a "<<endl;
	cin>>a;
	cout<<"Wpisz liczbe b "<<endl;
	cin>>b;
	if(a<b){
	for(int i=0;i<a;i++){
		if((liczba[i]==true)&&(i==a)){
		cout<<"Liczba jest pierwsza "<<i<<endl;
	}else
	cout<<"Liczba nie jest pierwsz¹ "<<i<<endl;
}
}
if(b<a){
	for(int i=0;i<b;i++){
		if((liczba[i]==true)&&(i==b)){
		cout<<"Liczba jest pierwsza "<<i<<endl;
	}else
	cout<<"Liczba nie jest pierwsz¹ "<<i<<endl;
}
}
if(b==a){
		for(int i=0;i<b;i++){
		if((liczba[i]==true)&&(i==a)){
		cout<<"Liczba jest pierwsza "<<i<<endl;
	}else
	cout<<"Liczba nie jest pierwsz¹ "<<i<<endl;
}
}
}
