#include<iostream>
using namespace std;

int main(){
	/**
	 * Let's accept a number and
	 * check if it's even or odd
	 */
	int number;
	int repeat;
	cout<<"***************************************************************\n";
	cout<<"This program will check if the number you enterd is even or odd\n";
	cout<<"***************************************************************\n";

	do{
		cout<<"Enter the number here\n";
		cin>>number;
		if(number%2==0) cout<<"The number you entered is even number\n";
		else cout<<"The number you entered is odd number\n";
		cout<<"Enter 1 to continue and any other key to exit\n";
		cin>>repeat;
		cout<<"***************************************************************\n";
	}while(repeat==1);
	return 0;
}
