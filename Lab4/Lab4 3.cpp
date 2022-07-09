#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main(){
	int n,tab[10][10],tab1[10][10],tab2[10][10];
	srand(time(0));
	cout<<"Wpisz dlugosc macierzy"<<endl;
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
		tab1[i][j]=rand()%10+1;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<tab1[i][j];
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				tab2[i][j]=tab[i][j]*tab1[i][j];
			}
		}
		cout<<endl;
	}
	cout<<"Macierz po mnozeniu";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<tab2[i][j];
		}
		cout<<endl;
	}
}
