#include "../function.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

void display(void){
    FILE *fp;
    fp = fopen("seats_reserved.txt", "r");
    if(fp == NULL)
    {
        printf("Record Not Found.....\n");
        printf("\nPress Enter to go back to Main menu_");
        getchar();
    }
    printf("\n Booked Ticket:\n\n");
    char ch;
    while((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
    printf("\nPress any key to go back to Main menu_");
    getchar();
    getchar();
}
