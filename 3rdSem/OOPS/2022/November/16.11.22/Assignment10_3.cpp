//WAP to write 10 strings into a file and display them from file

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string s;
    ofstream out("myfile.txt");
    cout<<"Enter 10 strings.";
    for(int i=0;i<1;i++)
    {
        cin>>s;
        out<<s;
    }
    out.close();
    ifstream in("myfile.txt");
    in>>s;
    cout<<s;
    in.close();
    return 0;
}