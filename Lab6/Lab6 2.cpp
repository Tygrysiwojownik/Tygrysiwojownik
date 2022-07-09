#include<iostream>
#include<string>
using namespace std;
int konwersja_do_10(string string)
{
    int cyfra;
    int potega = 1;
    int liczba=0;  
    for(int i=0;i<=14;i++)
    {
            if(i>=65 && i<=70)
                cyfra = i - 55;
            else if(i>=48 && i<=57)
                cyfra = i - '0';
            liczba=liczba + cyfra * potega;
            potega*=16;
        
    }
    return liczba;
}
 
string * konwersja_do_16(int liczba)
{
    string string1;
    int reszta;
    for(int i=0;i<=14;i++)
    {
        reszta = liczba % 16;
        if(reszta == 15) string1[i]='F';
        else if(reszta==14) string1[i]='E';
        else if(reszta==13) string1[i]='D';
        else if(reszta==12) string1[i]='C';
        else if(reszta==11) string1[i]='B';
        else if(reszta==10) string1[i]='A';
        liczba/=16;
        if(liczba==0) break;
    }
}
 
int main()
{
    int wybor;
    string string1;
    string string2;
     
    cout<<"Podaj liczbe szesnastkowa (podajemy tylko cyfry i wielkie litery A-F) nr 1: "<<endl;
    cin>>string1;
    cout<<"Podaj liczbe szesnastkowa (podajemy tylko cyfry i wielkie litery A-F) nr 2: "<<endl;
    cin>>string2;
     
    int liczba1, liczba2;
    liczba1 = konwersja_do_10(string1);
    liczba2 = konwersja_do_10(string2);
     
    cout<<"Kalkulator szesnastkowy\n1. Dodawanie\n2. Odejmowanie\n3. Mnozenie 4"<<endl;
    cin>>wybor;
    switch(wybor)
    {
        default:
            cout<<"Nie ma takiej opcji. Koniec";
            break;
        case 1:
            cout<<"Wynik:"<<konwersja_do_16(liczba1+liczba2);
            break;
        case 2:
            cout<<"Wynik: "<<konwersja_do_16(liczba1-liczba2);
            break;
        case 3:
            cout<<"Wynik: "<<konwersja_do_16(liczba1*liczba2);
            break;
    }
    return 0;
}
