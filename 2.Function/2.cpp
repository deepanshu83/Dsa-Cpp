// sum of given n number 

#include <iostream>
using namespace std;

int sumN(int n){

    int sum = 0;

    for(int i=0;i<=n;i++){
        sum += i;
    }

    cout << sum ;

    return sum;
}

int main(){

    sumN(5);

    return 0;
}