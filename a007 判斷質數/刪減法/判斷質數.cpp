#include<iostream>
#include<math.h>
 
using namespace std;

int prime[5150]={2};
void findPrime(){              
	int judge[50000]={0};
	int m = 1,pc=0;
	for (int a = 3; a<=50000; a+=2){
		if (judge[a]==0){
			prime[m++]= a;
			for (int b=3; b*a<=50000; b+=2){
				judge[b*a]=1;
			}
    		}
	        }
}
bool is_prime(int num){
	int num_sqrt =(int)sqrt(num);
	for(int i=0; prime[i]<=num_sqrt;i++){
		if (num%prime[i]==0 && num/prime[i] !=1 ){
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
