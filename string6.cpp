// program to count the vowel in given string

#include<iostream>
using namespace std;

char  tolowercase( char ch)
{    
      if(ch>='A' && ch<='Z'){ 
        
            ch=ch-'A'+'a';
       }
     return ch;
    
}

int  countvowel(string s)
{   
    int count =0;
    for(int j=0;j<s.length();j++)
    {
        if(tolowercase(s[j])=='a' || tolowercase(s[j])=='e' ||  tolowercase(s[j])=='i'|| tolowercase(s[j])=='o'||tolowercase(s[j])=='u')
        {
            count++;
        }
    }

    return count;
}


  
int main()
{
    string str;
    cout<<"enter the string"<<endl;
    getline(cin,str);

    cout<<"No. of vowel present string are:    "<<countvowel(str);
    
    return 0;
}