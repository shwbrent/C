#include <iostream>
using namespace std;
int c;
int swap(int& a,int& b){
    c=a;
    a=b;
    b=c;
}

int s_trout(int a,int b){
     if(b<a)swap(a,b);
     a=b/2-a/2+(a+1)%2;
     b-=(b%2);               
     b=a*(b-a+1);                   
     cout<<b;
}

int main()
{
int a,b;
cin>>a>>b;
if(a==b && b%2!=0)cout<<"0";
else s_trout(a,b);
    return 0;
}
