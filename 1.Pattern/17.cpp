#include <iostream>
using namespace std;
int main(){

    int i, j, n=4 ;
    int num = 1;

    for(i=0;i<n;i++){

        for(j=0;j<i;j++){
            cout << " ";
        }

        for(j=1;j<=n-i;j++){
           cout << (i+1)  ;
        }
        cout << endl;
    }

    return 0;
};