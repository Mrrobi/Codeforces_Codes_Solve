#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
unsigned long int key,left=0;
int make_ara(char n[]);
void print(unsigned long int arr);


int main(){
    unsigned long int n,i,sum=0;
    char str[200000];
    scanf("%ul",&n);
    getchar();
    scanf("%s",str);
    getchar();
    
    //arr = (unsigned long int*)malloc(sizeof(unsigned long int)*n);
    make_ara(str);
    
    
    
}
void print(unsigned long int arr[]){
    left++;
    unsigned long int n,i,sum=0;
    char snum[200000];
    //arr = (unsigned long int*)malloc(sizeof(unsigned long int)*key);
    for(i=0;i<key;i++){
        if(i!=0){
            printf("+%d",arr[i]);
            sum+=arr[i];
        }
        else{
            printf("%d",arr[i]);
            sum+=arr[i];
        }
    }
    printf("\n");
    itoa(sum ,snum ,10);
    puts(snum);
    make_ara(snum);
}
int make_ara(char n[]){
    if(left==3){
        return 0;
    }
    unsigned long int l = strlen(n), i,arr[200000],j=0;
    key=l;
    for(i=0;i<l;i++){
        arr[j]=n[i]-48;
        j++;
    }
    print(arr);
}
