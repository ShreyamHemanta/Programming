//WAP to copy content of one file to another.

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string s,s1;
    ofstream out("Text2.txt");
    ifstream in("Text.txt");
    in>>s;
    out<<s;
    in.close();
    out.close();
    ifstream out1("Text2.txt");
    out1>>s1;
    cout<<s1;
    return 0;
}