// Name : Niloy Talukder Date: 07/31/2015
// Course: 16:332:503, PM for Financial Applications and Numerical Computing.
// HW July 17: HW_Package Inheritence Hierarchy Package_NiloyTalukder.h


#include<iostream>    
using std::cin;
using std::cout;
using std::endl;
using std::fixed;

#include<iomanip>
using std::setprecision;

//avoid multiple definition
#ifndef PACKAGE_NILOYTALUKDER_H
#define PACKAGE_NILOYTALUKDER_H

//class Package body
class Package{
private:
	char *s_name1, *s_address1, *s_city1, *s_state1, *r_name1, *r_address1, *r_city1, *r_state1, *s_zip_code1, *r_zip_code1; //variable for sender and receiver info
	double weight1, cost_per_oz1; //variable for weight and cost

	//function definition
public:
	//Package constructor
	Package(char * ='\0', char * ='\0', char * ='\0', char * ='\0', char * ='\0', char * ='\0', char * ='\0', char * ='\0', char * ='\0', char * ='\0', double = 0, double = 0);
	//Package destructor
	~Package();
	//set function to set all variables
	void set(char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, double, double);
	//get function to print package information
	virtual void get() const;
	//calculateCost estimates cost of package
	virtual double calculateCost() const;
	//print function to print sender, receiver info and package weight
	void print() const;


};

#endif