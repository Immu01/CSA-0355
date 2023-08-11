#include <stdio.h>
#include <stdlib.h>

struct register_info{
    int reg_no;
    char name[20];
    int age;
    char gender[10];
};

int main()
{
    struct register_info reg[100];
    int n, i, flag = 0;
    printf("Enter the number of registers: ");
    scanf("%d", &n);
    printf("Enter the details of registers:\n");
    for(i=0; i<n; i++){
        printf("Register No: ");
        scanf("%d", &reg[i].reg_no);
        printf("Name: ");
        scanf("%s", reg[i].name);
        printf("Age: ");
        scanf("%d", &reg[i].age);
        printf("Gender: ");
        scanf("%s", reg[i].gender);
        printf("\n");
    }
    printf("Enter the register number to search: ");
    scanf("%d", &i);
    for(i=0; i<n; i++){
        if(reg[i].reg_no == i){
            flag = 1;
            printf("Register found.\n");
            printf("Name: %s\n", reg[i].name);
            printf("Age: %d\n", reg[i].age);
            printf("Gender: %s\n", reg[i].gender);
            break;
        }
    }
    if(flag == 0){
        printf("Register not found.\n");
    }
    return 0;
}