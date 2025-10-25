// write a function to check if a number is prime or not ??

#include <iostream>
#include <cmath>
using namespace std;

bool checkPrime(int n){
    if(n<=1){
        return false;
    }

    for(int i=2;i<= sqrt(n);i++){
        if(n%i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    int n = 10433;
        if(checkPrime(n)){
    cout << n << " This number is a prime number";
        }else{
    cout << n << " This number is not a prime number";
        }
    return 0;
}