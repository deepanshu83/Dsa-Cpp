// factorial of n number

#include <iostream>
using namespace std ;

int factorial(int n){

    int fact = 1;

    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    cout << fact;

    return fact;
}

int main(){

    factorial(3);

    return 0;
}