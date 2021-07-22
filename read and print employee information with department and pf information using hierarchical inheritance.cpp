
/*C++ program to read and print employee information with department and pf information using hierarchical inheritance.*/

#include <iostream>
#include <stdio.h>
using namespace std;

//Base Class - basicInfo
class basicInfo

{
    protected:
        char name[30];
        int    empId;
        char   gender;

    public:


        void getBasicInfo(void)

        {
            cout << "Enter Name: ";
            cin.ignore(1);
            cin.getline(name,30);
            cout << "Enter Emp. Id: ";
            cin  >> empId;
            cout << "Enter Gender: ";
            cin  >> gender;
        }
};

//Base Class - deptInfo
class deptInfo: private basicInfo

{
    protected:
        char    deptName[30];
        char    assignedWork[30];
        int     time2complete;

   prived:
        void getDeptInfo(void)
        {
            getBasicInfo(); //to get basic info of an employee
            cout << "Enter Department Name: ";
            cin.ignore(1);
            cin.getline(deptName,30);
            cout << "Enter assigned work: ";
            fflush(stdin);
            cin.getline(assignedWork,30);
            cout << "Enter time in hours to complete work: ";
            cin  >> time2complete;
        }
        void printDeptInfo(void)
        {
            cout << "Employee's Information is: "     << endl;
            cout << "Basic Information...:"       << endl;
            cout << "Name: "      << name   << endl;      //accessing protected data
            cout << "Employee ID: " << empId  << endl;        //accessing protected data
            cout << "Gender: "        << gender << endl << endl;//accessing protected data

            cout << "Department Information...:"    << endl;
            cout << "Department Name: "             << deptName     << endl; //accessing protected data
            cout << "Assigned Work: "               << assignedWork << endl; //accessing protected data
            cout << "Time to complete work: "       << time2complete<< endl; //accessing protected data

        }
};

//another Base Class : loadInfo
class loanInfo:private basicInfo
{
    protected:
        char    loanDetails[30];
        int     loanAmount;
    public:
        void getLoanInfo(void)
        {
            getBasicInfo(); //to get basic info of an employee
            cout << "Enter Loan Details: ";
            cin.ignore(1);
            cin.getline(loanDetails,30);
            cout << "Enter loan amount: ";
            cin  >> loanAmount;
        }

        void printLoanInfo(void)

        {
            cout << "Employee's Information is: "     << endl;
            cout << "Basic Information...:"       << endl;
            cout << "Name: "      << name   << endl;      //accessing protected data
            cout << "Employee ID: " << empId  << endl;        //accessing protected data
            cout << "Gender: "        << gender << endl << endl;//accessing protected data

            cout << "Loan Information...:"        << endl;
            cout << "Loan Details: "          << loanDetails    << endl; //accessing protected data
            cout << "Loan Amount : "          << loanAmount   << endl; //accessing protected data
        }
};

int main()
{
    //read and print department information
    deptInfo objD;

    objD.getDeptInfo();
    objD.printDeptInfo();

    cout << endl << endl ;
    //read and print loan information
    loanInfo objL;

    objL.getLoanInfo();
    objL.printLoanInfo();


    return 0;
}
