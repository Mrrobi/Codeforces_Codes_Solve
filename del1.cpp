#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*single contact's information*/
struct contact{
    char firstname[20];
    char lastname[20];
    char mnumber[12];
};
/*contacts phonebook can hold*/
struct contact phonebook[100];
/*current size of the phonebookarray*/
int m = 0;

void addentry()
{
    if(m==100){
        printf("\nError: Phonebook is Full\n");
        return;
    }
    struct contact c;
    printf("Enter First Name   : ");
    gets(c.firstname);
    printf("Enter Last Name    : ");
    gets(c.lastname);
    printf("Enter Mobile Number: ");
    gets(c.mnumber);
    phonebook[m] = c;
    m++;
}
void display(int index){
    if(index<0 || index>=m){
        printf("\nError!");
        return ;
    }
    struct contact c = phonebook[index];
    printf("First Name:%s\n",c.firstname);
    printf("Last Name :%s\n",c.lastname);
    printf("MObile No :%s\n",c.mnumber);
    printf("\n");
}
void strtolower(char *a)
{
    int j = strlen(a);
    int i;
    for(i=0;i<j;i++){
        a[i]=tolower(a[i]);
    }
}
void contactsearch(char *input, int a){
    int found=0;
    int i;
    strtolower(input);
    char d[100];
    if(a==0){//search by first name
        for(i=0;i<m;i++){

            strcpy(d,phonebook[i].firstname);
            strtolower(d);

            if(strcmp(d,input)==0){
                display(i);
                found=1;
            }
        }
    }
    else if(a==1){//search by last name
        for(i=0;i<m;i++){

            strcpy(d,phonebook[i].lastname);
            strtolower(d);

            if(strcmp(d,input)==0){
                display(i);
                found=1;
            }
        }
    }
    else if(a==2){//search by mobile number
        for(i=0;i<m;i++){

            strcpy(d,phonebook[i].mnumber);
            strtolower(d);

            if(strcmp(d,input)==0){
                display(i);
                found=1;
            }
        }
    }
    else{
        printf("\nError: Invalid Search Type!\n");
        return;
    }
    if(found==0){
        printf("\nNot Found In The Contacts\n");
    }
}
void readcontact()
{
    FILE *fp;
    if((fp=fopen("phonebook.txt","r"))==NULL){
        printf("Error: can't load the data!\n");
        return;
    }
    if(fread(&m,sizeof(m),1,fp)!=1){
        printf("Error: can't read data!\n");
        return;
    }
    if(fread(phonebook,sizeof(phonebook),1,fp)!=1){
        printf("Error: can't read data!\n");
        return;
    }
}
void savecontact()
{
    FILE *fp;
    if((fp = fopen("phonebook.txt","w"))==NULL){
        printf("Error: can't create a database file!\n");
        return;
    }
    if(fwrite(&m,sizeof(m),1,fp)!=1){
        printf("Error: can't save data!\n");
    }
    if(fwrite(phonebook,sizeof(phonebook),1,fp)!=1){
        printf("Error: can't save data!\n");
    }
    printf("Contact saved!\n");
}
void removecontact(char *rem, int c)
{
    if(m==0){
        printf("No Contacts Available.Nothing to delete!\n");
        return;
    }
    int i,j,n=0;
    if(c==0){
        for(i=0;i<m;i++){
            if(strcmp(phonebook[i].mnumber,rem)==0){
                for(j=i;j<m;j++){
                    phonebook[j]=phonebook[j+1];
                }
                strcpy(phonebook[j].firstname,"");
                strcpy(phonebook[j].lastname,"");
                strcpy(phonebook[j].mnumber,"");
                m-=1;
                n++;
            }
        }
    }
    else if(c==1){
        for(i=0;i<m;i++){
            if(strcmp(phonebook[i].lastname,rem)==0){
                for(j=i;j<m;j++){
                    phonebook[j]=phonebook[j+1];
                }
                strcpy(phonebook[j].firstname,"");
                strcpy(phonebook[j].lastname,"");
                strcpy(phonebook[j].mnumber,"");
                m-=1;
                n++;
            }
        }
    }
    if(n==0){
        printf("Does't match!\n");
    }
    else{
        printf("%d contact(s) has deleted!\n",n);
    }
}
void screenclear()
{
    system("PAUSE");
    system("CLS");
}
void editcontact(char *mobilenumber)
{
    if(m==0){
        printf("No Contacts Available.Nothing to Edit!\n");
        return;
    }
    int i,j,n=0;
    char f_name[20];
    char l_name[20];
    char m_num[12];
    for(i=0;i<m;i++){
        if(strcmp(phonebook[i].mnumber,mobilenumber)==0){
            printf("Enter First Name   : ");
            gets(f_name);
            strcpy(phonebook[i].firstname,f_name);
            printf("Enter Last Name    : ");
            gets(l_name);
            strcpy(phonebook[i].lastname,l_name);
            printf("Enter Mobile Number: ");
            gets(m_num);
            strcpy(phonebook[i].mnumber,m_num);
            n++;
        }
    }
    if(n==0){
        printf("Does't match!\n");
    }
    else{
        printf("%d contact(s) has Edited!\n",n);
    }
}

int main()
{
    readcontact();
    int i;
    char a[20];
    char b[20];
    int c,j;
    while(1){
    printf("Phonebook Application's Main Menu.\n");
    printf(" 1. Add new contact\n");
    printf(" 2. Display all contact\n");
    printf(" 3. Search contact by First name\n");
    printf(" 4. Search contact by Last name\n");
    printf(" 5. Search contact by Mobile number\n");
    printf(" 6. Delete a contact\n");
    printf(" 7. Edit contact (by mobile no)\n");
    printf(" 8. Save contact\n");
    printf(" 9. Exit\n");
    do{
        printf("Enter your choice: ");
        gets(a);
        c = atoi(a);
    }while(c<1||c>9);
    switch(c)
    {
    case 1:
        addentry();
        screenclear();
        break;
    case 2:
        if(m==0){
            printf("Empty Contact!\n");
        }
        for(i=0;i<m;i++){
            display(i);
            printf("\n");
        }
        screenclear();
        break;
    case 3:
        printf("Enter First name to search your contact:");
        gets(a);
        contactsearch(a,0);
        screenclear();
        break;
    case 4:
        printf("Enter Last name to search your contact:");
        gets(a);
        contactsearch(a,1);
        screenclear();
        break;
    case 5:
        printf("Enter Mobile number to search you contact:");
        gets(a);
        contactsearch(a,2);
        screenclear();
        break;
    case 6:
        printf("Press '1' if you want to delete contact by Mobile number(if you have same Mobile number in both contact)\n");
        printf("Press '2' if you want to delete contact by Last name(if you have same Last name in both contact)\n");
        printf("Option: ");
        scanf("%d",&j);
        fflush(stdin);
        switch(j)
        {
        case 1:
            printf("Enter mobile number to delete: ");
            gets(b);
            removecontact(b,0);
            screenclear();
            break;
        case 2:
            printf("Enter Last name to delete: ");
            gets(b);
            removecontact(b,1);
            screenclear();
            break;
        }
        break;
    case 7:
        printf("Enter mobile number to Edit:");
        gets(a);
        editcontact(a);
        screenclear();
        break;
    case 8:
        savecontact();
        screenclear();
        break;
    case 9:
        exit(0);
        break;
    default:
        break;
    }
    }
    return 0;
}

