#include <iostream>

using namespace std;

int main()
{ 

double a,b,x,y,z;

cin>>a>>b>>x>>y>>z;

if(a>x && (b>y||b>z))
    cout<<"1"<<endl;
else
if(a>y && (b>x||b>z))
    cout<<"1"<<endl;
else
if(a>z && (b>x||b>y))
    cout<<"1"<<endl;
else
cout<<"0"<<endl;

return 0;
}
