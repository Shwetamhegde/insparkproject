#include<stdio.h>
struct student
{
char name[20];
char usn[20];
char sub[20];
int mse1[10];
int mse2[10];
int mse3[10];
int la1[10];
int la2[10];
int final[10];
int cie[10];
int see[10];
char grade[10];
}s[100];

char grade(int f,int c,int m)
{
if(c<20)
return 'I';
else if(m<35)
return 'F';
else if(f>=90&&f<=100)
return 'S';
else if(f>=80&&f<90)
return 'A';
else if(f>=65&&f<80)
return 'B';
else if(f>=55&&f<65)
return 'C';
else if(f>=45&&f<55)
return 'D';
else if(f>=35&&f<45)
return 'E';
else
return 'F';
}
int main()
{
int i,j,n,m;
printf("How many students\n");
scanf("%d",&n);
printf("How many subjects\n");
scanf("%d",&m);
for(i=0;i<n;i++)
{
printf("Enter the name of stuent %d",i+1);
scanf("%s",s[i].name);
printf("Enter the usn\n");
scanf("%s",s[i].usn);
for(j=0;j<m;j++)
{
printf("Enter the subject\n");
scanf("%s",s[i].sub[j]);
printf("Enter the mse1 marks\n");
scanf("%d",&s[i].mse1[j]);
printf("Enter the mse2 marks\n");
scanf("%d",&s[i].mse2[j]);
printf("Enter the mse3 marks\n");
scanf("%d",&s[i].mse3[j]);
printf("Enter the LA1 marks\n");
scanf("%d",&s[i].la1[j]);
printf("Enter the La2 marks\n");
scanf("%d",&s[i].la2[j]);
printf("Enter the Sem end exam marks\n");
scanf("%d",&s[i].see[j]);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
//out of 3 internals best two are taken ande average of those two are taken
if(s[i].mse1[j]>=s[i].mse2[j]&&s[i].mse2[j]>=s[i].mse3[j])
s[i].cie[j]=(s[i].mse1[j]+s[i].mse2[j])/2;
else if(s[i].mse2[j]>=s[i].mse3[j]&&s[i].mse3[j]>=s[i].mse1[j])
s[i].cie[j]=(s[i].mse2[j]+s[i].mse3[j])/2;
else 
s[i].cie[j]=(s[i].mse1[j]+s[i].mse3[j])/2;
//total marks calculation
s[i].final[j]=s[i].cie[j]+s[i].see[j];
s[i].grade[j]=grade(s[i].final[j],s[i].cie[j],s[i].see[j]);
}
}
for(i=0;i<n;i++)
{
printf("\n\n\n\t\t MARKS CARD \t\t\n");
printf("______________________________________________\n");
printf("\t Name  :%s\n",s[i].name);
printf("\t USN   :%s\n",s[i].usn);
for(j=0;j<m;j++)
{
printf("\tsub    :%s\n",s[i].sub[j]);
printf("\tgrade  :%c\n",s[i].grade[j]);
}
}
}
   

 


