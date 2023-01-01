#include<iostream>
using namespace std;

int main(){
	int numbers[] = {11, 9, 12, 44, 36, 33, 79, 45};
	int evenCount = 0;
	int oddCount = 0;
	
	cout<<"*******************************************************************************\n";
	cout<<"This program will count number of even and odd numbers in a given integer array\n";
	cout<<"*******************************************************************************\n";

	cout<<"The given array is\n";

	for(int i=0; i<8; i++){
		cout<<numbers[i]<<endl;
	}

	for(int i=0; i< 8; i++){
		if(numbers[i]%2==0){
			cout<<"Even number at index "<<i<<endl;
			evenCount+=1;
		}
		else{
			cout<<"Odd number at index "<<i<<endl;
			oddCount+=1;
		}
	}
	cout<<"The number of even numbers is "<<evenCount<<endl;
	cout<<"The number of odd numbers is "<<oddCount<<endl;
	return 0;
}
