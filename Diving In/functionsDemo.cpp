#include<bits/stdc++.h>
using namespace std;
int addNumbers(int first, int second) {
    int sum = first + second;
    return sum;
}
int main()
{
    /*
    Functions :
    -----------
        Functions are used to reduce the length of the code which helps in achieveing DRY principle.
        DRY stands for Do Not Repeat Yourself.
        Functions must be defined before use.

        Syntax:
        -------
            returnType functionName(parameters) {
                statements
                return statement(no need of writing if returnType is void)
            }
    */
   int first_number {12};
   int second_number {45};
   int sum = addNumbers(first_number, second_number);
   cout << 'Sum is ' << sum << endl;
 return 0;
}
