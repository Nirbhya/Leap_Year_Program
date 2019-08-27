// Leap Year Program Using C Langauge ( Written By Nirbhya Kaushik )

#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);			        // Reading input from user

//---------------------------------------------------------

	if(n%4==0)			
	{
		if(n%100==0)
		{
			if(n%400==0)
			{
				printf("Leap year");
			}
			else
			{	
				printf("Not Leap year");		          //Logic
			}
	}	
	else
	{		
		printf("Leap year");
	}
}
	else
	{	
	printf("Not Leap year");
	}

}
