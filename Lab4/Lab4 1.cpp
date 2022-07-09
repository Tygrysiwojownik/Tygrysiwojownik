#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main(){
	int n,tab[10][10],s=0;
	srand(time(0));
	cout<<"Wpisz dlugosc macierzy";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			tab[i][j]=rand()%10+1;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<tab[i][j];
		}
		cout<<endl;
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				s+=tab[i][j];
			}
		}
	}
	cout<<" Suma glownej przekatnej "<<s;
}
