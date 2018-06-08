#include<iostream>
#include<math.h>
 
using namespace std;

int prime[5150]={2,0};
void findPrime(){              //找50000內的質數 
	char judge[50000]={0};
	int m = 1,pc=0;
	/*建sqrt(2^31)以內質數表，使用刪去法刪到215的倍數即可*/
	for (int a = 3; a<=215; a+=2){
				 if (judge[a]==0){
					 prime[m++]= a;
					 cout<<prime[m-1]<<",";
					 system("pause");
					 for (int b=a; b*a<=50000; b+=2)judge[b*a]=1;
			         }
	}
    for(int i=215; i<50000; i+=2){
                                  if(judge[i]==0){prime[m++]=i;cout<<prime[m-1]<<",";}
                                  }
}
bool is_prime(int num){         // 將找到的質數與輸入做比較 
	int num_sqrt =(int)sqrt(num);
	for(int i=0; prime[i]<=num_sqrt;i++){
		if (num%prime[i]==0 ){
		return false;
		}
	}return true;
}
 
int main(){
	findPrime();  
	int a;
	while (cin >> a ){
		if(is_prime(a)){
		cout << "質數" << endl;
		}else {
			cout << "非質數" << endl; 
		}
	}
	return 0;
}
