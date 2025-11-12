#ifndef MAMMAL_H
#define MAMMAL_H
#include'Animal.h'

#include <string>
#include<iostream>
using namespace std;

class Mammal : public Animal {
private:
	string furColor;
public:
	Mammal(string name, int age, bool isHungry,string furColor);
		Mammal();
		~Mammal();
	string getFurColor();
	void setFurColor(string furColor);
};
#endif 


