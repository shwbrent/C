#include <iostream>
using namespace std;

int main()
{
int a,b,num=0;  //a<b
cin>>a>>b;
a=b/2-a/2+(a+1)%2;
                  for(a;a>0;a--){
                  num+=(b-b%2);
                  b-=2;
                  }    
cout<<num;
system("pause");
    return 0;
}

