 #include <iostream>
using namespace std;

// Custom exception classes
class base_err {};
class dlerr : public base_err {};
class d2err : public base_err {};
class d3err : public base_err {};

// Function to throw exceptions based on input value
void throwexception(int n) {
    if (n == 0)
        throw base_err();
    else if (n == 1)
        throw dlerr();
    else if (n == 2)
        throw d2err();
    else
        throw d3err();
}

int main() {
    int test;
    cout << "Enter an integer number to test exception class hierarchy: ";
    cin >> test;

    try {
        throwexception(test);
    }
    catch (dlerr) {
        cout << "dlerr (derived from base_err) error handled" << endl;
    }
    catch (d2err) {
        cout << "d2err (derived from base_err) error handled" << endl;
    }
    catch (base_err) {
        cout << "All exceptions of type base_err and its derived types except dlerr and d2err are handled here" << endl;
    }

    return 0;
}
