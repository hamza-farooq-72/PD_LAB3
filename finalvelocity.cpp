#include<iostream>
using namespace std;
main(){

	cout<< "Enter Initial Velocity (m/s): " ;
	float v1 ;
	cin>> v1 ;
	cout<< "Enter Acceleration (m/s^2): " ;
	float a ;
	cin>> a ;
	cout<< "Enter Time (s): " ;
	float t ;
	cin>> t ;
	float v2 ;
	v2 = (a*t)+v1 ;
	cout<< "Final Velocity (m/s): " << v2 ;
	








}