#include<iostream>
using namespace std;

int main()

{

   int x1, y1, x2, y2, x3, y3;
   cout<<"Enter the first complex number : "<<endl;
   cin>> x1 >> y1;

   cout<<"\nEnter second complex number : "<<endl;
   cin>> x2 >> y2;


   x3 = x1 * x2 - y1 * y2;
   y3 = x1 * y2 + y1 * x2;

   cout<<"The value after multiplication is: "<<x3<<" + " <<" i "<<y3;

   return 0;
}
