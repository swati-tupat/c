#include "../function.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void specifictrain(int train_num)
{	
	if (train_num==2121)
	{
		printf("\nTrain:\t\t\tRed Lines Express");
		printf("\nDestination:\t\tMumbai to Khandwa");
		printf("\nDeparture:\t\t4:00 pm ");
	}
	if (train_num==2122)
	{
		printf("\nTrain:\t\t\tRed Lines Express");
		printf("\nDestination:\t\tKhandwa to Mumbai");
		printf("\nDeparture:\t\t9:00 am");
	}
	if (train_num==2120)
	{
		printf("\nTrain:\t\t\tLA City Express");
		printf("\nDestination:\t\tMumbai to Goa");
		printf("\nDeparture:\t\t4:00 am");
	}
	if (train_num==1004)
	{
		printf("\nTrain:\t\t\tLA City Express");
		printf("\nDestination:\t\tGoa to Mumbai");
		printf("\nDeparture:\t\t5:00 pm ");
	}
	if (train_num==1005)
	{
		printf("\nTrain:\t\t\tIron City Express");
		printf("\nDestination:\t\tBoston to Chicago");
		printf("\nDeparture:\t\t7am");
	}
	if (train_num==1006)
	{
		printf("\ntrain:\t\t\tIron City Express");
		printf("\nDestination:\t\tChicago to Boston");
		printf("\nDeparture:\t\t9.30am ");
	}
	if (train_num==1007)
	{
		printf("\ntrain:\t\t\tKeystone Express");
		printf("\nDestination:\t\tBoston to Washington");
		printf("\nDeparture:\t\t1pm ");
	}
	if (train_num==1008)
	{
		printf("\ntrain:\t\t\tKeystone Express");
		printf("\n Destination:\t\tWashington to Boston");
		printf("\nDeparture:\t\t4pm ");
	}
}
