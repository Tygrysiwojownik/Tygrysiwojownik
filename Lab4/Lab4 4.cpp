#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main(){
	int n;
	srand(time(0));
	cout<<"Wpisz dlugosc macierzy"<<endl;
	cin>>n;
	int tab[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			tab[i][j]=rand()%10+1;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){		
			if(i==j){
				cout<<"x";
			}if (i<j){
				cout<<" ";
			}else
			 cout<<tab[i][j];
		}
		cout<<endl;
	}
}
