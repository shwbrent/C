#include <iostream>

using namespace std; //7�ӭ^��r���Z���ন6��Ʀr 
int main () {
short int b,c;
char a[7];
while(cin>>a){
              for(int i=0; i<6; i++){
                                     b=a[i]-a[i+1] ; 
                                     c=(b>0)-(b<0);
                                     b*=c;
                                     cout<<b;
                                     }
              cout<<endl;       
              }                 
return 0;
}
