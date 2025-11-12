#ifndef REPTILE_H
#define REPTILE_H
#include'Animal.h'

#include <string>
#include<iostream>
using namespace std;

class Reptile : public Animal {
private:
	bool isVenomous;
public:
	Reptile(string name, int age, bool isVenomous, bool isHungry);
	Reptile();
	~Reptile();
	bool getIsVenomous();
	void setIsVenomous(bool isVenomous);

};
#endif 
