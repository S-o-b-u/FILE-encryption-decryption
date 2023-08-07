#include<stdio.h>
#include<stdlib.h>

// C program to encrypt a file.

int main()
{
	char inputfile[20], ch;
	FILE *fptr1, *fptr2;
	
	printf("Enter Your <DATA FILE> Name :\n");
	scanf("%s", inputfile);
	
	fptr1 = fopen(inputfile, "r");
	if(fptr1 == NULL)
	{
		printf("Error Read File\n");
		printf("Try Again Later :(");
		exit(0);
	}
	
	fptr2 = fopen("encrypted.txt", "w");
	if(fptr2 == NULL)
	{
		printf("Error Write File\n");
		printf("Try Again Later :(");
		exit(0);
	}
	
	do{
		ch = fgetc(fptr1);
		fputc(ch+3, fptr2);
	}while(ch != EOF);
	
	fclose(fptr1);
	fclose(fptr2);
	printf("Thank You For Using Me >< \n");
	printf("Your <ENCRYPTED FILE> Is Ready :)\n");
	printf("Have A Great Day <==>");
	return 0;
}
