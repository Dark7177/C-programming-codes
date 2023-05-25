// You manage a travel agency and want n driver to input thier following detail:
// Name
// Driving license number
// Route
// Kms
// The program should be able to take n as input (or we can take n =3 for simplicity) and your driver will start inputing their detail one by one. the program should print details of drivers in beautiful fashon .For this task you have to use structure only.These four input :name, driving license number route and km information shall be sruct member . after creating strruct you have to create its array of size "n".

#include <stdio.h>
#include <string.h>

struct driver
{
    char Name[30];
    char License_no[40];
    char Route[120];
    float kms;
} driver_1, driver_2, driver_3;

int main()
{
    for (int i = 1; i < 4; i++)
    {
        switch (i=1,2,3)
        {
        case 1:
            printf("Enter your name as per our records\n");
            scanf("%s", &driver_1.Name);
            printf("Enter your license no as per record\n");
            scanf("%s", &driver_1.License_no);
            printf("Enter your Route detail\n");
            scanf("%s", &driver_1.Route);
            printf("Enter your drivem kms\n");
            scanf("%f", &driver_1.kms);

        case 2:
            printf("Enter your name as per our records\n");
            scanf("%s", &driver_2.Name);
            printf("Enter your license no as per record\n");
            scanf("%s", &driver_2.License_no);
            printf("Enter your Route detail\n");
            scanf("%s", &driver_2.Route);
            printf("Enter your drivem kms\n");
            scanf("%f", &driver_2.kms);

        case 3:
            printf("Enter your name as per our records\n");
            scanf("%s", &driver_3.Name);
            printf("Enter your license no as per record\n");
            scanf("%s", &driver_3.License_no);
            printf("Enter your Route detail\n");
            scanf("%s", &driver_3.Route);
            printf("Enter your drivem kms\n");
            scanf("%f", &driver_3.kms);

            goto print;
        default:
            break;
        }
    }

print:

    printf("Details saved successfully. Kindly check if any errors\n");
    printf("Your entered name is %s\n", driver_1.Name);
    printf("Your licenso no is %s\n", driver_1.License_no);
    printf("Your entered name is %s\n", driver_1.Route);
    printf("Your entered name is %f\n", driver_1.kms);

    printf("Your entered name is %s\n", driver_2.Name);
    printf("Your licenso no is %s\n", driver_2.License_no);
    printf("Your entered name is %s\n", driver_2.Route);
    printf("Your entered name is %f\n", driver_2.kms);

    printf("Your entered name is %s\n", driver_3.Name);
    printf("Your licenso no is %s\n", driver_3.License_no);
    printf("Your entered name is %s\n", driver_3.Route);
    printf("Your entered name is %f\n", driver_3.kms);
    return 0;
}