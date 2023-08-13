// reverse the string 

#include<iostream>
using namespace std;

void reverstring(string &str)
{
    int s=0,e=str.length()-1;
    while(s<=e)
    {
        swap(str[s++],str[e--]);
    }
}
  
int main()
{
    string  s;
    getline(cin,s);

    
    reverstring(s);
    cout<<s;
    return 0;
}