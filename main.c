#include <stdio.h>
#include <stdlib.h>

int main()
{
   char regnumber[20],firstname[20],lastname[20];
   float intro [4],networkingUnit[4],accountingUnit[4],Os[4],c_app[4];


   printf("registration number\n");
   scanf("%s",& regnumber);
   printf("Welcome %s",regnumber);



   printf(" Enter your first name\n");
   scanf("%s",&firstname);
   printf("Welcome %s", firstname);


   printf(" Enter your last name\n");
   scanf("%s",&lastname);
   printf("%s ", firstname);


   printf("Enter Introduction to Programing score\n");
   scanf("%f",intro);
   printf(intro);


   printf("Enter Networking scores\n");
   scanf("%f",networkingUnit);
   printf(networkingUnit);


   printf("Enter Accounting score\n");
   scanf("%f",accountingUnit);
   printf(accountingUnit);


   printf("Enter Operating system score\n");
   scanf("%f",&Os);
   printf(Os);


   printf("Enter computer application score\n");
   scanf("%f",& c_app);
   printf(c_app);


    return 0;
}
