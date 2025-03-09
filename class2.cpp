#include <iostream>
#include <string>
using namespace std;

// Declare a class named "Car"
class Car {
public:
  string brand;
  string model;
  int year;

  // Constructor to initialize the data members
  Car(string b, string m, int y) {
    brand = b;
    model = m;
    year = y;
  }

  // Method to display car details
  void display() {
    cout << brand << " " << model << " " << year << "\n";
  }
};

int main() {
  // Create car objects using the constructor
  Car myCar1("BMW", "X5", 1999);
  Car myCar2("Ford", "Mustang", 1969);
  
  // Print the car details using the display method
  myCar1.display();
  myCar2.display();
  
  return 0;
}