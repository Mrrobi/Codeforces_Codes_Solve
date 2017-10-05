#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char ch[1001],temp1[1000],temp2[1000];
    scanf("%s",ch);
    int i=0,j=0;
    while(ch[i]!=NULL){
        if(isalpha(ch[i])){
            temp1[j]=ch[i];
            j++;
        }
        i++;
    }
    temp1[j]='\0';
    puts(temp1);
}
