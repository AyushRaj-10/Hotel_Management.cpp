#include <iostream>
using namespace std;

int main() {
    int arooms = 15;
    int ashake, apastry, apasta, ajuice, achicken, amaggi;

    cout << "Sold rooms: ";
    int srooms;
    cin >> srooms;
    arooms = arooms - srooms;

    cout << "\nAvailable Shakes: ";
    cin >> ashake;
    cout << "Available Pastry: ";
    cin >> apastry;
    cout << "Available Pasta: ";
    cin >> apasta;
    cout << "Available Juice: ";
    cin >> ajuice;
    cout << "Available Chicken: ";
    cin >> achicken;
    cout << "Available Maggi: ";
    cin >> amaggi;

    const int prices[] = {50, 70, 120, 60, 200, 50}; 
    int total_bill = 0; 

    int choice;
    while (true) {
        cout << "\n\nWhat do you want:\n1. Rooms\n2. Food\n3. Exit\n\nPlease select your order: ";
        cin >> choice;
        cout << endl;

        switch (choice) {
        case 1: {
            cout << "Price of each room is 1500" << endl;
            cout << "Enter number of rooms to book: ";
            int orooms;
            cin >> orooms;
            if (arooms >= orooms) {
                total_bill += orooms * 1500; 
                arooms -= orooms;
                cout << "Room booked successfully! Rooms left: " << arooms << endl;
            } else {
                cout << "Room is not available at this moment." << endl;
            }
            break;
        }
        case 2: {
            int n, quantity;
            cout << "\tMenu\nFood\tPrice" << endl;
            cout << "1. Shake \t 50\n2. Pastry \t 70\n3. Pasta \t 120\n4. Juice \t 60\n5. Chicken \t 200\n6. Maggi \t 50";
            cout << endl << "Please select your order: ";
            cin >> n;

            if (n >= 1 && n <= 6) {
                cout << "Enter quantity: ";
                cin >> quantity;

                
                switch (n) {
                case 1:
                    if (ashake >= quantity) ashake -= quantity;
                    else { cout << "Not enough shakes available.\n"; break; }
                    break;
                case 2:
                    if (apastry >= quantity) apastry -= quantity;
                    else { cout << "Not enough pastries available.\n"; break; }
                    break;
                case 3:
                    if (apasta >= quantity) apasta -= quantity;
                    else { cout << "Not enough pasta available.\n"; break; }
                    break;
                case 4:
                    if (ajuice >= quantity) ajuice -= quantity;
                    else { cout << "Not enough juice available.\n"; break; }
                    break;
                case 5:
                    if (achicken >= quantity) achicken -= quantity;
                    else { cout << "Not enough chicken available.\n"; break; }
                    break;
                case 6:
                    if (amaggi >= quantity) amaggi -= quantity;
                    else { cout << "Not enough Maggi available.\n"; break; }
                    break;
                }

                total_bill += prices[n - 1] * quantity; 
                cout << "Order placed successfully!" << endl;
            } else {
                cout << "Not available." << endl;
            }
            break;
        }
        case 3:
            cout << "Your total bill is: " << total_bill << endl;
            cout << "Exiting program. Thank you!" << endl;
            return 0;
        default:
            cout << "Invalid input. Please try again." << endl;
        }
    }

    return 0;
}
