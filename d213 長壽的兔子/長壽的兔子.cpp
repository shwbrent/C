#include <iostream>
#include <cmath>
using namespace std;
int main () {
unsigned long long n,num;
while(cin>>n){
             num=0;
            if(n<10)num+= pow(2,n+2)-2;
            else num+=pow(2, n+2)-pow(2, n-8);
            cout<<num<<endl; 
}
return 0;
}
