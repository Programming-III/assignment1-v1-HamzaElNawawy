#ifndef BIRD_H
#define BIRD_H
#include'Animal.h'
#include <string>
#include<iostream>
using namespace std;

class Bird : public Animal {
	private:
		float wingSpan;
public:
	Bird(string name, int age, bool isHungry, float wingSpan);
	Bird();
	~Bird();
	float getWingSpan();
	void setWingSpan(float wingSpan);
};
#endif 
