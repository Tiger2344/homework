#include<stdio.h>

int main(){
	int a;
	int in[999];
	int get[999];
	int out[999];
	int len1;
	int i; 
	int len2;
	printf("Please Enter Length of convolution:\n");
	scanf("%d %d\n",&len1,&len2);
	for(i=0;i<len1;i++){
		scanf("%d",&in[i]);
	}
	for(i=0;i<len2;i++){
		scanf("%d",&get[i]);
	}
	int num;
	num=len1*len2/2;
	int j;
	for(i=0;i<num;i++){
		out[i]=0;
		for(j=0;j<len1;j++){
			if(i-j<=len2){
			out[i]+=in[j]*get[i-j];
		   }
		}
	}
	for(i=0;i<num;i++){
		printf("%d ",out[i]);
	}
	return 0;
}

