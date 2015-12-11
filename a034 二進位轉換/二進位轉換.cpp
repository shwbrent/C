#include <iostream>
using namespace std;
int main () {
int a,b[12]={0},i;
while(cin>>a){
              i=0;
          while(a!=0){
                   b[i++]=a%2;
                   a/=2;
               }
          for(int j=1; j<=i; j++){
                     cout<<b[i-j]; 
                    }
          cout<<endl;
}

return 0;
}
