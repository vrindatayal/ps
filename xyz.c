#include<stdio.h> 
#include<math.h> 
double fac(int num) 
	{ 
	double factorial=1; 
	int i; 
	for(i=num;i>0;i--) 
		{ 
		factorial*=i; 
		} 
	return factorial; 
	} 
void main() 
{ 
int n=4; 
double sum=1.0; 
int i,j=1; 
for(i=0;i<n;i++) 
	{ 
	sum+=pow(-2,i)/(fac(j)); 
	j+=2; 
	} 
printf("%lf",sum); 
} 