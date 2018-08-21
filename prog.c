/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

struct customer
{
    char name[50];
    struct dob
    {
        int dd,mm,yy;
    }dob;
    char aadhar[13];
    char ms[10];
    int age;
    char add[100];
    char ph[11];
};
FILE * fp;
void main()
{
    struct customer c1;
    int ch;
    printf("1.WRITE\n2.READ\n");
    scanf("%d",&ch);
    if (ch==1)

{

    int choice;
    printf("NAME:\n");
    getchar();
    scanf("%[^\n]s",c1.name);
    printf("AADHAR NUMBER:\n");
    scanf("%s",c1.aadhar);
    printf("DOB (DD MM YY)\n");
    scanf("%d %d %d",&c1.dob.dd,&c1.dob.mm,&c1.dob.yy);
    printf("AGE:\n");
    scanf("%d",&c1.age);
    printf("ADDRESS:\n");
    getchar();
    scanf("%[^\n]",c1.add);
    printf("MARITAL STATUS:\n 1.SINGLE\n2.MARRIED\n3.DIVORCED\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            strcpy(c1.ms,"SINGLE");
            break;
        }
        case 2:
        {
            strcpy(c1.ms,"MARRIED");
            break;
        }
        case 3:
        {
            strcpy(c1.ms,"DIVORCED");
            break;
        }
        default: printf("NA");
    }
    printf("CONTACT NUMBER:");
    scanf("%s",c1.ph);
    fp=fopen("file1.doc","a");
    fwrite(&c1,sizeof(struct customer),1,fp);
    fclose(fp);
}
else
if(ch==2)
{
    fp=fopen("file1.doc","r");
    fread(&c1,sizeof(struct customer),1,fp);
    printf("%s\n",c1.name);
    printf("%s\n",c1.aadhar);
    printf("%d/%d/%d\n",c1.dob.dd,c1.dob.mm,c1.dob.yy);
    printf("%d\n",c1.age);
    printf("%s\n",c1.add);
    printf("%s\n",c1.ms);
    fclose(fp);


}
}
