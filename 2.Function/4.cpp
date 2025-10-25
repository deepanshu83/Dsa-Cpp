// calculate ncr binomial cofficient for n and r ??

#include <iostream>
using namespace std;

int factorial(int n ){
   int fact = 1;
     for(int i=1;i<=n;i++){
        fact *= i;
     }

       return fact;
   }

int ncr(int n , int r){
    int nval = factorial(n);
    int rval = factorial(r);
    int nmr = factorial(n-r);

    int ncrVal = nval/(rval*nmr);

    return ncrVal ;
}

int main(){
    cout << ncr(10,3) << endl;
    return 0;
}