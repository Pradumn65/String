// program to count occurance of given character in given string

#include<iostream>
using namespace std;
  
int main()
{
    string str;
    cout<<"enter the string"<<endl;
    getline(cin,str);
    int count=0;
    char ch;
    cout<<"enter the character"<<endl;
    cin>>ch;
    int i=0;
     while (i<str.length())
     {
        if(str[i]==ch)
        {
            count++;
        }
        i++;
     }


     cout<<"No.of occurance of "<<ch<<" is:  "<<count;
     

    return 0;
}