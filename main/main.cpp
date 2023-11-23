
#include "../func/func.h"

using namespace std;

int main() {
    int choice, a, b;
    cout << "Choose function:\n";
    cout << "1. Minimum\n";
    cout << "2. Maximum\n";
    cout << "3. Square\n";
    cout << "4. Power\n";
    cout << "5. Check even or odd\n";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Enter two numbers: ";
        cin >> a >> b;
        cout << "Minimum: " << MIN(a, b) << endl;
        break;
    case 2:
        cout << "Enter two numbers: ";
        cin >> a >> b;
        cout << "Maximum: " << MAX(a, b) << endl;
        break;
    case 3:
        cout << "Enter a number: ";
        cin >> a;
        cout << "Square: " << SQUARE(a) << endl;
        break;
    case 4:
        cout << "Enter a number: ";
        cin >> a;
        int power;
        cout << "Enter a power: ";
        cin >> power;
        cout << "Power: " << POWER(a, power) << endl;
        break;
    case 5:
        cout << "Enter a number: ";
        cin >> a;
        cout << a << " is " << (IS_EVEN(a) ? "even" : "odd") << endl;
        break;
    default:
        cout << "Invalid choice.\n";
        break;
    }

    return 0;
}
