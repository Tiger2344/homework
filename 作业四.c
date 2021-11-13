#include<stdio.h>
#include<math.h>
int isprime(int x);
int main(){
	int i,t;
	int p,q,m,n;
	long long sum;
	int a=1;
	int b=1;
	p=2;
		for(q=2;q<99;q++){
			if(p<=q){
			m=p;
			n=q;
			for(i=0;i<p;i++){
				a=q*a;
			}
			for(t=0;t<q;t++){
				b=b*p;
			}
			sum=a+b;
			if(isprime(p)==1&&isprime(q)==1&&isprime(sum)==1){
				printf("p=%d,q=%d\n",m,n);
			}
		}
	}
	
	return 0;
}
int isprime(int x){
	int check=1;
	int i;
	int temp;
	temp=x; 
	x=sqrt(x);
	for(i=2;i<=x;i++){
		if(temp%i==0){
			check=0;
			break;
		}
	}
	return check;
}
