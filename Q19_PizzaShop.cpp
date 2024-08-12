#include <iostream>
using namespace std;

int main() {
    float totalAmount = 0;
    int choice, quantity;

    cout << "Welcome to Pizza Shop!" << endl;
    cout << "1. Margherita - 170.00" << endl;
    cout << "2. Farmhouse - 300.00" << endl;
    cout << "3. Chicken Dominator - 450.00" << endl;
    cout << "4. Exit" << endl;

    do {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter quantity: ";
                cin >> quantity;
                totalAmount += quantity * 170.00;
                break;
            case 2:
                cout << "Enter quantity: ";
                cin >> quantity;
                totalAmount += quantity * 300.00;
                break;
            case 3:
                cout << "Enter quantity: ";
                cin >> quantity;
                totalAmount += quantity * 450.00;
                break;
            case 4:
                cout << "Thank you for ordering from Pizza!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 5);

    cout << "Total Amount: Rs "<< totalAmount << endl;

    return 0;
}