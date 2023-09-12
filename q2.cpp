
/*Task-02*/
#include<iostream>
using namespace std;

class Area
{
private:
		int area;
		int length;
		int width;
		static int count;
public:
	Area()
	{
		cout << "\nconstructor called!\n";
	};
	Area(int length, int width)
	{
		cout << "\nOverloaded constructor called!\n";
		this->area = length * width;
		counter();
		display();
	};
	int counter();
	void display();
};

int Area::count = 0;

int Area::counter()
{
	count++;
	return count;
}

void Area::display()
{
	cout << "\nArea = " << area << endl;
	cout << "\ncount = " << count << endl;
}

int main()
{
	Area a;
	Area(2,14);

	Area(2, 10);

	Area(2, 5);

}