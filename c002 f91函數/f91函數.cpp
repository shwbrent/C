#include <iostream>
using namespace std;

int f91(int& a){             
 return a-10;
}

int main (){
int a;
while(cin>>a && a!=0)cout<<"f91("<<a<<")"<<" = "<<(a<=100)*91+(a>100)*f91(a)<<endl;
return 0;
}
