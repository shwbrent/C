#include <iostream>
using namespace std;
int num=0;
int swap(int& a,int& b){
    num=a;
    a=b;
    b=num;
}
int main()
{
int a,b;  
cin>>a>>b;
if(b<a)swap(a,b);
a=b/2-a/2+(a+1)%2;
                  for(a;a>0;a--){
                  num+=(b-b%2);
                  b-=2;
                  }    
cout<<num;
system("pause");
    return 0;
}
