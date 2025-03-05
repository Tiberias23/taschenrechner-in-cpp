#include <iostream>
using namespace std;

double Adieren(double a, double b) {
    return a + b;
}

double subtrairen(double a, double b){
    return a - b;
}

double Multieplizieren(double a, double b) {
    return a * b;
}

double Diviedieren(double a, double b) {
    return a / b;
}

int main() {
    cout << "Was willst du machen?" << endl;
    cout << "Adieren(1)\nsubtrairen(2)\nmultieplizieren(3)\ndiviedieren(4)\n" << endl;
    int chois;
    cin >> chois;
    switch (chois) {
    case 1: {
        // Addieren
        double a, b;
        cout << "Was ist die Erste Zahl" << endl;
        cin >> a;
        cout << "Was ist die zweite Zahl" << endl;
        cin >> b;
        cout << Adieren(a, b);
        break;
    }
    case 2:
        // Code für Subtrahieren
        double a, b;
        cout << "Was ist die Erste Zahl" << endl;
        cin >> a;
        cout << "Was ist die zweite Zahl" << endl;
        cin >> b;
        cout << subtrairen(a, b);
        break;
    case 3:
        // Code für Multiplizieren
        double a, b;
        cout << "Was ist die Erste Zahl" << endl;
        cin >> a;
        cout << "Was ist die zweite Zahl" << endl;
        cin >> b;
        cout << Multieplizieren(a, b);
        break;
    case 4:
        // Code für's Diviedieren
        double a, b;
        cout << "Was ist die Erste Zahl" << endl;
        cin >> a;
        cout << "Was ist die zweite Zahl" << endl;
        cin >> b;
        cout << Diviedieren(a, b);
        break;
    default:
        cout << "Ungültige Auswahl";
        break;
    }
    return 0;
}
