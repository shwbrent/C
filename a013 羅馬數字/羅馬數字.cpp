#include <iostream>
#include <cstring> 
using namespace std;
int swap(char ch);

int main()
{
    int num=0,dcount=0,digit=0,count=0;
    string a,b;
    while(cin>>a && a[0]!='#' && cin>>b){
    num=0;
    for(int i=0; i<a.size(); i++) num+=swap(a[i]);        
    for(int i=0; i<b.size(); i++) num-=swap(b[i]);
    num<0? num/=-1:0;
    digit=num%10;
    while( digit>5 && digit !=0 ){          //個位數大於5的處理 
                                 dcount++;
                                 if(dcount==1)cout<<"V";
                                 if(count!=0)cout<<"I";
                                 digit--;                                 
                                 }
    digit=(num/10)%10;
    dcount=0;
    while( digit>5 && digit != 0 ){
                                    dcount++;         
                                    if(dcount==1);
                                   }
                             
               
    
    }
    system("PAUSE");
    return 0;
}

int swap(char ch){
     switch(ch){
                         case 'I':
                             	  return 1;
                         case 'V':
                              	  return 5;
                         case 'X':
                                  return 10;
                         case 'L':
                              	  return 50;
                         case 'C':
                             	  return 100;
                         case 'D':
                             	  return 500;
                         case 'M':
                            	  return 1000;	
                         }
     
     }
