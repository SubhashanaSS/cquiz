# include <stdio.h>
int main(void)
{
	//including variables

	int amount1 = 0;

	FILE * trans; //define the file pointer
	trans = fopen("trans.dat", "r");

	while(!feof(trans)) //while loop
	{
		int t_amount = 0;
		fscanf(trans,"%d", &t_amount);
		
		amount1 = amount1 + t_amount;
	}
	printf("Total amount is: %d\n", amount1);//displaing total paid amounts

	fclose(trans); //closing file pointer
	return 0;
}
