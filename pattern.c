#include <stdio.h>
void drawpat(char draw[])
{
    int j,line = 0,k = 0;

    for(j = 0;j<=8;j++)
    {
      line ++;
      printf(" %c  ",draw[j]);
      if(line == 3)
      {
          printf("\n");
          printf("(%d) (%d) (%d) \n",j-1,j,j+1);
          line = 0;
      }
    }
    printf("Save:0\n");
}

void main()
{
  int pattern[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  int *p;
  p = &pattern[0][0];
  int m[9],n[9], address,num_of_points=0,sum=0,i=0,choice = 1;
  char draw[9]={"000000000"};
  while(choice!=0)
  {
    system("clear");
    drawpat(draw);
    scanf("%d",&choice);
    draw[choice-1] = '*';
    if(choice == 1)
    {
      m[i]=0;
      n[i]=0;
    }
    if(choice == 2)
    {
      m[i]=0;
      n[i]=1;
    }
    if(choice == 3)
    {
      m[i]=0;
      n[i]=2;
    }
    if(choice == 4)
    {
      m[i]=1;
      n[i]=0;
    }
    if(choice == 5)
    {
      m[i]=1;
      n[i]=1;
    }
    if(choice == 6)
    {
      m[i]=1;
      n[i]=2;
    }
    if(choice == 7)
    {
      m[i]=2;
      n[i]=0;
    }
    if(choice == 8)
    {
      m[i]=2;
      n[i]=1;
    }
    if(choice == 9)
    {
      m[i]=2;
      n[i]=2;
    }
    i++;
    num_of_points++;
  }
  for(i=0;i<num_of_points-1;i++)
  {
    address = m[i]*3 + n[i];
    sum += *(p+address);
  }
  printf("Sum of the pattern is %d\n",sum);
}
