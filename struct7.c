#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct contact {
    char name[80];
    int age;
    char phone[80];
};

typedef struct contact Contact;

void printContacts(Contact c[], int N) {
    printf("List of contacts: \n");
    int i = 0;
    for (i = 0; i < N; i++) {
        printf("%s, %d, %s\n", c[i].name,  c[i].age, c[i].phone); 
    }
}
void printContact(Contact c) {
    printf("%s, %d, %s\n", c.name,  c.age, c.phone); 
}

Contact createContact (char name[], int age, char phone[]) {
    Contact tmp;
    strcpy(tmp.name, name);
    tmp.age = age;
    strcpy(tmp.phone, phone);
    return tmp;
}

int searchContactByName(Contact c[], int N, char name[]) {
    int i = 0;
    for (i = 0; i < N; i++) {
        if(!strcmp(c[i].name, name)) return i;
    }
    return -1;
}

int searchContactByPhone(Contact c[], int N, char phone[]) {
    int i = 0;
    for (i = 0; i < N; i++) {
        if(!strcmp(c[i].phone, phone)) return i;
    }
    return -1;
}
int main()
{
    int MAX = 20;
    int i = 0;
    int choice;
    char name[80], phone[80];
    int age;
    Contact phoneBook[MAX];
    while(1) {
        printf("1. Add Contact\n");
        printf("2. Search Contact by Name\n");
        printf("3. Search Contact by Phone\n");
        printf("4. Show All Contacts\n");
        printf("5. Quit\n");
        printf("Your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Enter name, age and phone: ");
            // scanf("%s%d%s", phoneBook[i].name, &phoneBook[i].age, phoneBook[i].phone) or the following two lines
            scanf("%s%d%s", name, &age, phone); 
            phoneBook[i] = createContact(name, age, phone);
            i++;
        }
        else if(choice == 2) {
            printf("Enter name to search: ");
            scanf("%s", name);
            int  ret = searchContactByName(phoneBook, i, name);
            if (ret == -1) printf("Not Found\n");
            else {
                printf("Found - ");
                printContact(phoneBook[ret]);
            }
        }
        else if(choice == 3) {
            printf("Enter phone to search: ");
            scanf("%s", phone);
            int ret = searchContactByPhone(phoneBook, i, phone);
            if (ret == -1) printf("Not Found\n");
            else {
                printf("Found - ");
                printContact(phoneBook[ret]);
            }
        }
        else if (choice == 4) {
            printContacts(phoneBook, i);
        }
        else if (choice == 5) {
            exit(0);
        }
        
    }
    return 0;
}