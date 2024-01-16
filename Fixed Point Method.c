//C program to implement fixed point  method

//C program to implement fixed-point method 

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define g(x) (a3*x*x*x+a2*x*x+a1*x+a0)/(-a1)
float a0,a1,a2,a3;

int main(){
	int i;
	float x0,x1,E,Er;
	printf("Enter coefficients a3,a2,a1 and a0\n");
	scanf("%f %f %f %f",&a3,&a2,&a1,&a0);
	
	printf("Enter initial two guesses and E\n");
	scanf("%f %f  ",&x0,&E);
	
	while(1){
		x1=g(x0);
		Er=(x1-x0)/x1;
		if(fabs(Er)<E){
			printf("Root=%f\n",x1);
			break;
		}
		x0=x1;
		
	}
	getch();

	}
