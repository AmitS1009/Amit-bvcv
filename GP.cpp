#include<stdio.h>
int main(){
	
	 int n,a=63
	 
	 
	 ,s=1;
	 
	 printf("Enter a number : ");
	 scanf("%d", &n);
	 
	 for(int r=1;r<=n; r++){
	 	s=s*a;
	 	printf("%d ",s);
	 }
	return 0;
}
