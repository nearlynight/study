#include <iostream>
#include <math.h>


float circumference(float r){
	float circumference = 0;
	circumference = 2 * M_PI * r;
	return circumference;
}

float area(float r){
	float area = 0;
	area = M_PI * r * r;
	return area;
}


int main(){
	float radius = 0;
	std::cout << "Bitte Radius eingeben: " << std::endl;
	std::cin >> radius;
	std::cout << "Umfang: " << circumference(radius) << std::endl;
	std::cout << "Flächeninhalt: " << area(radius) << std::endl;

	return 0;
}