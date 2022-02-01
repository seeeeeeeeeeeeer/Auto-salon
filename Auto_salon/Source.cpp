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
	string get_name() { return name; }
	int get_year() { return year; }
	double get_engine() { return engine; }
	int get_price() { return price; }
	void set_name()
	{
		cout << "Enter name:";
		cin >> name;
	}
	void set_year()
	{
		cout << "Enter year:";
		cin >> year;
	}
	void set_engine()
	{
		cout << "Enter engine:";
		cin >> engine;
	}
	void set_price()
	{
		cout << "Enter price:";
		cin >> price;
	}
	void print()
	{
		cout<<string(50, '=');
		cout << "Name: " << name << "\n";
		cout << "Year: " << year << "\n";
		cout << "Engine: " << engine << "\n";
		cout << "Price: " << price << "\n";
		cout<<string(50, '=');
	}
};

class auto_salon :private automobile
{
	vector<automobile>a;
	string vin_code;
	string color;
public:
	auto_salon()
	{
		vin_code = "NULL";
		color = "NULL";
	}
	auto_salon(string name, int year, double engine, int price,string vin_code, string color)
	{
		this->vin_code = vin_code;
		this->color = color;
	}
	string get_vin_code() { return vin_code; }
	string get_color() { return color; }
	void set_vin_code()
	{
		cout << "Enter vin code: ";
		cin >> vin_code;
	}
	void set_color()
	{
		cout << "Enter color: ";
		cin >> color;
	}
	void add_auto()
	{
		cout << "Enter name: ";
		//cin >> name;

			
	}
	void delete_auto()
	{
		cout << "Enter vin code";
		cin >> vin_code;
	}
	void sort_name()
	{

	}
	void sort_year()
	{

	}
	void sort_engine()
	{

	}
	void sort_price()
	{

	}
	void sort_vin_code()
	{

		sort_vin_code(a.begin(), a.end(), [](a& e, a& e1)
			{
				return a. > e1.get_num();

			});
	}
	void sort_color()
	{
		sort_color(a.)
	}
	void find_name()
	{

	}
	void find_year()
	{

	}
	void find_engine()
	{

	}
	void find_price()
	{
		double price;
		cout << "Enter price : ";
		cin >> price;
		vector<automobile> res;
		copy_if(a.begin(), a.end(), back_inserter(res),
			[price] {
			return a.get_price() == price;
			});

		for (int i = 0; i < res.size(); i++) {
			res[i].print();
		}
	}
	void find_vin_code()
	{

	}
	void find_color()
	{

	}
	void print()
	{
		for (int i = 0; i < a.size(); i++)
			a[i].print();
	}
};

void menu(int& choise)
{
	cout << "\n0.Save & Exit\n";
	cout << "1.Add avto\n";
	cout << "2.Delete avto\n";
	cout << "3.Sort by name\n";
	cout << "4.Sort by year\n";
	cout << "5.Sort by engine\n";
	cout << "6.Sort by price\n";
	cout << "7.Sort by vin code\n";
	cout << "8.Sort by color\n";
	cout << "9.Find by color\n";
	cout << "10.Find by color\n";
	cout << "11.Find by color\n";
	cout << "12.Find by color\n";
	cout << "13.Find by color\n";
	cout << "Choise: ";
	cin >> choise;
}

int main()
{

	int menu{ 0 };

	automobile avto;
	avto.print();
	



	return 504;
}