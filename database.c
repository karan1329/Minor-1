#include <stdio.h>
#include <string.h>

char Username[5][10]={"karan","harsh","naman","neelash","user"};
char Password[5][10]={"karan123","harsh123","naman123","neelash123","user123"};

int main(){

  char username[10];
  char password[10];

  int i=0;
  int flag=0;
  int index=0;

  printf("Enter your username: ");
  scanf("%s", &username);

  //CHECKING FOR USERNAME IN DB
  for(i=0;i<5;i++){
    if(strcmp(username, Username[i]) == 0){
      printf("Username exists\n");
      flag=1;
      index=i;
      break;
    }
  //TODO: If username does not exist, send to sign up
  }


  //USERNAME EXISTS IN DB
  if(flag==1){
    printf("\nEnter your password: ");
    scanf("%s", &password);
    if(strcmp(password, Password[index]) == 0){
      printf("Login Succesful\n");
    }
    else
      printf("Incorrect password\n");
  }


  return 0;
}
