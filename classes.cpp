#include <iostream>

using namespace std;

class Feet
{
    int feet;
public:
    int get_feet()
    {
        cout<<"\n enter the feet";
        cin>>feet;
        return feet;
    }
    void display_feet()
    {
        cout<<"\n feet= "<<feet;
    }
};

class Inches
{
    int inches;
public:
    int get_inches()
    {
        cout<<"\n enter inches= ";
        cin>>inches;
        return inches;
    }
    void display_inches()
    {
        cout<<"\n inches= "<<inches;
    }

};

class Height
{
    Feet f;
    Inches i;
    float height;
public:
    float get_height()
    {
        height=f.get_feet()+float(i.get_inches)/12.0;
        return height;
    }
    void display_height()
    {
        cout<<"\n height= "<<height;
    }
};

class Width
{
    Feet f;
    Inches i;
    float width;
public:
    float get_width()
    {
        width=f.get_feet()+float(i.get_inches)/12.0;
        return width;
    }
    void display_width()
    {
        cout<<"\n width= "<<width;
    }
};

class building
{

    Width w;
    Height h;
    float area;
public:
    void get_area()
    {
        area=h.get_height()+w.get_width();
    }
    void display()
    {
        cout<<"\n Area = "<<area;
    }
};

int main()
{
    cout << "Hello world!" << endl;
    building b;
    b.get_area();
    b.display_area();
    return 0;
}
