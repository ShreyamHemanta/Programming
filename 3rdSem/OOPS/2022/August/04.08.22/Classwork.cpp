/* WAP which displays a given character, n number of times, using a function. When the n
value is not provided, it should print the given character 80 times. When both 
the character and n value is not provided, it should print ‘*’ character 80 times */

#include <iostream>

using namespace std;

int repeat(char a,int b)
{
    cout<<"Enter The chracter to print : ";
    cin>>a;
    cout<<"Enter the Number of times Character should be printed : ";
    cin>>b;
}
