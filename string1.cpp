// program to calculate the lenght of string 

#include<iostream>
using namespace std;

 int lengthOFstring(string s)
 {
    int count=0;
    int i=0;
    while(s[i]!='\0')
    {
        count++;
        i++;

    }
    return count;
 }
  
int main()
{
    string str;
    cout<<"enter the string "<<endl;
    getline(cin,str);
    int lenght=lengthOFstring(str);
    cout<<"length of string is:  "<<lenght;

    return 0;
}