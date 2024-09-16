#include "Car.h"
#include <string.h>
#include <iostream>

int main()
{
	Car car1("Toyota", "Black", 2000, 5000);
	car1.Print();
	Car car2("Mitsubisi", "Red", 2009, 7000);
	car2.Print();
}