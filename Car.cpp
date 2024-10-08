#include "Car.h"
#include <string.h>
#include <iostream>

using namespace std;

Car::Car()
{
	this->model = nullptr;
	this->color = nullptr;
	this->year = 0;
	this->price = 0.0;
}

Car::Car(const char* m, const char* c, int y, double pr)
{
	this->model = new char[strlen(m) + 1];
	strcpy_s(this->model, strlen(m) + 1, m);

	this->color = new char[strlen(c) + 1];
	strcpy_s(this->color, strlen(c) + 1, c);

	this->year = y;
	this->price = pr;
}

Car::~Car()
{
	delete[]this->model;
	delete[]this->color;
}

void Car::Input()
{
	char buffer[100];

	cout << "Enter model: ";
	cin >> buffer;
	SetModel(buffer);

	cout << "Enter color: ";
	cin >> buffer;
	SetColor(buffer);

	cout << "Enter year: ";
	cin >> year;

	cout << "Enter price: ";
	cin >> price;

	cout << endl;
}

void Car::Print()
{
	cout << "Model: " << this->model << endl;
	cout << "Color: " << this->color << endl;
	cout << "Year: " << this->year << endl;
	cout << "Price: " << this->price << endl;
	cout << endl;
}

char* Car::GetModel()
{
	return this->model;
}

char* Car::GetColor()
{
	return this->color;
}

int Car::GetYear()
{
	return this->year;
}

double Car::GetPrice()
{
	return this->price;
}

void Car::SetModel(const char* m)
{
	if (this->model != nullptr)
	{
		delete[]this->model;
	}
	this->model = new char[strlen(m) + 1];
	strcpy_s(this->model, strlen(m) + 1, m);
}

void Car::SetColor(const char* c)
{
	if (this->color != nullptr)
	{
		delete[]this->color;
	}
	this->color = new char[strlen(c) + 1];
	strcpy_s(this->color, strlen(c) + 1, c);
}

void Car::SetYear(int y)
{
	this->year = y;
}

void Car::SetPrice(double pr)
{
	this->price = pr;
}