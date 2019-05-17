#include "phone.h"
#include <stdio.h> 
#include <string.h>

extern int size;
extern struct Contact PhoneBook[MAX];


void searchByName()
{
	//int findName = 0;
	char searchName[10];
	printf("Enter a name to search: ");
	scanf("%s", searchName);
	for(int i = 0; i<size; i++)
		{
			if( strcmp(searchName,PhoneBook[i].Name) == 0)
			{
				printf("%s \t %15s\n", searchName, PhoneBook[i].PhoneNumber);
				//findName = 1;
				return;
			}
		}
	//if(findName == 0)
		printf("Oops! %s is not in the PhoneBook\n", searchName);
}


