#include<stdio.h>
int perfect(int n){
	int i,s=0;
	for(i=1;i<n;i++){
		if(n%i==0){
			s=s+i;
		}
	}
	if(s==n){
		return 1;
	}else{
		return 0;
	}
	
}
int main(){
	int n;
	printf("input n:");
	scanf("%d",&n);
	//int kq=perfect(n);
	if (perfect(n)==1){
		printf("%d is perfect number",n);
	}else{
		printf("%d is not perfect number",n);
	}
}
/*
#include<stdio.h>
#include<math.h>
int perfect(int n){
	int i;
	int sum=0;
	for (i=1;i<n;i++){ 
	   if(n%i==0){   //i la uoc so cua n
	   	sum+=i;	
	   }	
	}
	if(sum==n) return 1;
	else return 0;
}

int main(){
	int n;
	scanf("%d",&n);
	if(perfect(n)) printf("%d is perfect number",n);
	else printf("%d is not perfect number",n);
}
*/