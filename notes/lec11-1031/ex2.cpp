#include <iostream>
using namespace std;

class A
{
    int i;
public:
    A(int a = 0) {
        i = a;
    }
    void show() {
        cout << "i = " << i << '\n';
    }
    operator int() {
        return i;
    }
};

int main() {
    A a1(10), a2(20);
    cout << a1 << '\n';
    cout << a2 << '\n';
    
    return 0;
}