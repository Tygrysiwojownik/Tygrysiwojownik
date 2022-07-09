#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main(){
	int n,k,k1,w,w1,p,s,s1;
	srand(time(0));
	cout<<"Wpisz d³ugosc macierzy ";
	cin>>n;
	int tab[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			tab[i][j]=rand()%10+1;
		}
	}
	cout<<" Wpisz 1 jezli chcesz pomnozyc kolumny a 2 gdy wiersze"<<endl;
	cin>>p;
	if(p==1){
	cout<<"Wpisz jakie maja byc to kolumny "<<endl;
	cin>>k;
	cin>>k1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if((i==k)&&(i==k1)){
			s=tab[i][j]*tab[i][j];
		}
		}
	}
	cout<<"Wynik mnozenia kolumn "<<s;
}
if(p==2){
	cout<<"Wpisz jakie maja byc to wiersze "<<endl;
	cin>>w; 
	cin>>w1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if((j==w)&&(j==w1)){
				s1=tab[i][j]*tab[i][j];
			}
		}
	}
}
	cout<<"Wynik mnozenia wiersza "<<s1;
	if(p>2){
		cout<<"Wpisz jecze raz"<<endl;
		cin>>p;
	}
}
