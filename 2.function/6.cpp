#include <iostream>
#include <cmath>
using namespace std;

bool checkPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }

    return true;
}

int main(){
    int num = 1000 ;
    for(int i=1;i<=num;i++){
        if(checkPrime(i)){
            cout << i << " ";
        }
    }
    return 0;
}