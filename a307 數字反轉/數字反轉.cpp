#include <iostream>
using namespace std;
int main () {
int mask,a,b,ret,flag;
while(cin>>a){
              ret=0;
              mask=1;
              flag=((a>0)-(a<0));
              a=a* ((a>0)-(a<0));
              b=a;
              while(b>10){
                              mask*=10;
                              b/=10;
                              }
                do{
                      b=a%10;
                      ret+=b*mask;
                      a/=10;
                      mask/=10;
                }while(mask!=0);  
cout<<ret*flag<<endl;
}
return 0;
}
