/*Task-05*/
#include <iostream>
#include <string>
using namespace std;

class Person 
{
private:
    string name;
    const string dob;
    static int count;
    const string cnic;
public:
    Person(string name, string dob, string cnic) : name(name), dob(dob), cnic(cnic)
    {
        count++;
    }
    const string getDOB() const 
    {
        return dob;
    }
    const string getCNIC() const 
    {
        return cnic;
    }
    void display() const
    {
        cout << "Name: " << name << endl;
        cout << "Date of Birth: " << dob << endl;
        cout << "CNIC: " << cnic << endl;
    }
    static int getCount()
    {
        return count;
    }
};

int Person::count = 0;

int main()
{
    Person p("Mr. X", "1st January 2001", "xxxxx-xxxxxxx-x");
    p.display();
    cout << "Number of persons: " << Person::getCount() << endl;
    return 0;
}
