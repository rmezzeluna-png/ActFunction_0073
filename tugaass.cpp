#include<iostream>
using namespace std;
//Deklarasi Global
    float p,l;

//implementasi prosedure & fungsi
void input(){
    cout << "masukkan panjang :";
    cin >> p;
    cout << "masukkan lebar :";
    cin >> l;
}

float LuasPersegi(float x,float y){
    return x*y;
}

int jumlah(int a, int b, int c){
    return a+b+c;
}
void Output () {
    cout <<"Hasilnya = " << LuasPersegi(p,l) << endl;
}
// program utama 
int main()
{//start
    input ();
    Output ();
    cout << "hasil Penjumlahan = "<< jumlah(5,6,9);
}//selesai
