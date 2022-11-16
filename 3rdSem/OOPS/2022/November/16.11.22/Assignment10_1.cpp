//Display content of a file using character output finction

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char ch;
    fstream st;
    st.open("C:/Users/KIIT/Documents/Computer Programming/3rdSem/OOPS/2022/November/16.11.22/characterIn.txt",ios::out);
    if(!st)
    {
        cout<<"File creation error";
    }
    else
    {
        cout<<"File created";
    }
}