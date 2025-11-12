#ifndef VISITOR_H
#define VISITOR_H
#include <string>
#include<iostream>
using namespace std;

class Visitor {
private:
	string visitorName;
	int ticketsBought;
public:
	Visitor(string visitorName, int ticketsBought);
	Visitor();
	void displayInfo();
	~Visitor();
	string getVisitorName();
	int getTicketsBought();
	void setVisitorName(string visitorName);
	void setTicketsBought(int ticketsBought);
};
#endif
