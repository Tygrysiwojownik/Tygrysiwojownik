#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	int i,tab[1000],tab1[1000];
	for(i=1;i<=1000;i++)
	{
		tab[i]=i;
		tab1[i]=i+2;
		cout<<"Dla liczby "<<tab[i]<<"jest liczba "<<tab1[i];
	}
}
