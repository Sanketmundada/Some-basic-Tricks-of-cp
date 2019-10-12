#include <iostream>

using namespace std;

template<class T>
class List
{
    T data;
    List *next;
public:
    List()
    {
        next=NULL;
    }
    void enter()
    {
        List<T>*start=this;
        List<T>*node=new List<T>;
        T d;
        cout<<"\n enter the data: ";
        cin>>d;
        node->data=d;
        node->next=NULL;
        while(start->next!=NULL)
            start=start->next;
        start->next=node;
    }
    void display()
    {
        List<T>*start=this->next;
        while(start!=NULL)
        {
            cout<<"\t"<<start->data;
            start=start->next;
        }
    }
};

int main()
{
    cout << "Hello world!" << endl;
    List<int>l1;
    int s,i;
    cout<<"\n enter size of list";
    cin>>s;
    for(i=0;i<s;i++)
        l1.enter();
    l1.display();

    List<float>l2;
    cout<<"\n enter size of list";
    cin>>s;
    for(i=0;i<s;i++)
        l2.enter();
    l2.display();
    return 0;
}
