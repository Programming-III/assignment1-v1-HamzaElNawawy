#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include<iostream>
using namespace std;

class Animal {
protected:
	string name;
	int age;
	bool isHungry;
public:
	Animal(string name, int age, bool isHungry);
	Animal();
	~Animal();
	void display();
	void feed();
	string getName();
	int getAge();
	bool getIsHungry();
	void setName(string name);
	void setAge(int age);
	void setIsHungry(bool isHungry);


};
#endif 
