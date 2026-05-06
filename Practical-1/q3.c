#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct banking {
   int account_number;
   char customer_Name[20];
   char account_Type[20];
   int balance;
};

int main() {
    

    struct banking *s1;
    int n ;
   
    printf("Enter how many accounts : ");
    scanf("%d", &n);

    s1 = (struct banking *)malloc(sizeof(struct banking) * n);

    for(int i=0;i<n;i++)
    {
      printf("Enter account number : ");
      scanf("%d",&s1[i].account_number);

      printf("Enter your customer name : ");
    
    getchar();
      fgets(s1[i].customer_Name,sizeof(s1[i].customer_Name),stdin);
      
       printf("Enter customer account type : ");
    
      fgets(s1[i].account_Type,sizeof(s1[i].account_Type),stdin);

       printf("Enter your custmer balance : ");
       scanf("%d",&s1[i].balance);
    
    }
    printf("\n");

    for ( int i = 0; i < n; i++)
    {
         printf("Account number   : %d", s1[i].account_number);
        printf("Coutomer name is : %s\n",s1[i].customer_Name);
        printf("customer account type : %s\n",s1[i].account_Type);
        printf("balance : %d\n", s1[i].balance);

    }
       
    for (int i = 0; i < n; i++)
    {
        
         printf("==========balance upto 5000 thousand==========\n");
    
        if(s1[i].balance >= 5000){
        printf("Account number   : %d\n", s1[i].account_number);
        printf("Coutomer name is : %s",s1[i].customer_Name);
        printf("customer account type : %s",s1[i].account_Type);
        printf("balance : %d\n", s1[i].balance);

        }
        
    }
    
    free(s1);


    return 0;
}