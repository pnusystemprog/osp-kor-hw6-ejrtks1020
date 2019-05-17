#include "phone.h"
#include <stdio.h>
#include <string.h> 
extern int size;
extern struct Contact PhoneBook[MAX];

void deleteByName()
{
	char deleteName[10];
	printf("Enter a name to delete: ");
	scanf("%s", deleteName);
		for(int i = 0; i < size; i++)
		{
			if(strcmp(deleteName,PhoneBook[i].Name) == 0)
			{
				for(int s = i; s < size-1; s++)
				{
					PhoneBook[s] = PhoneBook[s+1];
				}
				size--;
				printf("%s is deleted...\n",deleteName);
				return;
			}

		}
	printf("Oops! %s is not in the PhoneBook\n", deleteName);
	
}
