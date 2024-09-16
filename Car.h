#pragma once
class Car
{
	char* model;
	char* color;
	int year;
	double price;
public:
	// constructor, destructor
	Car();
	Car(const char* m, const char* c, int y, double pr);
	~Car();

	// methods
	void Input();
	void Print();

	// inspectors
	char* GetModel();
	char* GetColor();
	int GetYear();
	double GetPrice();

	//modificators
	void SetModel(const char* m);
	void SetColor(const char* c);
	void SetPrice(double p);
	void SetYear(int y);
};

