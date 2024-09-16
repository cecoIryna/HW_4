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

void Car::Print()
{
	cout << "Model: " << this->model << endl;
	cout << "Color: " << this->color << endl;
	cout << "Year: " << this->year << endl;
	cout << "Price: " << this->price << endl;
	cout << endl;
}

char* Car::GetColor()
{
	return this->color;
}

void Car::SetYear(int y)
{
	this->year = y;
}