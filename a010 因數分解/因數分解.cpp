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
            if( a%prime[i]==0 )count++;        /*�p�⦳�X��"��]��" */
            if(count==2){                      /*��]�Ʀ����,�b���L�ĤG�Ӥ��e�����L"*" 
			                                     ���L����Ncount�]��1*/
			             cout<<" * ";
                         count=1;
                         }
            while( a%prime[i]==0){   /*�p�⦳�X����*/
                   a/=prime[i];
				   pc++;
				   }
		    if(pc>1){                              /*�j��@����Φ����� EX:(2^5) */
			         cout<<prime[i]<<"^"<<pc;
					 }
			else if(pc==1){
							cout<<prime[i];       /*�u���@����,�������L*/
						  } 
            pc=0;                      /*������k�s,���U�@�`������ƥi�H��*/
            if(a==0)break;             /*��a(�Q�Ѽ�)��0��(���for�`���u�b�㰣�ɰ����k),�w����]�Ƹ���for*/
        	 }
	    count=0;
       	cout<<endl;
		}
	return 0;
}
