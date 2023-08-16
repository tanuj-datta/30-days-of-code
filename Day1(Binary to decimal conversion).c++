
#include <iostream>
#include<math.h>
int convert(long long int num){

    int i=0;
    int decimal = 0;
    int digit= num/10;
    decimal*=digit*pow(2,i);
    num/=10;
    i++;
return decimal;
    
}
int main() {
    // Write C++ code here
    long long int binary;
    cin>>binary;
   cout<<convert(binary);
    
    return 0;
}
