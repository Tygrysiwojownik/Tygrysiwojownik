#include<iostream>
#include<cstdlib>
#include<new>
#include<string>
using namespace std;
struct Student{
	string imie;
	string nazwsko;
	int numer_albumu;
	double srednia_ocena;
}tab[1000];
int main(){
	Student st;
	int n;
	int g;
	int h;
	cout<<" Wpisz liczbe studentow "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<"Wpisz imie"<<endl;
		cin>>tab[i].imie;
		cout<<"Wpisz nazwisko"<<endl;
		cin>>tab[i].nazwsko;
		cout<<"Wpisz numer albumu"<<endl;
		cin>>tab[i].numer_albumu;
		cout<<"Wpisz srednia ocena"<<endl;
		cin>>tab[i].srednia_ocena;
		if(tab[i].srednia_ocena>6){
		cout<<"Wpisz srednia ocena jeszcze raz"<<endl;
		cin>>tab[i].srednia_ocena;
		}
		if(tab[i].srednia_ocena<1){
		cout<<"Wpisz srednia ocena jeszcze raz"<<endl;
		cin>>tab[i].srednia_ocena;
		}
	}
		cout<<"Jak du¿a ma byæ to grupa ktorej dane maj¹ byæ wykasowane"<<endl;
		cin>>h;
		for(int i=1;i<=h;i++){
		cout<<"Jaki student ma miec wykasowane dane"<<endl;
		cin>>g;
	}
		for(int i=1;i<=n;i++){
			if(i!=g){
		cout<<"Imie "<<tab[i].imie<<" Nazwisko "<<tab[i].nazwsko<<" Numer albumu "<<tab[i].numer_albumu<<" Srednia ocen "<<tab[i].srednia_ocena<<endl;
	}if(i==g){
	cout<<" "<<endl;
	}
	}
}

