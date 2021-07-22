

#include<iostream>

using namespace std;

int dig_Sum(int n)
{
    int sum = 0;

    // Loop to do sum while
    // sum is not less than
    // or equal to 9
    while(n > 0 || sum > 9)
    {
        if(n == 0)
        {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Driver program to test the above function
int main()
{
    int n =  5674;
    cout << dig_Sum(n) <<endl;
    return 0;
}
