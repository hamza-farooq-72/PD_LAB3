#include<iostream>
using namespace std;
main(){

	cout<<"Enter the Name of the Person: " ;
	string name ;
	cin>> name ;
	cout<<"Enter the target weight loss in kilograms: " ;
	float weight ;
	cin>> weight ;
	float totalDays ;
	totalDays = 15*weight ;
	cout<< name<< " will need "  << totalDays  << " days to lose " << weight<< " kg of weight by following the doctor's suggestions";
	

}	