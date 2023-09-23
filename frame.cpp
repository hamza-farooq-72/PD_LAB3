#include<iostream>
using namespace std;
main(){
	cout<< "Number of Minutes: " ;
	int minutes ;
	cin>> minutes ;
	int sec ;
	sec = minutes*60 ;
	cout<< "Frames per Second: " ;
	int frames ;
	cin>> frames ;
	int tframes ;
	tframes = sec*frames ;
	cout<< "Total Number of Frames: "<<tframes  ;
	
}	