#include <iostream>
using namespace std;

int main () {
int b,cnt;
short int a;
cin>>a;
for(int i=0; i<a; i++){
                                 cnt=1;
                                 cin>>b; 
                                 do{
                                                  cnt*=b%10;
                                                  b/=10;
                                                  }while(b>0);
                                 cout<<cnt<<endl;     
                                 }
return 0;
}
