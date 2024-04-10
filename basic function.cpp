#include <bits/stdc++.h>
using namespace std;

class Complex{
    private:
    int a, b;

    public:
    void set_number(int,int);

    void show_number(){
        cout << a << "\t" << b;
    }
};

void Complex:: set_number(int x, int y){
    a = x; 
    b = y;
}

int main(){
    Complex c1;
    c1.set_number(2,10);
    c1.show_number();
}