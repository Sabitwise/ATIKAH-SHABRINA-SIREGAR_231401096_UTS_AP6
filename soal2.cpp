#include<iostream>
using namespace std; 
int main(){
    int angka, total, x=0;
    cout<<"Masukkan angka : ";
        cin>>angka;

    while(angka!=0){
        total = angka % 10;
        x+=total;
        angka/=10;
    }

    cout<<"Total : "<<x;
    return 0;
}