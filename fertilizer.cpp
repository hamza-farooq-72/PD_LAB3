#include<iostream>
using namespace std;
main(){
	cout<< "Enter the size of the fertilizer bag in pounds: " ;
	float weight ;
	cin>> weight ;
	cout<< "Enter the cost of the bag: $" ;
	float cost ;
	cin>> cost ;
	cout<<"Enter the area in square feet that can be covered by the bag: " ;
	float area ;
	cin>> area ;
	float costOftheFertilizerperPound ;
	costOftheFertilizerperPound = cost/weight ;
	float CostofFertilizingtheAreaperSquarefoot ;
	CostofFertilizingtheAreaperSquarefoot = cost/area ;
	cout<< "Cost of fertilizer per pound: $" << costOftheFertilizerperPound <<endl;
	cout<< "Cost of fertilizing per square foot: $" << CostofFertilizingtheAreaperSquarefoot ;

}	