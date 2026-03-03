#include <iostream>
using namespace std;

float p,l;

void input () {
    cout << "masukkan panjang : " ;
    cin >> p;
    cout << "masukkan lebar : " ;
    cin >> l;

}

float LuasPersegi(){
    return p*l;

}

void output (){
    cout << "hasilnya = " << LuasPersegi ();
}
int main ()
{
    input();
    output ();
}