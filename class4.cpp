#include <iostream>
using namespace std;

// Class with private data members
class Person {
private:
    string name;
    int age;

public:
    // Constructor to initialize values
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // Getter method for name
    string getName() {
        return name;
    }

    // Setter method for name
    void setName(string name) {
        this->name = name;
    }

    // Getter method for age
    int getAge() {
        return age;
    }

    // Setter method for age
    void setAge(int age) {
        if (age > 0) {
            this->age = age;
        } else {
            cout << "Age must be positive!" << endl;
        }
    }

    // Display the person's information
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Creating an object of Person class
    Person person("Alice", 30);

    // Display the person's initial information
    person.displayInfo();

    // Using setter methods to change values
    person.setName("Bob");
    person.setAge(25);

    // Display the updated information
    person.displayInfo();

    // Trying to set an invalid age
    person.setAge(-5);  // Age must be positive

    return 0;
}