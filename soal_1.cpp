#include<iostream>
using namespace std; 
int main(){
    int row, i, j, n=1;

    cout<<"Masukkan row : ";
        cin>>row;
    
    for(i=1; i<=row; i++){
        for(j=1; j<=i; j++){
            cout<<n++<<" ";
        }
        cout<<endl;
    }

    return 0;
}