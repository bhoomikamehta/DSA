#include <stdio.h>
struct complex
{
	float rp;
	float ip;
}comp[100];

void main()
{
	int choice,n,i;
	struct complex sum,sub,mul,temp;
	printf("Enter number of complex numbers\n");
	scanf("%d",&n);
	printf("enter the complex numbers in real part and imaginary part\n");
	for(i = 0;i < n;i++)
	{
		scanf("%f %f",&comp[i].rp,&comp[i].ip);
	}
	int flag = 0;
	while(flag == 0)
	{
		printf("Enter the choice 1.Sum 2.Subract 3.Multiplication 4.Division 5.Exit\n");
		scanf("%d",&choice);
		
		switch (choice)
		{
			case 1:
				sum.rp = 0;
				sum.ip = 0;
				for(i = 0;i < n;i++)
				{
					sum.rp += comp[i].rp;
					sum.ip += comp[i].ip;
				}
				printf("%f %+fi\n",sum.rp,sum.ip);

				break;
			
			case 2:
				sub.rp = comp[0].rp;
				sub.ip = comp[0].ip;
				for(i = 1;i < n;i++)
                        	{
                                	sub.rp -= comp[i].rp;
                                	sub.ip -= comp[i].ip;
                        	}
				printf("%f %+fi\n",sub.rp,sub.ip);
				break;
		
			case 3:
				mul.rp = comp[0].rp;
				mul.ip = comp[0].ip;
	
				for(i = 1;i < n; i++)
				{
					temp.rp = (mul.rp*comp[i].rp) - (mul.ip*comp[i].ip);
					temp.ip = (mul.rp*comp[i].ip) + (comp[i].rp*mul.ip);
					mul.rp = temp.rp;
					mul.ip = temp.ip;
				}	 
				printf("%f %+fi\n",mul.rp,mul.ip);
				break;	
		
			case 4:
				mul.rp = comp[0].rp;
                        	mul.ip = comp[0].ip;

                        	for(i = 1;i < n; i++)
                        	{
     					temp.rp = ((mul.rp*comp[i].rp) + (mul.ip*comp[i].ip))/(comp[i].rp*comp[i].rp+comp[i].ip*comp[i].ip) ;
                                	temp.ip = ((comp[i].rp*mul.ip)-(mul.rp*comp[i].ip))/(comp[i].rp*comp[i].rp+comp[i].ip*comp[i].ip) ;
                                	mul.rp = temp.rp;
                                	mul.ip = temp.ip;
                        	}
                        	printf("%f %+fi\n",mul.rp,mul.ip);
				break;
			
			case 5:
				flag = 1;
				break;	
		
			default:
				printf("Enter correct option\n");
				break;
	
		}
	}
}	

