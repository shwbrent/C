#include <iostream>
using namespace std;
int main () {          //求次方數 
                long int b,c=1;
                short int a;
                cin>>a>>b;
                if(a==1 || b==0);
                else if(a==-1){
                               if(b%2==-1 || b%2==1)c*=-1;
                               }
                else{
                     b<0? b*=-1:0;
                     for(int i=0; i<b; i++)c*=a;
                     }  
                cout<<c;                      
return 0;
}
