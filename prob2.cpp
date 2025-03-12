#include <iostream>
#include <string>
using namespace std;

class Item {
private:
    int itemID;
    string itemName;
    float price;
    int quantity;

public:
    Item(int id, string name, float cost, int qty) {
        itemID = id;
        itemName = name;
        price = cost;
        quantity = qty;
    }

    void displayDetails() {
        cout << "\nItem Details:" << endl;
        cout << "Item ID: " << itemID << endl;
        cout << "Item Name: " << itemName << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Price: " << calculateTotalPrice() << endl;
    }

    void updateQuantity(int newQuantity) {
        quantity = newQuantity;
    }

    float calculateTotalPrice() {
        return price * quantity;
    }
};

int main() {
    int id, qty;
    string name;
    float cost;
    
    cout << "Enter Item ID: ";
    cin >> id;
    cout << "Enter Item Name: ";
    cout << "Enter Item Price: ";
    cin >> cost;
    cout << "Enter Item Quantity: ";
    cin >> qty;

    Item item(id, name, cost, qty);
    
    item.displayDetails();
    
    cout << "\nEnter new quantity: ";
    cin >> qty;
    item.updateQuantity(qty);
    
    item.displayDetails();
    
    return 0;
}


