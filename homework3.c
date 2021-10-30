#include<stdio.h> 
#include<math.h>
void isprime(int *p,int *q);

int main(){
	int p,q;
	do{
		scanf("%d %d",&p,&q);
		isprime(&p,&q);
	}while(p!=0);
	return 0;
}
void isprime(int *p,int *q){
	int i;
	int m=1;
	for(i=0;i<=*p;i++){
		m=*q*m;
	}
	int x;
	int n=1;
	for(x=0;x<=*q;x++){
		n=*p*n;
	}
	int sum;
	sum=m+n;
	int sumend;
	sumend=sum;
	sum=sqrt(sum);
	int k=1;
	i=2;
	for(i=2;i<sum;i++){
		if(sumend%i==0){
			k=0;
		}
	}
	if(k==1){
		printf("p=%d,q=%d",*p,*q);
	}
	
}

