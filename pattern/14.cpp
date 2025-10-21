#include <iostream>
using namespace std;
int main(){

    int i, j, n = 4;
    int num = 1;
    char ch ;

    // A
    // B A
    // C B A 
    // D C B A
    // pattern's code 
    for(i=1;i<=n;i++){
        ch = 'A' + i - 1  ;
        for(j=1;j<=i;j++){
            cout << ch << ' ';
            ch--;
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}