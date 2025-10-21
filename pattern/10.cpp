#include <iostream>
using namespace std;
int main(){

    int i, j, n = 4;
    int num = 1;
    char ch = 'A';

    // 4321
    // 4321
    // 4321
    // 4321 
    // pattern's code 
    for(i=1;i<=n;i++){
        for(j=n;j>=1;j--){
            cout << j;
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}