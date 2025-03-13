#include <iostream>
using namespace std;

// Base class
class A {
public:
    void showA() {
        cout << "This is the A class." << endl;
    }
};

// Intermediate Derived class inheriting from Base
class B : public A {
public:
    void showB() {
        cout << "This is B class." << endl;
    }
};

// Another Base class
class C {
public:
    void showC() {
        cout << "This is C class." << endl;
    }
};

// Derived class inheriting from both B and C (Hybrid Inheritance)
class D : public B, public C {
public:
    void showD() {  

        cout << "This is D class (Hybrid Inheritance)." << endl;
    }
};

int main() {
    D obj;

    // Accessing functions from different levels of inheritance
    obj.showA();  
    obj.showB();  
    obj.showC(); 
    obj.showD();  

    return 0;
}
