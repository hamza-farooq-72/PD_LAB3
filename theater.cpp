#include<iostream>
using namespace std;
main(){
	cout<< "Enter the movie name: " ;
	string name;
	cin>> name;
	cout<< "Enter the adult ticket price: $" ;
	float adultTicketPrice ;
	cin>> adultTicketPrice ;
	cout<<"Enter the child ticket price: $" ;
	float childTicketPrice ;
	cin>> childTicketPrice ;
	cout<< "Enter the number of adult tickets sold: " ;
	float numberofadultticketssold ;
	cin>> numberofadultticketssold ;
	cout<< "Enter the number of child tickets sold: " ;
	float numberofchildticketssold ;
	cin>> numberofchildticketssold ;	
	cout<< "Enter the percentage of the amount to be donated to charity: " ;
	float donation ;
	cin>> donation ;
	cout<< endl;
	cout<< "movie: " << name <<endl ;
	float total ;
	total = (adultTicketPrice*numberofadultticketssold)+(childTicketPrice*numberofchildticketssold) ;
	cout<< "Total amount generated from ticket sales: " << total <<endl;
	int donation1 = total*donation/100 ;	
	cout<< "Donation to charity ("<<donation <<"%): $" << donation1  <<endl;
	float rem ;
	rem = total-donation ;
	cout<< "Remaining amount after donation: " << rem <<endl;
	
	

}