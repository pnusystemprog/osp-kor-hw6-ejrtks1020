#include "phone.h"
#include <stdio.h>
#include <string.h>
extern int size;
extern struct Contact PhoneBook[MAX];
static int count_ID=0;

void find_id();

void registerPhoneData()
{
	char password[13], userName[10], phoneNumber[13];
	while(1)
	{
	printf("Password : ");
	scanf("%s",password);
	if(strcmp(password,"qwerty1234") == 0)
	{
		printf("New User Name : ");
		scanf("%s", userName);
		printf("PhoneNumber : ");
		scanf("%s", phoneNumber);
		printf("Registered...\n");
		strcpy(PhoneBook[size].Name,userName);
		strcpy(PhoneBook[size].PhoneNumber,phoneNumber);
		size++;
		return;
	}
	else
		find_id();
		if( count_ID == 3)
		{
			count_ID = count_ID - 3;
			return;
		}
	}
}


void find_id(){
	
	
	if( count_ID == 0)
	{
		printf("Not Matched!!\n");
		count_ID++;
	}
	else if( count_ID == 1)
	{
		printf("Not Matched!!!(twice)\n");
		count_ID++;
	}
	else if( count_ID == 2)
	{
		printf("Not Matched!!!(3 times)\n");
		printf("You are not allowed to access phoneBook\n");
		count_ID++;
	}

}















