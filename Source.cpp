#include<iostream>
using namespace std;

class student
{
private:
	string std_id;
	string stdname;
	string	dept;
public:
	
	student(string sid, string sname)
	{
		cout << "cunstructor1 called";
		std_id = sid;
		stdname = sname;
	};
	
	student(string sname, string dp)
	{
		cout << "cunstructor3 called";
		stdname = sname;
		dept = dp;
	};

}
