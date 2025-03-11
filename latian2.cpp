#include<iostream>
using namespace std;

float Panjang, Lebar;

float FungsiHitungLuas(){
    return Panjang * Lebar;
}

int main(){
    cout << "Masukan Panjangnya : ";
    cin>> Panjang;
    cout << "Masukan Lebarnya : ";
    cin>> Lebar;

    cout<< "Luas Persegi Panjang : " << FungsiHitungLuas();
}