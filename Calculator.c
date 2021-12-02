#include <stdio.h>
#include <math.h>

float add (float a, float b)
{
	return a+b;
}
float sub (float a, float b)
{
	return a-b;
}
float multiplication (float a, float b)
{
	return a*b;
}
float division (float a, float b)
{
	return a/b;
}
float power (int a,int b)
{
	return pow(a,b);
}

float sqr (float a)
{
	return sqrt (a);
}



main()
{
	float num1, num2;
	int i=-1;
		while (i!=0)
	    {
		printf(" presss 0 to exit\n presss 1 to add\n presss 2 to sub\n presss 3 to multiplication\n presss 4 to division\n press 5 to power\n press 6 to sqrt\n");
	    scanf("%d", &i);

		printf("enter num1:\n");
		scanf("%f", &num1);
		switch(i)
		{
			case 1:
				printf("enter num2:\n");
		        scanf("%f", &num2);
				printf("the add is:%.2f\n", add(num1,num2));
				break;
			case 2:
				printf("enter num2:\n");
		        scanf("%f", &num2);
				printf("the sub is:%.2f\n", sub(num1,num2));
				break;
			case 3:
				printf("enter num2:\n");
		        scanf("%f", &num2);
				printf("the multiplication is:%.2f\n", multiplication(num1,num2));
				break;
			case 4:
	  			printf("enter num2:\n");
		        scanf("%f", &num2);
				if(num2==0)
				{
	                  printf("could not divide 0\n");
				}
				else
				{
				       printf("the division is:%.2f\n", division(num1,num2));
				}
				break;
			case 5:
		        printf("enter the power:");
		        scanf("%f", &num2);
		        printf("the power is:%.2f\n", power(num1,num2));
				break;
			case 6:
		        printf("the sqrt is:%.2f\n", sqr(num1));
				break;
			case 0:
				break;
			default:
				printf("ERROR");
	     }
		    system ("pause");
			system ("cls");
	     } 

		return 0;

}
