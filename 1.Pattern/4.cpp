#include <iostream>
using namespace std;

int main(){
    int  i, j, n = 4 , count = 1 ;

    for(i=1;i<=n;i++){
        for(j=1;j<i;j++){
           cout << count ;
        }
         cout << count++ << endl;
    }

    return 0;
}