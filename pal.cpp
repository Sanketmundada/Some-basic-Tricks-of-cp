#include<iostream>
#include<string>
using namespace std;
int main(){
    int q,i;
    cin>>q;
    while(q--)
        {
            string str;
            cin>>str;
            int k=str.size(),ind=-1;
            for( i=0;i<=(k/2);i++)
                {
                    if(str[i]!=str[k-1-i])
                        {
                             if((str[i+1]==str[k-1-i])&&(str[i+2]==str[k-1-i-1]))
                                ind=i;
                           else if((str[i]==str[k-1-i-1])&&(str[i+1]==str[k-1-i-2]))
                                ind=k-1-i;
                            break;
                        }
                }
                cout<<ind<<endl;
        }
    return 0;
}
