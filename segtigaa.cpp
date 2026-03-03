#include<iostream>
using namespace std;

float a,t;

void input (){
    cout << "masukan alas : " ;
    cin >> a;
    cout << "masukan tinggi : " ;
    cin >> t;
}

float LuasSegitiga(){
    return 0.5*a*t;

}

void output (){
    cout << "hasilnya = " << LuasSegitiga();
}

int main(){
    input();
    output();
}
