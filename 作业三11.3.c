#include<stdio.h> 
int f(int *a);
int main(){
	int t;
	int n,k;
	for(n=0;n<=999999;n++){
		k=f(&n);
		if(k==n){
			printf("%d\n",n);
		}
	}
	return 0;
}
int f(int *a){
	int cnt=0;
	int x,m;
	for(x=0;x<=*a;x++){
		m=x;
	    while(x>0){
		if(x%10==1){
			cnt++;
		}
		x=x/10; 
	}
	x=m;
}
    return cnt;
}
