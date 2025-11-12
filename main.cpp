#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <string>
#include <iostream>
using namespace std;


	Animal: Animal(string n, int a, bool h) {
		name = n;
		age = a;
		isHungry = h;
	}
Animal:Animal() {
		this->name = "";
		this->age = 0;
		this->isHungry = false;
	}
Animal:~Animal() {

	}
	void Animal: display() {
		cout << "Name: " << name << ",( Age: " << age << "," isHungry <<")" << endl;
	}
	void Animal : feed() {
		if (isHungry == true) {
			cout << "Feed" << endl;
		}
		else
			cout << "Do not feed" << endl;
	}
	string Animal : getName() {
		return name;
	}
	int Animal : getAge() {
		return age;
	}
	bool Animal : getIsHungry() {
		return isHungry;
	}
	void Animal : setName(string name) {
		this->name = name;
	}
	void Animal : setAge(int age) {
		this->age = age;
	}
	void Animal : setIsHungry(bool isHungry) {
		this->isHungry = isHungry;
	}
Mammal:Mammal(string c) {
	furColor = f;
	}
Mammal:Mammal() {
this->furColor = "";
	}
Mammal:~Mammal() {

	}
string Mammal : getFurColor() {
	return furColorl;
	}
	void Mammal : setFurColor(string furColor) {
		this->furColor = furColor;

	}
Bird:Bird(float w) {
	wingSpan = w;
	}
Bird:Bird() {
this->wingSpan = 0.0;
	}
Bird:~Bird() {

	}
float Bird : getWingSpan() {
	return wingSpan;
	}
void Bird : setWingSpan(float wingSpan) {
	this->wingSpan = wingSpan;
	}
Reptile:Reptile(bool v) {
isVenomous=v
}
Reptile:Reptile() {
this->isVenomous = false;
}
Reptile:~Reptile() {

}
Reptile:bool getIsVenomous() {
return isVenomous;
}
Reptile:void setIsVenomous(bool isVenomous) {
this->isVenomous = isVenomous;
}
Enclosure:Enclosure(int c, int count, *a) {
capacity = c;
currentCount = count;
animals = a;

}
Enclosure:Enclosure() {
this->capacity = 0;
this->currentCount = 0;
this->animals = new Animal;
}
Enclosure:~Enclosure() {
delete()animals;
}
void Enclosure : addAnimal(const Animal& a) {
	if (currentCount == capacity) {
		cout << "Capacity is full" << endl;
	}
	else
		animals[currentCount] = a;
	currentCount++;
}
void Enclosure : displayAnimals() {
	for (int i = 0;i < currentCount;i++) {
		cout << "Animal:" << animals[i] << endl;
	}
}
Animal* Enclosure : getAnimals() {
	return animals;
}
int Enclosure : getCurrentCount() {
	return currentCount;
}
int Enclosure : getCapacity() {
	return capacity;
}
int Enclosure : setCurrentCount(int currentCount) {
	this->currentCount = currentCount;
}
int Enclosure : setCapacity(int capacity) {
	this->capacity = capacity;
}
Visitor:Visitor(string v, int t) {
 visitorName = v;
 ticketsBought = t;
}
Visitor:Visitor() {
this->visitorName;
this->ticketsBought;
}
void Visitor : displayInfo() {
	cout << "Visitor info: "<<endl; 
	cout"<<Name: "<< visitorName <<endl;
	cout<< " Tickets : " << ticketsBought << endl;
}
Visitor:~Visitor() {

}
string Visitor : getVisitorName() {
	return visitorName;
}
int Visitor : getTicketsBought() {
	return ticketsBought;
}
void Visitor : setVisitorName(string visitorName) {
	this->visitorName = visitorName;
}
void Visitor : setTicketsBought(int ticketsBought) {
	this->ticketsBought = ticketsBought;
}
int main(){
	Animal* a = animals;
	Enclosure e = new Enclosure(50, 30,a[50];
	Mammal m = new Mammal("Lion", 5, true);
	Bird b = new Bird("Parrot",2,false);
	Reptile r = new Reptile("Snake",3,true,true);
	a->addAnimal(m);
	a->addAnimal(b);
	a->addAnimal(r);

	Visitor v = new Visitor("Sarah Ali", 3);
	cout << "Enclosure 1 Animals: " << endl;
	a->display();
	cout << "" << endl;
	v.displayInfo();
};

