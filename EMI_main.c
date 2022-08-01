#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<windows.h>

float p = 0.0, r = 0.0, E = 0.0, y = 0.0, z = 0.0, di = 0.0;
int n, choice;

int emi_output(float E)
{
    printf("\n\t\t--> Loan Amount:      %f", p);
    printf("\n\t\t--> Interest Rate:    %f", r * (12.0 * 100.0));
    printf("\n\t\t--> Loan Tenure:      %d", (n / 12));
    printf("\n\t\t--> Monthly EMI:      %f", E);
    printf("\n\n\t\t--> Press Enter to Return to Main Menu.");

}

int emi()
{

    printf("\n\n\n\t\t*************************************************");
    printf("\n\t\t||            {* EMI  CALCULATOR  *}           ||");
    printf("\n\t\t*************************************************\n");
    printf("\n\t\t--> Enter the Loan Amount : ");
    scanf("%f", &p);
    printf("\n\t\t--> Enter Intrest Rate in percentage : ");
    scanf("%f", &r);
    printf("\n\t\t--> Enter the Loan Tenure : ");
    scanf("%d", &n);
    r = r / (12.0 * 100.0);
    n = n * 12.0;
    E = (p * r * pow(1 + r, n)) / (pow(1 + r, n) - 1);
    system("cls");
    emi_output(E);


}

int menu(int num)
{
    switch (num)
    {
    case 1:

        emi();
        break;
    case 2:

        printf("\n\n\t\t-------------------------------------------------");
        printf("\n\t\t||\t \t   THANK YOU! :-)              ||\n");
        printf("\t\t-------------------------------------------------");

        exit(0);

    default:
        printf("\n\t\t--> Wrong Input : TRY AGAIN  :-( \n");
        printf("\n\n\t\tPress Enter to Return to Main Menu.");


    }
    return 0;
}

int main()
{
    while (1)
    {
        int num;

        printf("\n\n\n\t\t*************************************************");
        printf("\n\t\t||                EMI CALCULATOR               ||");
        printf("\n\t\t*************************************************\n");
        printf("\n\t\t-------------------------------------------------");
        printf("\n\t\t|| --> Enter 1 : TO CALCULATE YOUR EMI.        ||");
        printf("\n\t\t-------------------------------------------------");
        printf("\n\t\t|| --> Enter 2 : TO EXIT.                      ||");
        printf("\n\t\t-------------------------------------------------");
        printf("\n\t\t--> ENTER YOUR CHOICE : ");
        scanf("%d", &num);
        system("cls");

        menu(num);
        getch();
    }
}

