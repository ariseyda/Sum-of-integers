#include<stdio.h>

// Receive an integer from user. If the entered value is negative, “%d is negative” is printed on console; 
//else sum of all the integers up to the entered value is calculated and printed on console. 

int main(){
	
	int n;
	int i;
	int sum=0;
	
	printf("Please enter an integer:");
	scanf("%d",&n);
	
	if(n<0)
	   printf("%d is negative.",n);
	else{
		for(i=0;i<n;i++){
	  	sum+=i;
	  }   
	  printf("Sum of all the integers up to the you entered:%d",sum);
		
	}
	  
	return 0;
}

