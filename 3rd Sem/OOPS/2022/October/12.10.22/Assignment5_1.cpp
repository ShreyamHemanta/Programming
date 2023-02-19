//

#include <iostream>
using namespace std;

class A{
    protected:
        int a;
    public:
        A(){
            cout << "Constructor for class A\n";
        }
        ~A(){
            cout << "Destructor for class A\n";
        }  
};

class B{
    protected:
        int b;
    public:
        B(){
            cout << "Constructor for class B\n";
        }
        ~B(){
            cout << "Destructor for class B\n";
        }  
};

//Single Inheritance
class C: public A{              
    protected:
        int c;
    public:
        C(): A(){
            cout << "Constructor for class C\n";
        }
        ~C(){
            cout << "Destructor for class C\n";
        }
};

//Multi-Level Inheritance
class D: public C{
    protected:
        int d;
    public:
        D(): C(){
            cout << "Constructor for class D\n";
        }
        ~D(){
            cout << "Destructor for class D\n";
        }
};

//Multiple Inheritance
class E: public A, B{
    protected:
        int e;
    public:
        E(): A(), B(){
            cout << "Constructor for class E\n";
        }
        ~E(){
            cout << "Destructor for class E\n";
        }
};

//Hybrid Inheritance
class F: virtual public B, C{
    protected:
        int f;
    public:
        F(): B(), C(){
            cout << "Constructor for class F\n";
        }
        ~F(){
            cout << "Destructor for class F\n";
        }      
};

//Heirarchial Inheritance
class G: public A{
    protected:
        int g;
    public:
        void input(){
            cout<<"\nHeirarchial Inheritance\n";
            cin>>a>>g;
        }
        void sum(){cout<<a+g<<'\n';}
};

class H: public A{
    protected:
        int h;
    public:
        void input(){
            cout<<"\nHeirarchial Inheritance\n";
            cin>>a>>h;
        }
        void diff(){cout<<a-h<<'\n';}
};
int main(){
    C c;
    D d;
    E e;
    F f;
    G g;
    H h;
    g.input();
    g.sum();
    h.input();
    h.diff();
    return 0;
}