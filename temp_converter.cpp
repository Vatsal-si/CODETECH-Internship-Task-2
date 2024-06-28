#include <iostream>
using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

// Function to convert Celsius to Kelvin
double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

// Function to convert Kelvin to Celsius
double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

// Function to convert Fahrenheit to Kelvin
double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
}

// Function to convert Kelvin to Fahrenheit
double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32.0;
}

int main() {
    int choice;
    double temperature;

    cout << "Temperature Conversion Program" << endl;
    cout << "-------------------------------" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "3. Celsius to Kelvin" << endl;
    cout << "4. Kelvin to Celsius" << endl;
    cout << "5. Fahrenheit to Kelvin" << endl;
    cout << "6. Kelvin to Fahrenheit" << endl;
    cout << "Enter your choice (1-6): ";
    cin >> choice;

    cout << "Enter the temperature: ";
    cin >> temperature;

    switch (choice) {
        case 1:
            cout << temperature << " degrees Celsius is " << celsiusToFahrenheit(temperature) << " degrees Fahrenheit." << endl;
            break;
        case 2:
            cout << temperature << " degrees Fahrenheit is " << fahrenheitToCelsius(temperature) << " degrees Celsius." << endl;
            break;
        case 3:
            cout << temperature << " degrees Celsius is " << celsiusToKelvin(temperature) << " Kelvin." << endl;
            break;
        case 4:
            cout << temperature << " Kelvin is " << kelvinToCelsius(temperature) << " degrees Celsius." << endl;
            break;
        case 5:
            cout << temperature << " degrees Fahrenheit is " << fahrenheitToKelvin(temperature) << " Kelvin." << endl;
            break;
        case 6:
            cout << temperature << " Kelvin is " << kelvinToFahrenheit(temperature) << " degrees Fahrenheit." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}