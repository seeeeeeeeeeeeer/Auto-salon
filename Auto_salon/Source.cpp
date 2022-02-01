#include<iostream>
#include<vector>
#include<string>

using namespace std;

class automobile
{
	string name;
	int year;
	double engine;
	int price;
public:
	automobile()
	{
		name = "NULL";
		year = 0;
		engine = 0;
		price = 0;
	}
	automobile(string name, int year, double engine, int price)
	{
		this->name = name;
		this->year = year;
		this->engine = engine;
		this->price = price;
	}
	void print()
	{
		cout << "Name: " << name << "\n";
		cout << "Year: " << year << "\n";
		cout << "Engine: " << engine << "\n";
		cout << "Price: " << price << "\n";
	}
};



int main()
{



	return 504;
}