#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string st;
    fstream file;
    file.open("TextFile.txt");
    char ch;
    while(file)
    {
        file.get(ch);
        cout<<ch;
    }
    file.close();
    return 0;
}