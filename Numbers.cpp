#include<iostream>
using namespace std;
int main()
{
int range;
int result;
cout<<"Enter a number range to sum: ";
cin>>range;
for ( int z=1;z<=range;z++)
{
result+=z;
}
cout<<"Sum from 1 to "<<z<<" is "<<z;
return 0;
}
