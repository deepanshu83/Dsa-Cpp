#include <iostream>
using namespace std;
int main(){

    int i, j, n = 4;
    int num = 1;
    char ch = 'A';

    // A
    // B C
    // D E F
    // G H I J
    // pattern's code 
    for(i=1;i<=n;i++){
        for(j=i;j>=1;j--){
            cout << ch << ' ';
            ch++;
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}