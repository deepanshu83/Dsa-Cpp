#include <iostream>
using namespace std;
int main(){

    int i, j, n = 4;
    int num = 1;
    char ch = 'A';

    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // pattern's code 
    for(i=1;i<=n;i++){
        for(j=i;j>=1;j--){
            cout << num << ' ';
            num++;
        }
        cout << endl;
    }
    cout << endl;


    return 0;
}