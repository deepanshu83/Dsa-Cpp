#include <iostream>
using namespace std;
int main(){

    int i, j, n = 4;
    int num = 1;
    char ch ;

    // 1 1 1 1 
    // 2 2 2
    // 3 3  
    // 4
    // pattern's code 
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout << num << ' ';
        }
        num++ ;
        cout << endl;
    }
    cout << endl;

    return 0;
}