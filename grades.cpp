/*
 * Debre Berhan University 
 * College of Engineering
 * Department of Electrical and Computer Engineering
 *
 *
 * Lab0102
 * Description: write a program which can convert a mark to a corresponding letter grade.
 */
#include<iostream>
using namespace std;

int main(){
	int mark = 0;
	// Ask user to enter mark grade
	cout<<"Enter letter grade?"<<endl;
	cin>>mark;
	
	if(mark>90){
		cout<<"A+"<<endl;
	}
	else if(mark<=89&&mark>=85){
		cout<< "A"<<endl;
	}
	else if(mark<=84&&mark>=80){
		cout<< "A-"<<endl;
	}
	return 0;	
}
