//WAP to count following in a given file: a.characters b. words c. lines d.uppercase, lowercase letters, digits and special symbols

#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    ofstream out("myfile.txt");
    cout<<"Enter strings.";
    getline(cin,s);
    out<<s<<endl;
    out.close();
    ifstream in("myfile.txt");
    getline(in,s);
    cout<<s;
    cout<<"The no of char is "<<s.length()<<endl;
    int c1=0,c2=0,c3=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
            c1++;
        if (isupper(s[i]))
            c2++;
        if (islower(s[i]))
            c3++;
    }
    cout<<"the no of words is "<<c1;
    in.close();
    return 0;
}