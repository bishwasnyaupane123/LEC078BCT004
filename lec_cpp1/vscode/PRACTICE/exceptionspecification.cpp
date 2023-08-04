 #include<iostream>
using namespace std;

class DAYERR {};
class MONTHERR {};
class YEARERR {};

class Date
{
private:
    int day, month, year;

public:
    void read_date() throw (DAYERR, MONTHERR, YEARERR); // Use throw keyword for exception specification
    void show_date();
};

void Date::read_date() throw (DAYERR, MONTHERR, YEARERR)
{
    cout << "Enter day: ";
    cin >> day;
    if (day > 31)
        throw DAYERR();

    cout << "Enter month: ";
    cin >> month;
    if (month > 12)
        throw MONTHERR();

    cout << "Enter year: ";
    cin >> year;
    if (year < 0)
        throw YEARERR();
}

void Date::show_date()
{
    cout << "Date of birth is " << day << "/" << month << "/" << year << endl;
}

int main()
{
    Date d1;

    try
    {
        cout << "Enter your date of birth" << endl;
        d1.read_date();
        d1.show_date();
    }
    catch (DAYERR)
    {
        cout << "Exception: day cannot be greater than 31" << endl;
    }
    catch (MONTHERR)
    {
        cout << "Exception: month cannot be greater than 12" << endl;
    }
    catch (YEARERR)
    {
        cout << "Exception: year cannot be negative" << endl;
    }

    return 0;
}
