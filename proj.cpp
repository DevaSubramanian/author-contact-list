#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct detail
{
	char na[20],au[20];
	int vr,yr,pr;
}dataBase[100];
int comparator(const void *p,const void * q)
{
	int l=((struct detail *)p)->pr;
	int r=((struct detail *)q)->pr;
	return (l-r);
}
int main()
{
	int i,y,j,m;
	char n[20];
	printf("Enter the no of books to be included");
	scanf("%d",&m);
	for(i=0;i<=(m-1);i++)
	{
		printf("Enter book name,author name,version,year,price in order");
		scanf("%s%s%d%d%d",&dataBase[i].na,&dataBase[i].au,&dataBase[i].vr,&dataBase[i].yr,&dataBase[i].pr);
	}
    printf("enter the author name");
	scanf("%s",n);
	for(i=0;i<=(m-1);i++)
  	{
	    if(strcmp(n,dataBase[i].au) == 0)
	    {
		printf("book name :%s\nauthor :%s\nVesion :%d\nYear :%d\nPrice :%d\n",dataBase[i].na,dataBase[i].au,dataBase[i].vr,dataBase[i].yr,dataBase[i].pr);
	    }
    } 
    printf("enter the publication year");
    scanf("%d",&y);
    for(i=0;i<=(m-1);i++)
	{
    	if(y==dataBase[i].yr)
    	{
    		printf("book name :%s\nauthor :%s\nVesion :%d\nYear :%d\nPrice :%d\n",dataBase[i].na,dataBase[i].au,dataBase[i].vr,dataBase[i].yr,dataBase[i].pr);
    	}
    }
    qsort((void *)dataBase,m-1,sizeof(dataBase[m-1]),comparator);
    printf("Books listed in increasing order of price :\n");
    for(i=0;i<=(m-1);i++)
    {
    	printf("book name :%s\nauthor :%s\nVesion :%d\nYear :%d\nPrice :%d\n",dataBase[i].na,dataBase[i].au,dataBase[i].vr,dataBase[i].yr,dataBase[i].pr);
    }
    getch();
}
