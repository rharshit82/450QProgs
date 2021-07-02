#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cout<<"Enter main String\n";
    cin>>s;
    string temp = s+s;
    cout<<"Enter Rotated String\n";
    cin>>t;
    cout<<"1 or 0\n";
    if(temp.find(t)!=string::npos && s.size()==t.size()) cout<<1;
    else cout<<0;
    return 0;
}
