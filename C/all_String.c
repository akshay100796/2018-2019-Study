/*
PROG	: Print name by accesing char using while loop

#include<stdio.h>
int main()
{
	char name[]="C++";
	int i=0;
	while(name[i]!='\0')
	{
		printf("\n%e",name[i]);
		i++;	
	}
}
-------------------------------------------------------------------------------------------------------------------------------------------------------
*/
/*
PROG	: Accesing Multiple string through scanf() Function
#include<stdio.h>
int main()
{
	char axe[20];
	printf("Enter Name : ");
	scanf("%[^\n]s",&axe);
	default:
}

	printf("\n\n\t\t\tMy name is : %s",axe);
}
---------------------------------------------------------------------------------------------------------------------------------------------------------
*/
/*

PROG	: print name [ without sf() function ] using gets() , puts()

#include<stdio.h>
#include<string.h>
int main()
{
	char axe[20];			          //this max size may ignore bcoz
	printf("\n\n\t\tEnter Name : ");
	gets(axe);                          //it recive string mare than size
	puts(axe);							//it print string more than size
} 
------------------------------------------------------------------------------------------------------------------------------------------------------------
*/
/* 
PROG	: all string function  


	//***********************************strlen()***************************************
#include<stdio.h>
#include<string.h>
int main()
{
	int l;
	char str[10];
	printf("Enter Your name : ");
	scanf("%s",&str);
	l=strlen(str);
	printf("Your name is %d Charater Long ",l);
	return 0;
}

	//*********************************strcpy()*****************************************

#include<stdio.h>
#include<string.h>
int main()
{
	char source[15];
	char target[15];
	printf("\nEnter Your name as Source String  : ");
	scanf("%s",&source);
	strcpy(target,source);
	printf("\n\n\t\tOh...Hi %s",target);
	return 0;
}


	//********************************strcmp()********************************************

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[15];
	char str2[15];
	int diff;
	printf("\nEnter First name : ");
	scanf("%s",&str1);
	printf("\nEnter Second Name : ");
	scanf("%s",&str2);
	diff=strcmp(str1,str2);
	printf("\n\n\t The Diffrence between two Name is : %d ",diff);
	return 0;
}


	//********************************strlwr() / strupr()******************************** 
#include<stdio.h>
#include<string.h>
int main()
{
	char name[10];
	int n;
	printf("\nEnter name in Small or Capital Latter : ");
	scanf("%s",&name);
	printf("\nPress 1 for name in small  later  : ");
	printf("\nPress 2 for name in Capital later : ");
	printf("\n\nEnter your Choice  :  ");
	scanf("%d",&n);
	if(n==1)
	{
		char *p;
		p=strlwr(name);
		printf("\nLower case Name is : %s",p);
	}
	else
	{
		char *p;
		p=strupr(name);
		printf("\nUppar case name is  : %s",p);
	}
	return 0;
}


	//********************************strcat()******************************************* 
	
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[15];
	char str2[15];
	char *p;
	printf("Enter First Name : ");				//Akshay
	scanf("%s",&str1);
	printf("Enter Second Name : ");				//Pawar
	scanf("%s",&str2);
	p=strcat(str1,str2);
	printf("\nString Concatinate is %s",p);		//AkshayPawar   o/p
}


	//********************************strdup()*********************************************
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[15];
	char str2[15];
	char *p;
	printf("\nEnter First Name : ");				
	scanf("%s",&str1);
	p=strdup(str1);
	printf("\nDuplicate String is : %s",p);
	printf("\nstr2 is %s",str2);
}

	//********************************strrev()***********************************************
#include<stdio.h>
#include<string.h>
int main()
{
	char *p;
	char str[15];
	printf("\nEnter Your Name :  ");			//Akshay
	scanf("%s",str);
	p=strrev(str);
	printf("\nReverce Name is  :  %s ",p);		//yahskA								
}
*/
                                                               

---------------------------------End of string inbuild fun()------------------------------------------




                                                                                                             
