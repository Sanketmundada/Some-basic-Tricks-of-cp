#include <iostream>

using namespace std;

class Complex
{
private:
    int r,i;
    static int c;
    Complex()
    {
        c++;
        cout<<"\n count="<<c;
        cout<<"\n constructor is invoked";
    }
public:

    void enter()
    {
        cout<<"\n enter real part";
        cin>>r;
        cout<<"\n enter imaginary part";
        cin>>i;
    }
    void display()
    {
        cout<<r<<"+"<<i<<"i";
    }

    static void initialize()
    {
        if(c<=3)
        {
            Complex c1;
            c1.enter();
            c1.display();


        }

        else
            cout<<"\n can't create more than one object";
    }

};
int Complex::c=0;

int main()
{
    cout << "Hello world!" << endl;
    cout<<"\n no object is created";
    Complex::initialize();
    Complex::initialize();
      Complex::initialize();
    return 0;
}
