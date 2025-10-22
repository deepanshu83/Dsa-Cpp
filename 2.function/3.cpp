// calculate sum of digits of a number 

#include <iostream>
using namespace std;

int sumDig(int a){

    int sum = 0;

    while(a>0){
        int lastDig = a % 10 ;
        sum += lastDig;
        a = a/10;
    }
    cout << sum;
    return  sum;
}

int main(){

    sumDig(12345);

    return 0;
}