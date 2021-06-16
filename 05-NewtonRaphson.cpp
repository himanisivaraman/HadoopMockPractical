#include<stdio.h>
#include<math.h>
#define EPSILON 0.0001
float f(float x)
{
	return x*x*x + 3*x -5;
}
float differentiate(float x)
{
	return 3*x*x -3;
}
int main()
{
	int maxIteration,i;
	float x1,x2,x,x0;
	printf("Maximum Iterations\n");
	scanf("%d",&maxIteration);
	
	do
	{
		printf("Enter the value for x1  and x2\n");
		scanf("%f%f",&x1,&x2);
		if(f(x1)*f(x2)>0)
		{
			printf("Boundary values are not valid");
			continue;
		}
		else
		{
			break;
		}
	}while(1);
	
	if(fabs(f(x1)) < fabs (f(x2)))
	x0=x1;
	else
	x0=x2;
	
	for(i=1;i<=maxIteration;i++)
	{
		x=x0 - (f(x0)/differentiate(x0));
		if(fabs(x-x0)<EPSILON)
		{
			printf("Iterations=%d Final root=%f\n",i,x);
		}
		printf("Iterations=%d roots=%f\n",i,x);
		x0=x;
	}
	printf("Root=%f Total iterations=%d",x,--i);
	return 0;
}

