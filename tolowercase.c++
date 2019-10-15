#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
  clrscr();
  char str[20];
  int i;
  cout<<"Enter the String (Enter First Name) in uppercase : ";
  gets(str);
  for(i=0;i<=strlen(str);i++)
  {
	    if(str[i]>=65 && str[i]<=92)
	    {
		str[i]=str[i]+32;
	    }
  }
  cout<<"\nThe String in Lowercase = "<<str;
  getch();
}
