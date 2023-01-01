#include<iostream>
using namespace std;

int main(){
	/*
	 * Let's the score and
	 * print its corresponding letter grade
	 */
	int score;
	int repeat;
	do{
		cout<<"Enter your score"<<endl;
		cin>>score;
		/**
	 	* =>90===>A+
		* >=85 and <90====>A
	 	* >=80 and <85====>A-
	 	* >=75 and <80====B+
	 	* >=70 and <75====B
	 	* else ==== C
	 	*/
		if(score>=90) cout<<"A+\n";
		else if(score>=85 && score<90) cout<<"A\n";
		else if(score>=80 && score<85) cout<<"A-\n";
		else if(score>=75 && score<80) cout<<"B+\n";
		else if(score>=70 && score<75) cout<<"B\n";
		else cout<<"C\n";
		cout<<"Enter 1 to continue and any other key to exit"<<endl;
		cin>>repeat;
	} while(repeat==1);
}
