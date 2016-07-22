// Name : Niloy Talukder Date: 07/31/2015
// Course: 16:332:503, PM for Financial Applications and Numerical Computing.
// HW July 17: HW_Package Inheritence Hierarchy  OvernightPackage_NiloyTalukder.h

#include<iostream>    
using std::cin;
using std::cout;
using std::endl;
using std::fixed;

#include<iomanip>
using std::setprecision;

//avoid multiple definition
#ifndef OVERNIGHTPACKAGE_NILOYTALUKDER_H
#define OVERNIGHTPACKAGE_NILOYTALUKDER_H

//include base class header file
#include "Package_NiloyTalukder.h"

class OvernightPackage: public Package{

private:
	double flat_fee_per_oz, weight1; //variable for weight and cost

	//function definition
public:
	//OvernightPackage constructor function
	OvernightPackage(char * , char *, char *, char *, char *, char *, char *, char *, char *, char *, double, double, double);
	//OvernightPackage destructor function
	~OvernightPackage();
	//get function to print package information
	virtual void get() const;
	//calculateCost estimates cost of package
	virtual double calculateCost() const;

};

#endif