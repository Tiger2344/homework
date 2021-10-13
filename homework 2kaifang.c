#include<stdio.h> 
#include<math.h>

float mysqrt(float n){
	float x;
	
	x=n/2;
	
	while(n/x!=x){
		if(n/x>x){
	x=(n/x+x)/2;		
		}
		if(n/x<x){
			x=(n/x+x)/2;
			}
			if(n/x-x<0.00000001||n/x-x>-0.00000001){
				break;
			}
		}	
	printf("%f",x);
	return 0.0f;
}

int main(){
	float t;
	scanf("%f",&t);
	mysqrt(t);
	return 0;
}
