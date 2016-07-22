// Name : Niloy Talukder Date: 07/31/2015
// Course: 16:332:503, PM for Financial Applications and Numerical Computing.
// HW July 17: HW_Package Inheritence Hierarchy  main_NiloyTalukder.cpp

#include<iostream>    
using std::cin;
using std::cout;
using std::endl;
using std::fixed;

#include<iomanip>
using std::setprecision;

#include <vector>
using std::vector;


#include "Package_NiloyTalukder.h" //Package class definition
#include "TwoDayPackage_NiloyTalukder.h" //TwoDayPackage class definition
#include "OvernightPackage_NiloyTalukder.h" //OvernightPackage class definition

int main()
{
	// set floating-point number format
    cout << fixed << setprecision( 2 );

	char *s_name, *s_address, *s_city, *s_state, *r_name, *r_address, *r_city, *r_state, *s_Zipcode, *r_Zipcode; //char* variable for sender and receiver address
	double weight, cost_per_oz, flat_fee_over_night, flat_fee_2_day, total_cost=0; //variable for weight and different types of cost
    

	cout<<"Package Delivery Services Program\n";
	
	/*cout<<"Cost per ounce for a package: ";
	cin>>cost_per_oz;
	cout<<"/ounce";*/
	cost_per_oz=0.5;
	cout<<"\nCost per ounce for a package: $"<<cost_per_oz<<"/ounce"<<endl;

	/*cout<<"\n\nAdditional cost for two day delivery: ";
	cin>>flat_fee_2_day;
	cout<<"/ounce";*/
	flat_fee_2_day=2;
	cout<<"Additional cost for two day delivery: $"<<flat_fee_2_day<<"/ounce"<<endl;

	/*cout<<"\n\nAdditional cost for over night delivery: ";
	cin>>flat_fee_over_night;
	cout<<"/ounce";*/
	flat_fee_over_night=5;
	cout<<"Additional cost for over night delivery: $"<<flat_fee_over_night<<"/ounce"<<endl;

	//First package
	//Delivery Method: Regular Delivery
	//sender info:
	s_name="John Smith";
	s_address="1 Davidson Road";
	s_city="Piscataway";
	s_state="NJ";
	s_Zipcode= "08854";

	//receiver info:
	r_name="Tom Smith";
	r_address="2 Davidson Road";
	r_city="Piscataway";
	r_state="NJ";
	r_Zipcode= "08854";

	//cout<<"\nWeight of package: ";
	//cin>>weight;
	weight=10; //weight of first package

	//object of class Package created for first package
	Package package(s_name, s_address, s_city, s_state, s_Zipcode, r_name, r_address, r_city, r_state, r_Zipcode, weight, cost_per_oz); 

	/*cout<<"\n\nPackage 2:\n\n";
	//delivery method
	cout<<"Delivery Method: Two Day Delivery";*/

	//second package
	//Delivery Method: Two Day Delivery
	//sender info:
	s_name="Mary Smith";
	s_address="3 Davidson Road";
	s_city="Piscataway";
	s_state="NJ";
	s_Zipcode= "08854";

	//receiver info:
	r_name="Jennifer Smith";
	r_address="4 Davidson Road";
	r_city="Piscataway";
	r_state="NJ";
	r_Zipcode= "08854";

	//cout<<"\nWeight of package: ";
	//cin>>weight;
	weight=5; //weight of second package

	//object of class TwoDayPackage created for second package
	TwoDayPackage twodaypackage(s_name, s_address, s_city, s_state, s_Zipcode, r_name, r_address, r_city, r_state, r_Zipcode, weight, cost_per_oz, flat_fee_2_day);

	//third package
	//Delivery Method: Over Night Delivery
	//sender info:
	s_name="John Smith";
	s_address="1 Davidson Road";
	s_city="Piscataway";
	s_state="NJ";
	s_Zipcode= "08854";

	//receiver info:
	r_name="Mary Smith";
	r_address="3 Davidson Road";
	r_city="Piscataway";
	r_state="NJ";
	r_Zipcode= "08854";

	//cout<<"\nWeight of package: ";
	//cin>>weight;
	weight=2; //weight of third package

	//object of class OvernightPackage created for third package
	OvernightPackage overnightpackage(s_name, s_address, s_city, s_state, s_Zipcode, r_name, r_address, r_city, r_state, r_Zipcode, weight, cost_per_oz, flat_fee_over_night);
	
	// create vector of three base-class pointers
    vector < Package * > PackageVector( 3 );

	// aim PackageVector[0] at base-class Package object
	PackageVector[ 0 ] = &package;

	// aim PackageVector[1] at derived-class TwoDayPackage object
	PackageVector[ 1 ] = &twodaypackage;

	// aim PackageVector[2] at derived-class OvernightPackage object
	PackageVector[ 2 ] = &overnightpackage;

	//loop to polymorphically control three objects
	for ( int i = 0; i < PackageVector.size(); i++ ) 
	{
		cout<<"\n\nPackage "<<i+1<<":\n"<<endl;
        PackageVector[ i ]->get() ; //print individual package info.
		total_cost+= PackageVector[ i ]->calculateCost() ;//total_cost stores total cost of all packages
	}

	cout<< "\nTotal cost of all packages: "<<total_cost<<endl; //total cost of all packages 

  return 0; //successful program termination

}  