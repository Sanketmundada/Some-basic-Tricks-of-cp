#include <iostream>
#include<string.h>
using namespace std;

class Distance
{
    int km,m;
public:
     friend istream& operator>>(istream& in,Distance &d)
    {
        in>>d.km;
        in>>d.m;
        return in;
    }
    friend ostream& operator<<(ostream&out,Distance &d)
    {
        out<<d.km;
        out<<d.m;
        return out;
    }

    int operator>(Distance &d)
    {
        if(km>d.km)
            return 1;
        else if(km==d.km && m>d.m)
            return 1;
        else if(km<d.km)
            return 0;
        else if(km==d.km && m<d.m)
            return 0;
    }

};

class String
{
    char str[100];
public:
    friend istream& operator>>(istream& in,String& s)
    {
        in>>s.str;
        return in;
    }
    friend ostream& operator<<(ostream&out,String& s)
    {
        out<<s.str;
        return out;
    }

    int operator>(String s)
    {
        if(strcmp(str,s.str)>0)
            return 1;
        else
            return 0;
    }
};

template<class t>
void enter(t a[],int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<"\n enter the element";
        cin>>a[i];
    }
}

template<class y>
void display(y a[],int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<a[i]<<endl;
    }
}



template<class x>
x Sort(x a[],int s)
{
    x temp;
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

}

int main()
{
    cout << "Hello world!" << endl;
    int *a,s1;
    cout<<"\n enter the array s";
    cin>>s1;
    a=new int[s1];
    enter(a,s1);
    Sort(a,s1);
    display(a,s1);

    float *b=new float[s1];
    enter(b,s1);
    Sort(b,s1);
    display(b,s1);

    String *s;
    cout<<"\n enter size";
    cin>>s1;
    s=new String[s1];
    enter(s,s1);
    Sort(s,s1);
    display(s,s1);


    Distance *d;
    d=new Distance[s1];
    enter(d,s1);
    Sort(d,s1);
    display(d,s1);

    return 0;
}
