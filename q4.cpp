/*Task-04*/
#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string id;
    string name;
    string department;
    const string bankAccount;
    string grade;
public:
    Employee() : id(""), name(""), department(""), bankAccount("1234567890"), grade("") {};
    Employee(string id, string name, string department, string grade) : id(id), name(name), department(department), bankAccount("1234567890"), grade(grade) {};
    void inputData() 
    {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Department: ";
        cin >> department;
        cout << "Enter Grade: ";
        cin >> grade;
    }
    void displayData() const 
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Bank Account Number: " << bankAccount << endl;
        cout << "Grade: " << grade << endl;
    }
    ~Employee() 
    {
        cout << "Destructor called for employee " << name << endl;
    }
};

int main() 
{
    Employee* emp1 = new Employee();
    emp1->inputData();
    emp1->displayData();

    Employee* emp2 = new Employee("1102", "Qasim", "Marketing", "5");
    emp2->displayData();

    Employee* emp3 = new Employee();
    emp3->inputData();
    emp3->displayData();

    delete emp1;
    delete emp2;
    delete emp3;

    return 0;
}
