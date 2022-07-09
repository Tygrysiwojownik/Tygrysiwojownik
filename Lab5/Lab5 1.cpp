#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<string>
using namespace std;
string N(string n){
	return n;
}
int P(int p){
	return +p;
}
double R(double r){
	return r;
}
double W(double w,int p,double r){
	w+=p+(p/r);
	return w;
}
int main(){

	int p;
	string n;
	double r;
	double w;
	for(int i=0;i<10;i++){
	cout<<"Wpisz nazwisko"<<endl;
	cin>>n;
	cout<<"Wpisz pensje "<<endl;
	cin>>p;
	cout<<"Wpisz procent premii"<<endl;
	cin>>r;
	cout<<"Pensja "<<P(p)<<" Nazwisko "<<N(n)<< " Procent premii "<<R(r);
}
	cout<<"Wplata wynosi"<<W(w,p,r)<<endl;
}
