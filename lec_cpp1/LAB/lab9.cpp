#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
T squareRoot(T number) {
    if (number < 0) {
        throw invalid_argument("Cannot calculate the square root of a negative number.");
    }
    return sqrt(number);
}

int main() {
    try {
         
        double number = 25.0;

        double result = squareRoot(number);
        cout << "Square root of " << number << " is: " << result <<endl;
    }
     catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() <<endl;
    }
    catch (const exception& e) {
        cerr << "An unexpected error occurred: " << e.what() <<endl;
    }

    return 0;
}
