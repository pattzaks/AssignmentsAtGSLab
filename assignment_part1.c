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
 
 int count = 1 , line_number1 ;
 line_number1 = atoi(argv[2]);
 char string[128];
 if (argc == 3)
 {
	// only 1 number is entered by user
 
   printf("\nWill be reading line number %d from file %s",line_number1,argv[1]);

   fp = fopen (argv[1],"r");
   while (count <= line_number1)
  {
 	fgets(string,128,fp);
	++count;
  }
	 printf("\n\tline read is : %s\n\n",string);
 fclose(fp);
}

if (argc == 4)
{
	 int line_number2 ; 
	 line_number2 = atoi(argv[3]);
     if (line_number1 <= line_number2)
   {
  	 fp = fopen(argv[1],"r");

	while (count < line_number1)
       {
	 fgets(string,128,fp);
         ++count;
       }

       while (count <= line_number2)
	{
	 fgets(string,128,fp);
	 printf("\n----%s",string);
	 ++count;
	}
    }
    else 
	{
	  printf("\n\n argument 4 should be greater than argument 3");
	}

}

 return 0;

}
