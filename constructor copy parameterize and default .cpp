#include <iostream>
#include <string.h>
using namespace std;

class person{
	private:
		char name[30];
		int Roll;

	public:
		//default constructor
		person(){
			strcpy(name,"None");
			Roll = 0;
		}
		//parameterized constructor
		person(char n[], int a){
			strcpy(name, n);
			Roll = a;
		}
		//copy constructor
		person(person &p){
			strcpy(name, p.name);
			Roll =p.Roll;
		}
		//function to display person details
		void print(void){
			cout<<name<<" Roll no."<<Roll <<endl;
		}
};

//Main function
int main(){
	//creating objects
	person p1; //default constructor will be called
	person p2("Sirazul Islam",1818020); //parameterized constructor will be called
	person p3(p2); //copy constructor will be called

//printing
	cout<<"object p1..."<<endl;
	p1.print();
	cout<<"object p2..."<<endl;
	p2.print();
	cout<<"object p3..."<<endl;
	p3.print();

	return 0;
}

