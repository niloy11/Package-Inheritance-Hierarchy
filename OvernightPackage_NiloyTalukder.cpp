// Name : Niloy Talukder Date: 07/31/2015
// Course: 16:332:503, PM for Financial Applications and Numerical Computing.
// HW July 17: HW_Package Inheritence Hierarchy  OvernightPackage_NiloyTalukder.cpp

#include<iostream>    
using std::cin;
using std::cout;
using std::endl;
using std::fixed;

#include<iomanip>
using std::setprecision;

#include "Package_NiloyTalukder.h" //include Package header file
#include "OvernightPackage_NiloyTalukder.h" //include OvernightPackage header file

// constructor function to initialize private data;
// calls member function set to set variables;
// default values are 0
OvernightPackage::OvernightPackage(char *s_name, char *s_address, char *s_city, char *s_state, char *s_zipcode, char *r_name, char *r_address, char *r_city, char *r_state, char *r_zipcode, double weight, double cost_per_oz, double flat_fee)
	: Package(s_name, s_address, s_city, s_state, s_zipcode, r_name, r_address, r_city, r_state, r_zipcode, weight, cost_per_oz)
{
	flat_fee_per_oz=flat_fee<0 ? 0 : flat_fee;
	weight1=weight<0 ? 0 : weight;
} //end of constructor function

//destructor function
OvernightPackage::~OvernightPackage()
{

}
//end of destructor function

//calculateCost estimates cost of package
//virtual function overridden
double OvernightPackage::calculateCost() const
{
	return weight1*flat_fee_per_oz + Package::calculateCost(); //considering effect of flat fee
}//end of calculateCost function

//get function to print package information
//virtual function overridden
void OvernightPackage::get() const
{
	Package::print(); //called print function to print sender, receiver info and package weight
    cout<<"Type of Delivery: Over Night Delivery"<<endl; //type of delivery
	cout<<"Cost of package: $"<<calculateCost()<<endl; //cost of delivery
} //end of get function