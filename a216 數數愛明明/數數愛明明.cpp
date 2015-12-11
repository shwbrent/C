#include <iostream>
using namespace std;
unsigned long long int f(unsigned long long int n){
return (1+n)*n/2;
}

unsigned long long int g(unsigned long long int n){
unsigned long long int num=0;
for(int i=1; i<=n; i++)num+=f(i);
return num;
}

int main () {
unsigned long long int n;
while(cin>>n){
     cout<<f(n)<<" "<<g(n)<<endl;
}
return 0;
}
