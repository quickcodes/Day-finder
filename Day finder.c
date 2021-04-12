#include<stdio.h>
#define p printf
#define s scanf
#define and &&
#define or ||
#define equ ==
#define not_equ !=
#define greater >
#define less <
#define great_equ >=
#define less_equ <=

void main()
{
    int dd;
    int mm;
    int yyyy;
    char choice;

    welcomeScreen();
    do{

        system("cls");
        system("color F0");
        p("\n\n\n\t Enter the day (dd) \n\n\n\t --> ");
        s("%d",&dd);
        p("\n\n\n\t Enter the month (mm) \n\n\n\t --> ");
        s("%d",&mm);
        p("\n\n\n\t Enter the year (yyyy) \n\n\n\t --> ");
        s("%d",&yyyy);

        int yy=yyyy%100;
        //p("date is %d / %d / %d ",dd,mm,yy);

        int mcode = monthCodeFinder(mm);
        //p("\n m code is %d\n",mcode);

        int ycode = (yy/4);
        //p("\n year code is %d",ycode);

        int cal = ( dd + yy + ycode + mcode ) % 7;
        //p("\n calculation is %d\n", cal);

        int dcode = daycode(cal,yyyy);
        //p("\n day code is %d",dcode);

        p("\n\n\t\t*****");
        showDay(dcode);
        p("*****\n\n\n\n\n");

        system("pause");

        system("cls");
        p("\n\n\n\t 1. Yes i want to find more \n");
        p("\n\n\n\t 2. Press 'x' for exit \n -->");
        choice = getch();
        // system("pause");

    }while(choice not_equ 'x');

}

void welcomeScreen()
{
    system("color 3F");
   printf("\n\n\n\n\n");
   printf("\t------------------------------------------------------------------------------------------------------\n\n");
   printf("\t#################################### YOUR DAY FINDER APP ##############################################\n\n");
   printf("\t------------------------------------------------------------------------------------------------------");
   printf("\n\n\n\t\t\t*******************************WELCOME*******************************\n\n\n\n\n\n\n\n\n\t");
   system("pause");
}

void showDay(int dcode)
{
    switch(dcode)
    {
    case 0:
        p(" Saturday ");
        break;
    case 1:
        p(" Sunday ");
        break;
    case 2:
        p(" Monday ");
        break;
    case 3:
        p(" Tuesday ");
        break;
    case 4:
        p(" Wednesday ");
        break;
    case 5:
        p(" Thursday ");
        break;
    case 6:
        p(" Friday ");
        break;
    }
}

int daycode(int cal , int yyyy)
{
    int res;
    if(yyyy great_equ 1600 and yyyy less 1699){
        res = cal+5;
    }
    else if(yyyy great_equ 1700 and yyyy less 1799){
        res = cal+3;
    }
    else if(yyyy great_equ 1800 and yyyy less 1899){
        res = cal+1;
    }
    else if(yyyy great_equ 1900 and yyyy less 1999){
        res = cal+0;
    }
    else if(yyyy great_equ 2000 and yyyy less 2099){
        res = cal-1;
    }
    else if(yyyy great_equ 2100 and yyyy less 2199){
        res = cal-3;
    }
    else if(yyyy great_equ 2200 and yyyy less 2299){
        res = cal-5;
    }
    else {
        p("Error founded");
    }
    return  res;
}


int monthCodeFinder(int mm){
    int monthcode;
    switch(mm){
    case 1:
        monthcode = 1;
        break;
    case 2:
        monthcode = 4;
        break;
    case 3:
        monthcode = 4;
        break;
    case 4:
        monthcode = 0;
        break;
    case 5:
        monthcode = 2;
        break;
    case 6:
        monthcode = 5;
        break;
    case 7:
        monthcode = 0;
        break;
    case 8:
        monthcode = 3;
        break;
    case 9:
        monthcode = 6;
        break;
    case 10:
        monthcode = 1;
        break;
    case 11:
        monthcode = 4;
        break;
    case 12:
        monthcode = 6;
        break;
        }
    return monthcode;
}



