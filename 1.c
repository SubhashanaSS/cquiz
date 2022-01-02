# include <stdio.h>
int main (void)  
{       
	//including variables

	int phoneNo;
        int count = 1;
	char name[20], address[50], nicNo[12];
	char condition;
	
	FILE * kPtr; //define the file pointer
	kPtr = fopen("Details.dat", "w");
	
	while(count!=0)

	{
		//getting details to 'dat' file

		printf("Please input customer name: ");
		scanf("%20s", name, name);
                
		printf("Please input customer NIC no: ");
		scanf("%12s", nicNo);
	
		printf("Please input customer phone number: ");
		scanf("%d", &phoneNo);
	
		printf("Please input customer residance address: ");
		scanf("%50s", address);
	
		fprintf(kPtr,"Name		NIC		Phone Number		Address\n");
		fprintf(kPtr,"%s	  %s	    %d	      %s  \n", name, nicNo, &phoneNo, address);

		printf("\n Do you want to input new detail(Y/N): ");
		scanf("\t");
		scanf("%c", &condition);

		if(condition == 'Y') // decide to input more details or not
		{
			count++;
		}
		else
		{
			return -1;
		}

	}
	fclose(kPtr); //closing file pointer
	return 0;
}
