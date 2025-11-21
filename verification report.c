
#include<stdio.h>
int main()
{
    int choice,id;
    printf("---KYC Verification system-----\n");
    printf("1.PAN number\n");
    printf("2.AADHAR number\n");
    printf("3.APAAR id\n");
    printf("4.Driving license\n");
    printf("5.passport\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    
    case1: //PAN
    printf("PAN verified\n");
    break;
    case2: //AADHAR
    printf("AADHAR verified\n");
    break;
    case3: //APAAR
    printf("APAAR verif
    case4: //DRIVING LICENSE
    printf("DRIVING LICENCE verified\n");
    break;
    case5: //PASSPORT
    printf("PASSPORT verified\n");
    break;
    default:
    printf("Not verified!\n");
}
return 0;
}
    
    
