#include <iostream>

using namespace std;

int factorial(int n)
/*
    Takes int n and returns factorial of n (n * (n - 1) * (n - 2) * (n - 3) * ... 1
*/

{
    if(n == 0){
        return 1;
    }else{
        return n * factorial(n - 1);
    }
}

int main()
{
    cout << factorial(10);
    return 0;
}
