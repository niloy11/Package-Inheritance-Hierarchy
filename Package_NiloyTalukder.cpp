// Name : Niloy Talukder Date: 07/31/2015
// Course: 16:332:503, PM for Financial Applications and Numerical Computing.
// HW July 17: HW_Package Inheritence Hierarchy  Package_NiloyTalukder.cpp

#include<iostream>    
using std::cin;
using std::cout;
using std::endl;
using std::fixed;

#include <stdio.h>
#include<string.h>

#include<iomanip>
using std::setprecision;

#include "Package_NiloyTalukder.h" //include Package header file

// constructor function to initialize private data;
// calls member function set to set variables;
// default values are 0
Package::Package(char *s_name, char *s_address, char *s_city, char *s_state, char *s_zipcode, char *r_name, char *r_address, char *r_city, char *r_state, char *r_zipcode,double weight, double cost_per_oz)
{
	set(s_name, s_address, s_city, s_state, s_zipcode, r_name, r_address, r_city, r_state, r_zipcode, weight, cost_per_oz);
} //end of constructor function

//destructor function
Package::~Package()
{
	delete[] s_name1, s_address1, s_city1, s_state1, s_zip_code1, r_name1, r_address1, r_city1, r_state1, r_zip_code1;
} //end of destructor function

//set function to set all variables
void Package::set(char *s_name, char *s_address, char *s_city, char *s_state, char *s_zipcode, char *r_name, char *r_address, char *r_city, char *r_state, char *r_zipcode, double weight, double cost_per_oz )
{
	s_name1 = new char[strlen(s_name)+1];
	strcpy(s_name1,s_name);
	s_address1 = new char[strlen(s_address)+1];
	strcpy(s_address1,s_address);
	s_city1 = new char[strlen(s_city)+1];
	strcpy(s_city1,s_city);
	s_state1 = new char[strlen(s_state)+1];
	strcpy(s_state1,s_state);
	s_zip_code1 = new char[strlen(s_zipcode)+1];
	strcpy(s_zip_code1,s_zipcode);

	r_name1 = new char[strlen(r_name)+1];
	strcpy(r_name1,r_name);
	r_address1 = new char[strlen(r_address)+1];
	strcpy(r_address1,r_address);
	r_city1 = new char[strlen(r_city)+1];
	strcpy(r_city1,r_city);
	r_state1 = new char[strlen(r_state)+1];
	strcpy(r_state1,r_state);
	r_zip_code1 = new char[strlen(r_zipcode)+1];
	strcpy(r_zip_code1,r_zipcode);

	weight1= weight<0 ? 0 : weight;
	cost_per_oz1 = cost_per_oz<0 ? 0 : cost_per_oz;

} //end of set function

//get function to print package information
void Package::get() const
{
	print();
	
    cout<<"Type of Delivery: Regular Delivery"<<endl;
	cout<<"Cost of package: $"<<calculateCost()<<endl;
} //end of get function

//calculateCost estimates cost of package
double Package::calculateCost() const
{
	return weight1*cost_per_oz1;
} //end of calculateCost function

//print function to print sender, receiver info and package weight
void Package::print() const
{
	cout<<"Sender:\n"<<s_name1<<endl<<s_address1<<endl<<s_city1<<","<<s_state1<<","<<s_zip_code1<<endl;
	cout<<"\nReceipient:\n"<<r_name1<<endl<<r_address1<<endl<<r_city1<<","<<r_state1<<","<<r_zip_code1<<endl;
	cout<<"\nWeight of package: "<<weight1<<" ounces"<<endl;
} //end of print function

