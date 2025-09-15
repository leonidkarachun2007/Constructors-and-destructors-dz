#include <iostream>
using namespace std;

class Laptop {
	char* model;
	char* color;
	double price;
public:
	Laptop(const char* m, const char* c, double p)
	{
		model = new char[strlen(m) + 2];
		strcpy_s(model, strlen(m) + 2, m);

		color = new char[strlen(c) + 1];
		strcpy_s(color, strlen(c) + 1, c);

		price = p;
	}
	void Print()
	{
		cout << "Moedl: " << model << "\tColor: " << color << "\tPrice: " << price << endl;
	}
	~Laptop()
	{
		delete[] model;
		delete[] color;
	}
};
int main()
{
	Laptop obj1("LENOVO", "BLACK", 55000);
	obj1.Print();

}