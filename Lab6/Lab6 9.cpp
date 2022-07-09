#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main(){
	int k,n;
	cout<<" Wpisz jak na wielu liczbach chcesz to sprawdzc "<<endl;
	cin>>n;
	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
			if(i==j){
			k=i*j;
			if(k<10){
				cout<<"Liczby oierwsze "<<k;
			}
			if(k>10){
			if((k/10==1)||(k/10==2)||(k/10==4)||(k/10==5)){
			cout<<"Liczby pierwsze "<<k;
		}
			if(k>100){
			if((k/10==1)||(k/10==2)||(k/10==4)||(k/10==5)){
			cout<<"Liczby pierwsze "<<k;
		}
		}
		}
		}
	}
}
}
