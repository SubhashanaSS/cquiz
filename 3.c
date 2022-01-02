# include <stdio.h>
int main (void)
{
	//declaring variables

	int amount=0;
	int count=1;
	char check;

	FILE * trans; //define the file pointer
	trans = fopen("trans.dat", "w");


	while(count != 0)//while loop
	{
		printf("\n Enter amount: ");
		scanf("%d", &amount);

		fprintf(trans, "%d\n", amount);

		printf("Do you have another transaction(Y/N): ");
		scanf("\t");
		scanf("%c", &check);

		if(check=='Y') //dedicate to input more transactions or not
		{
			count++;
		}
		else
		{
			fclose(trans); //closing file pointer
			return -1;
		}
	}
	return 0;
}
