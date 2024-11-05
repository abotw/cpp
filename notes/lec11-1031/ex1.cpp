#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    Person(string name, int age) {
        this->m_Name = name;
        this->m_Age = age;
    }
    bool operator==(Person& p) {
        if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
            return true;
        } else {
            return false;
        }
    }
    bool operator!=(Person& p) {
        if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
            return false;
        } else {
            return true;
        }
    }
private:
    string m_Name;
    int m_Age;
};

int main() {
    Person a("孙悟空", 18);
    Person b("孙悟空", 18);
    if (a == b) { // a.operator==(b)
        cout << "a和b相等\n";
    } else {
        cout << "a和b不相等\n";
    }
    
    if (a != b) { // a.operator!=(b)
        cout << "a和b不相等\n";
    } else {
        cout << "a和b相等\n";
    }
    
    return 0;
}