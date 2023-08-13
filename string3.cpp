// program to covert upper case to lower case

#include<iostream>
using namespace std;
  
int main()
{
    string str;
    getline(cin,str);
   

    cout<<str<<endl;

    int i=0;
    
    while (i<str.length())
    { 
        if(str[i]>='A' && str[i]<='Z')
        {
          str[i]=str[i]-'A'+'a';
           
        }
        i++; 
    }

    cout<<str;

    
    return 0;
}