//Program to read file name and number n and print the statement on line number n
#include<stdio.h>

int main(int argc,char *argv[])
{
 
 if (argc < 3)
	{
	  printf("usage: assign filename number");	
	  return 0;
	}
 
 FILE *fp ;
 int count = 1 , line_number ;
 line_number = atoi(argv[2]);
 printf("\nWill be reading line number %d from file %s",line_number,argv[1]);
 char string[128];
 fp = fopen (argv[1],"r");
 while (count <= line_number)
{
 	fgets(string,128,fp);
	++count;
}
	 printf("\n\tline read is : %s\n\n",string);
 fclose(fp);

 return 0;

}
