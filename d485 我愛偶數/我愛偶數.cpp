#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    a=b/2-a/2+(a+1)%2;    
    cout<<a<<endl;
    return 0;
}
//運用奇偶性&餘數 
