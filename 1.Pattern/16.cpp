#include <iostream>
using namespace std;
int main(){

    int i, j, n=4 ;
    int num = 1;

    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
           cout << num ;
        }
        cout << endl;
        num++;
    }

    return 0;
};