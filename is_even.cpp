/*
 * Debere Berhan University 
 * College of Engineering 
 * Department of Eelectrical and Computer Engineering
 *
 *
 * Introduction to computing 
 * Lab0103
 * Description: write a program which can check if a given integer is even or odd
 *
 */
#include<iostream>
using namespace std;

int main(){
	int x=0;
	cout<<"Enter any integer"<<endl;
	cin>>x;
	if(x%2==0) {
		cout<<x<<" is even"<<endl;
	}
	else{
		cout<<x<<" is odd"<<endl;
	}
	return 0;
}
