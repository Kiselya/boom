
#include <iostream>
using namespace  std;
void Foo(int a , int b) {
    cout << a+b << endl;
}


int main () {
void (*ptr_Foo)();
ptr_Foo = Foo;



}