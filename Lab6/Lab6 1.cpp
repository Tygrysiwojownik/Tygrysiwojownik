#include <iostream>
#include <cmath>
using namespace std;
long long convert(int n) {
  long long bin = 0;
  int rem, i = 1;
  while (n!=0) {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }
  return bin;
}
int convertBinarytoOctal(long long bin)
{
    int octalNumber = 0, decimalNumber = 0, i = 0;

    while( bin!= 0)
    {
        decimalNumber += (bin%10) * pow(2,i);
        ++i;
        bin/=10;
    }

    i = 1;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}

int main() {

  int n, bin;
  char hexDecNum[20];
  int binaryNum, hex=0, mul=1, chk=1, rem, i=0;
  cout << "Enter a decimal number: ";
  cin >> n;
  bin = convert(n);
  cout << n << " in decimal = " << bin << " in binary "<<" in octal "<<convertBinarytoOctal(bin)<<endl;
   while(bin!=0)
    {
        rem = bin%10;
        hex = hex + (rem*mul);
        if(chk%4==0)
        {
            if(hex<10)
                hexDecNum[i] = hex+48;
            else
                hexDecNum[i] = hex+55;
            mul = 1;
            hex = 0;
            chk = 1;
            i++;
        }
        else
        {
            mul = mul*2;
            chk++;
        }
        bin = bin/10;
    }
    if(chk!=1)
        hexDecNum[i] = hex+48;
    if(chk==1)
        i--;
    cout<<"\nEquivalent Value in Hexadecimal: ";
    for(i=i; i>=0; i--)
        cout<<hexDecNum[i];
    cout<<endl;
  return 0;
}
