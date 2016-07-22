// Name : Niloy Talukder Date: 07/31/2015
// Course: 16:332:503, PM for Financial Applications and Numerical Computing.
// HW July 17: HW_Package Inheritence Hierarchy  TwoDayPackage_NiloyTalukder.h

#include<iostream>    
using std::cin;
using std::cout;
using std::endl;
using std::fixed;

#include<iomanip>
using std::setprecision;

//avoid multiple definition
#ifndef TWODAYPACKAGE_NILOYTALUKDER_H
#define TWODAYPACKAGE_NILOYTALUKDER_H

#include "Package_NiloyTalukder.h" //include base class header file

class TwoDayPackage: public Package{

private:
	double flat_fee_per_oz, weight1; //variable for weight and cost

	//function definition
public:
	//TwoDayPackage constructor function
	TwoDayPackage(char * , char *, char *, char *, char *, char *, char *, char *, char *, char *, double, double, double);
	//TwoDayPackage destructor function
	~TwoDayPackage();
	//get function to print package information
	virtual void get() const; //virtual function 
	//calculateCost estimates cost of package
	virtual double calculateCost() const;
};

#endif