//Que4
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main(){
    char a[50],b[50];
    int i=0,j=0,f=0;
    printf("Enter a string :");
    gets(a);

    for(i=0; i<strlen(a);i++){
        if (isalnum(a[i])) {
            a[j++] = a[i];
        }
    }
    a[j] = '\0';
    puts(strlwr(a));
    j=0;
    
    for(i=strlen(a)-1;i>=0;i--){
        b[j]=a[i];
        j++;
    }
    b[j]='\0';

    for(i=0;i<strlen(a);i++){
        if(a[i]!=b[i]){
            f=1;
            break;
        }
    }

    if(f==0)
        printf("True");
    else
        printf("False");

}