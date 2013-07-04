//Program to read file name and number n and print the statement on line number n
#include<stdio.h>
#include<string.h>

 FILE *fp ;
 int count = 1 , line_number1,line_number2 ;
 char string[128];
 char filename[50];

 void read_filename()
 {
	
	  printf("\nusage: assign filename number1 number2\n");
	  printf("please enter input filename : ");
	  scanf("%s",filename);
	 // filename[strlen(filename)] = '\0'; ; 		  
 }

 void read_number1()
 {
      	
          printf("\n Please enter number 1 : ");
	  scanf("%d",&line_number1);
 }
 void read_number2()
 {
      	
          printf("\n Please enter number 2 : ");
	  scanf("%d",&line_number2);
 }

 void logic(char *file)
 {
        count =1 ;
	if (line_number1 >= line_number2) 
	 return ;
	
	if ( fp = fopen(file,"r"))
     {
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
      
       fclose(fp);
     
     }
    else 
	{
		printf("\nFile Doesnt exist\n\n ");
	}
 }

int main(int argc,char *argv[])
{
 
 if (argc == 1 )
	{
	   read_filename();
	   read_number1();
	   read_number2();
           logic(filename);
	}

 if (argc == 2)
	{
	   read_number1();
	   read_number2();
           logic(argv[1]);
	}
  
 if (argc == 3)
 {
	// only 1 number is entered by user
   line_number1 = atoi(argv[2]); 
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
	 line_number1 = atoi(argv[2]);
	 line_number2 = atoi(argv[3]);
	 logic(argv[1]);
}

 return 0;

}
