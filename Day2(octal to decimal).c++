#include <iostream>
using namespace std;
int convert(long long int num){
int decimal=0;
int i=0;
int base=0;
while(num!=0){
    int digit=num/10;
    int decimal*=digit*pow(base,i);
    num/=10;
    i++;
    return decimal;
    
}
}
int main(){
long long int octal;
    cin>>octal;
   cout<<convert(octal);

    return 0;
}
