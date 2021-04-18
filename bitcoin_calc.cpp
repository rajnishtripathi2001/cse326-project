#include<iostream>
using namespace std;

int main(){
	float bitcoins,current_value,Price_in_INR;
	
	bitcoins=0.000020215;
	
	cout<<"Enter The Current value of Botcoin : ";
	cin>>current_value;
	
	Price_in_INR=bitcoins*current_value;
	
	cout<<"Your Current Income is : "<<Price_in_INR;
	
	return 0;
	
}
