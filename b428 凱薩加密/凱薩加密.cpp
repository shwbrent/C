#include <iostream>

using namespace std;

int main()
{
    string a,b;
    while(cin>>a>>b){
            if( b[0]-a[0]>=0 )cout<<b[0]-a[0];
            else cout<<26-a[0]+b[0];
            cout<<endl;
            }
    return 0;
}
