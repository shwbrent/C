#include <iostream>
using namespace std;
int main () {
int a[3];
while(cin>>a[0]>>a[1]>>a[2]){
cout<<a[0]<<" �ӻ氮�A"<<a[1] +a[0]/10*(a[0]/10<a[2]/2 || a[0]/10==a[2]/2)
 +a[2]/2*( a[0]/10>a[2]/2 ) 
 <<" �����J�O�A"<<a[2]<<" �ӳJ�|�C"<<endl;
}
return 0;
}
