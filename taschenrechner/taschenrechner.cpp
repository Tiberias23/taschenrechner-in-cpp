#include <iostream>
#include <cmath>
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

double Diviedieren(double a, double b){
    return a / b;
}

double Potenzen(double base, double exponent) {
    return pow(base, exponent);
}

double Quadratwurzel(double a) {
    return sqrt(a);
}

int main() {
    cout << "Was willst du machen?" << endl;
    cout << "Adieren(1)\nsubtrairen(2)\nmultieplizieren(3)\ndiviedieren(4)\nPotenzen(5)\nquadratwurzel(6)" << endl;
    int chois;
    cin >> chois;
    
    double a, b; // Deklaration außerhalb des switch-Blocks
    switch (chois) {
    case 1: {
        // Addieren
        cout << "Was ist die Erste Zahl" << endl;
        cin >> a;
        cout << "Was ist die zweite Zahl" << endl;
        cin >> b;
        cout << Adieren(a, b);
        break;
    }
    case 2:
        // Subtrahieren
        cout << "Was ist die Erste Zahl" << endl;
        cin >> a;
        cout << "Was ist die zweite Zahl" << endl;
        cin >> b;
        cout << subtrairen(a, b);
        break;
    case 3:
        // Multiplizieren
        cout << "Was ist die Erste Zahl" << endl;
        cin >> a;
        cout << "Was ist die zweite Zahl" << endl;
        cin >> b;
        cout << Multieplizieren(a, b);
        break;
    case 4:
        // Dividieren
        cout << "Was ist die Erste Zahl" << endl;
        cin >> a;
        cout << "Was ist die zweite Zahl" << endl;
        cin >> b;
        cout << Diviedieren(a, b);
        break;
    case 5:
        // Potenzen
        cout << "Was ist die Base Zahl" << endl;
        cin >> a;
        cout << "Was ist der Exponent" << endl;
        cin >> b;
        cout << Potenzen(a, b);
        break;
    case 6:
        // Quadratwurzel
        cout << "Was ist die Zahl" << endl;
        cin >> a;
        cout << Quadratwurzel(a);
        break;
    default:
        cout << "Ungültige Auswahl";
        break;
    }
    return 0;
}
