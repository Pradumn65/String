// program to find index of first occurance of a given character in given string 

#include<iostream>
using namespace std;

int find_index(string s,char ch)
{ 
    int i=0;
    while(i<s.length())
    {
        if(s[i]==ch)
        {
            return i;
        }
        i++;
    }

    return -1;

}
  
int main()
{
    string str;
    char ch;
    getline(cin,str);
    cout<<"enter the character "<<endl;
    cin>>ch;
    int index=find_index(str,ch);
    cout<<"the index is:  "<<index;
    return 0;
}