#include <iostream>
using namespace std;
int main () {
int m,n,a;             //�qn��n,n+1,n+2.....���X,�ƨ�pc�ɤ�m�j 
short int pc;
while(cin>>n>>m ){
                  pc=1; 
                  a=n;
                  while(a<=m){
                              a=pc*n+pc*(pc-1)/2;
                              pc++;
                              }
                  if(n>m)pc++;   
                  cout<<pc-1<<endl;
}
return 0;
}
