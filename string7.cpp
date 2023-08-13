// program to compare to two string

#include<iostream>
using namespace std;

  
int main()
{
    string str1;
    string str2;
    getline(cin,str1);
    cout<<endl;
    getline(cin,str2);

    if(str1==str2)
    {
        cout<<" both string are equal";
    }
    else{
        cout<<"string are not equal";
    }

    return 0;
}