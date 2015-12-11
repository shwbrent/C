#include <iostream>
using namespace std ;
int main () {
short int a;
while(cin>>a && a!=0){
for(int i=1 ; i<=a; i++){
             for(int j=0; j<a-i; j++)cout<<"_";
             for(int k=0; k<i; k++)cout<<"+";
             cout<<endl;
      }
}
return 0;
}
