//WAP to display content of a file in reverse order

#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string s,s1;
    ofstream out("myfile.txt");
    cout<<"Enter strings.";
    cin>>s;
    out<<s;
    out.close();
    ifstream in("myfile.txt");
    in>>s;
    for(int i=s.length();i>=0;i--)
    {
        s1=s1+s[i];
    }
    cout<<s1;
    in.close();
    return 0;
}