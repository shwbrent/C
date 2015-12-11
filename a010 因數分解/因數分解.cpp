#include<iostream>
 
using namespace std;

int prime[45000]={0};
void findPrime(){
	int judge[350000]={0},m=0;
	
	for (int a = 2; a<=350000; a++){
		if (judge[a]==0){
			prime[m++]= a;
			for (int b=2; b*a<=350000; b++){
				judge[b*a]=1;
			}
    		}
	}
}
 
int main(){
	findPrime();
	int a=0,length=168,pc=0,count=0;
	
while(	cin>>a ){
    for(int i=0; i<45000; i++){
	        if(prime[i]==0)break; 
            if( a%prime[i]==0 )count++;        /*計算有幾個"質因數" */
            if(count==2){                      /*質因數有兩個,在打印第二個之前先打印"*" 
			                                     打印完後將count設為1*/
			             cout<<" * ";
                         count=1;
                         }
            while( a%prime[i]==0){   /*計算有幾次方*/
                   a/=prime[i];
				   pc++;
				   }
		    if(pc>1){                              /*大於一次方用次方表示 EX:(2^5) */
			         cout<<prime[i]<<"^"<<pc;
					 }
			else if(pc==1){
							cout<<prime[i];       /*只有一次方,直接打印*/
						  } 
            pc=0;                      /*次方數歸零,讓下一循環的質數可以用*/
            if(a==0)break;             /*當a(被解數)為0時(整個for循環只在整除時做除法),已找到質因數跳離for*/
        	 }
	    count=0;
       	cout<<endl;
		}
	return 0;
}
