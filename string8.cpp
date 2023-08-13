// program to check whether the given string is palindrome or not in case insenstive

#include<iostream>
using namespace std;

char  tolowercase( char ch)
{    
      if(ch>='A' && ch<='Z'){ 
        
            ch=ch-'A'+'a';
       }
     return ch;
    
}

bool is_palindrome(string s){
   int start=0,end=s.length()-1;
   while(start<=end)
   {
     if(tolowercase(s[start])!=tolowercase(s[end]))
     {
        return 0;
     }
     start++,end--;
     
   }
   
   return 1;
}
  
int main()
{
    string str;
    getline(cin,str);
    
    cout<<" is the given string palindrome:  "<<is_palindrome(str);

    return 0;
}