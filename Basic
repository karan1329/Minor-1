#include<stdio.h>
#include<string.h>
struct user                          // user login and passsword structure
{
	char username[25];
	char userpass[10];
};
struct username                         // user details structure
{
	char personNamef[25];
	char personNamel[25];
	char Email[40];
	long long phoneNo;
	char address[100];
	long long cardno;
};

/*void createAcc()                       //new account creation
{
	struct username s;
	struct user u[2];
	
	printf("user Name: ");
	scanf("%s",&u[0].username);
	
	printf("user password: ");
	scanf("%s",&u[0].userpass);
	
	
	printf("user Phone no: ");
	scanf("%lld",&s.phoneNo);
	
	printf("person first name: ");
	scanf("%s",&s.personNamef);

	printf("person last name: ");
	scanf("%s",&s.personNamel);
		
	printf("user email: ");
	scanf("%s",&s.Email);
	
	printf("user address: ");
	scanf("%s",s.address);
	
	printf("user card NO: ");
	scanf("%lld",&s.cardno);
	
	printf("user Id: %s \n user Pass: %s \n User Name: %s %s \n Mobile No: %lld \n Email:  %s \n Address: %s \n Card No: %lld \n",u.username,u.userpass,s.personNamef,s.personNamel,s.phoneNo,s.Email,s.address,s.cardno);
	
	
}*/
void login()                                                //old user login
{
	printf("welcome back \n");
	struct user u[2];       
	int i=0;
	
	for(i=0;i<2;i++)
	{
		printf("Enter user: ");
		scanf("%s",&u[i].username);
		printf("Enter pass: ");
		scanf("%s",&u[i].userpass);
	}
	
	char uname[25];
	
	printf("\nEnter the user name: ");
	scanf("%s",&uname);
	
	int flag=0;
	for(i=0;i<2;i++)
	{
		if(strcmp(u[i].username,uname)==0)
		{
			char pass[10];
			flag=1;
			printf("Enter password: ");
			scanf("%s",&pass);
			
			if(strcmp(pass,u[i].userpass)==0)
			{
				printf("welcome: \n");
			}
			else
			{
				printf("Wrong Password");
			}
			break;
		}	
	}
	if(flag==0)
	printf("No user found");
}

int main()
{
	login();
	return 0;
}
