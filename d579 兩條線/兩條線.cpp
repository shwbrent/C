#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float n;
    while(cin>>n)
        cout<<fixed<<setprecision(4)<<"|"<<n<<"|="<<((n>0)-(n<0))*n<<endl;
    return 0;
}
