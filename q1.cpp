/*Task-01*/
#include<iostream>
using namespace std;

class student 
{
private:
	int std_id;
	string stdname;
	string	dept;
public:
	student() 
	{
		cout << " default cunstructor called";
		std_id = 0;
		stdname = "hello"; 
		dept = "hello";
		
	};
	
	student(int sid , string sname )
	{ 
		cout << "cunstructor1 called"; 
		std_id = sid;
		stdname = sname;
	};
	student(int sid , string sname, string dp)
	{
		cout << "cunstructor2 called";
		std_id = sid;
		stdname = sname;
		dept = dp;
	};
	student(string sname  , string dp  )
	{ 
		cout << "cunstructor3 called"; 
		stdname = sname;
		dept = dp;
	};

	student(student &s)
	{
		cout << "copy costructor called \n";
		this->std_id = s.std_id;
		this->stdname = s.stdname;
		this->dept = s.dept;
	}
	void inputdata();
	void displaydata();

	~student()
	{
		cout << endl << " detructor called!" << endl;
	};
};

void student::inputdata()
{
	cout << "Enter student id :\t";
	cin >> this->std_id;

	cout << "Enter student name :\t";
	cin >> this->stdname;

	cout << "Enter student department :\t";
	cin >> this->dept;
}

void student::displaydata()
{
	cout << "student id :\t" << this->std_id;

	cout << "Enter student name :\t" << this->stdname;

	cout << "Enter student department :\t" << this->dept;
}

int main()
{
	student obj1;
	cout << endl;
	student obj2(12345 , "Ali Hassan");
	cout << endl;
	student obj3(23456 , "Sheraz Depp" , "Computer Science" );
	cout << endl;
	student obj4("Fahad abbas", "Computer Science");
	cout << endl;

	student Sheraz(obj3);
	Sheraz.displaydata();

	student *obj5=new student;
	student* obj6 = new student;
	student* obj7 = new student;
}