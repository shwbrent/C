#include <iostream>
#include <cstring>
using namespace std;

int main () {
int count;
string a,b;
while(cin>>a){
        count=0;
        for(int i=0; i<a.size(); i++){
                                b[a.size()-1-i]=a[i];
                          }
        for(int i=0; i<a.size(); i++){
                                a[i]==b[i]? count++:0;       
                          }
        if( count==a.size() )cout<<"yes"<<endl;
        else cout<<"no"<<endl;
}
return 0;
}
