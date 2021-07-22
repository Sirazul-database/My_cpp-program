
#include <iostream>
#include <conio.h>
using namespace std;
int isEven(int num);//Function prototype/ declaration
int main()
{
    int num;
//declare a variable num
    cout << "Enter a number to find odd or even" << endl;
    cin>>num;
//Take input from the user and stored in variable num
    if(isEven(num)){
     cout<< num<<" is a even number";
}
else{
     cout<< num<<" is a odd number";
}
cout<<endl;
getch();
    return 0;

}


int isEven(int num)/*recursive function in C++


 function definition or function body */
 {
if(num==0){
         return 1;
}
else if(num==1){
         return 0;
}
else if(num<0){
         return isEven(-num);
}
else
return isEven(num-2);
}
