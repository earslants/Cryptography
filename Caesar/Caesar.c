#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5000

char encryption(char userMessage[],int cryptKey) {

	
    int u=strlen(userMessage)-1,total;

    for(int i=0;i<u;i++) {
    	
        int a=0;
        total=0;
        total=total+cryptKey;
        a=(int)userMessage[i]+total;
        printf("%c",a);
        }
    }

char decryption(char userMessage[],int cryptKey) {

        int u=strlen(userMessage)-1,total;

    for(int i=0;i<u;i++) {
        int a=0;
        total=0;
        total=total+cryptKey;
        a=(int)userMessage[i]-total;
        printf("%c",a);
        }
}

int main()
{
    char userMessage[MAX];
    int userChoice,cryptKey;

    printf("1-Encrypt\n2-Decrypt\n");
    scanf("%d",&userChoice);


    if(userChoice==1) {

        printf("Enter the text :");
        fflush(stdin);
        fgets(userMessage,5000,stdin);
        printf("Enter the crypt key :");
        fflush(stdin);
        scanf("%d",&cryptKey);
        encryption(userMessage,cryptKey);
    }

    else {

        printf("Enter the crypted text :");
        fflush(stdin);
        fgets(userMessage,5000,stdin);
        printf("Enter the crypt key:");
        fflush(stdin);
        scanf("%d",&cryptKey);
        decryption(userMessage,cryptKey);
        }
}
