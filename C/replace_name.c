
#include <stdio.h>

int main ()
{
   int ret;
   char oldname[] = "file.txt";
   char newname[] = "newfile.txt";
   
   ret = rename(oldname, newname);
	
   if(ret<=0) 
   {
   	
      printf("\n File name is :  %s", newname);
	  printf("\n File renamed successfully");
   }
   else 
   {
      printf("Error: unable to rename the file");
   }
   
   return(0);
}

