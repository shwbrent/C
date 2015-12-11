#include <iostream>
using namespace std;
int main () {
int a[3];
while(cin>>a[0]>>a[1]>>a[2]){
cout<<a[0]<<" 個餅乾，"<<a[1] +a[0]/10*(a[0]/10<a[2]/2 || a[0]/10==a[2]/2)
 +a[2]/2*( a[0]/10>a[2]/2 ) 
 <<" 盒巧克力，"<<a[2]<<" 個蛋糕。"<<endl;
}
return 0;
}
