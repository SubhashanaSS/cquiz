# include <stdio.h>
int main (void)
{
	//getting variables

	int phoneNo;
	char name[20], address[50], nicNo[10];

	
	FILE * kPtr;
	kPtr = fopen("Details.dat", "r");
	
	fscanf(kPtr, "%s    %s    %d    %s  \n", name, nicNo, &phoneNo, address); //read the details from the file
	
	while(!feof(kPtr))
	{
		printf("%s    %s     %d     %s \n", name, nicNo, phoneNo, address); //display the details on the screen
		fscanf(kPtr,"%s     %s      %d     %s", name, nicNo, &phoneNo, address);
	}
	return 0;
	
}
