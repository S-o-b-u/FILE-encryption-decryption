#include<stdio.h>
#include<stdlib.h>

// C program to encrypt a file.

int main()
{
	char inputfile[20], ch;
	FILE *fptr1, *fptr2;
	
	printf("Enter Your <ENCRYPTED DATA FILE> Name :\n");
	scanf("%s", inputfile);
	
	fptr1 = fopen(inputfile, "rb");
	if(fptr1 == NULL)
	{
		printf("Error Read File\n");
		printf("Try Again Later :(");
		exit(0);
	}
	
	fptr2 = fopen("decrypted.txt", "wb");
	if(fptr2 == NULL)
	{
		printf("Error Write File\n");
		printf("Try Again Later :(");
		exit(0);
	}
	
	do{	
		ch = fgetc(fptr1);
		if(feof(fptr1))
		break;
		fputc(ch-3, fptr2);
	}while(1);
	
	fclose(fptr1);
	fclose(fptr2);
	printf("Thank You For Using Me >< \n");
	printf("Your <DECRYPTED FILE> Is Ready :)\n");
	printf("Have A Great Day <==>");
	return 0;
}
