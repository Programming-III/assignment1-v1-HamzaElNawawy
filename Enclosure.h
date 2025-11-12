#ifndef ENCLOSURE_H
#define ENCLOSURE_H
#include <string>
#include<iostream>
using namespace std;

class Enclosure {
private:
	Animal* animals;
	int currentCount;
	int capacity;
public:
	Enclosure(int capacity,int currentCount, Animal* animals);
	Enclosure();
	~Enclosure();
	void addAnimal(const Animal& a);
	void displayAnimals();
	Animal* getAnimals();
	int getCurrentCount();
	int getCapacity();
	int setCurrentCount(int currentCount);
	int setCapacity(int capacity);
};
#endif
