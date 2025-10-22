// hollow diamond pattern

#include <iostream>
using namespace std;

int main(){

    int i, j, n=4;
    int k, l;

    // Top Half of the Diamond
    for(i=0;i<n;i++){
        // space
        for(j=n-i-1;j>0;j--){
            cout << " ";
        }

        // star
        cout << '*';

        // space
        if(i!=0){
        for(j=0;j<(2*i)-1;j++){
            cout << " ";
        }  }
    
        // star
        if(i!=0){
            cout << "*";
        } 

        cout << endl;
    }

    // bottom Half of the Diamond
    for(k=n-1;k>0;k--){

        // spaces
        for(l=0;l<n-k;l++){
            cout << " ";
        }

        // star
            cout << "*";

        // spaces
        for(l=2*k-3;l>0;l--){
            cout << " ";
        }

        // star
        if(k!=1){
            cout << "*";
        }

        cout << endl ;
        
    }


    return 0;
}
