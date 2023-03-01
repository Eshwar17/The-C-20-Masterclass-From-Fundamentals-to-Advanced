#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    For input we have,
        cin
        getline(cin, stringName) -> If you use cin for string it will take the text only before the whitespace(when it reaches whitespace it stops inputting)
    For output we have,
        cout
        cerr -> for displaying error messages
        clog -> for logging messages
    */
   int num;
   cin >> num;
   cout << "Number is " << num << endl;
   string full_name;
   getline(cin, full_name);
   cout << "String is " << full_name << endl;
   cerr << "Error message " << endl;
   clog << "Logging message " << endl;
 return 0;
}
