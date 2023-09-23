#include<iostream>
using namespace std;
main(){

	cout<< "Enter  vegetable price per kilogram (in coins):" ;
	float vegcost ;
	cin>> vegcost ;
	cout<< "Enter fruit price per kilogram (in coins):" ;
	float frucost ;
	cin>> frucost ;
	cout<< "Enter total kilograms of vegetables:" ;
	float totalkilogramsofvegetables ;
	cin>> totalkilogramsofvegetables ;
	cout<< "Enter total kilograms of fruits:" ;
	float totalkilogramsoffruits ;
	cin>> totalkilogramsoffruits ;
	float totvegcost ;
	totvegcost = vegcost*totalkilogramsofvegetables ;
	float totfrucost ;
	totfrucost = frucost*totalkilogramsoffruits ; 
	float totearning ;
	totearning = totvegcost+totfrucost ;
	float totearninrupees ;
	totearninrupees = totearning/1.94 ;
	cout<< "Total earning in Rupees (Rps):" << totearninrupees ;



}