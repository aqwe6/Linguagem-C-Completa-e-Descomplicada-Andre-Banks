// Create a structure capable of storing the name and date of birth of a person.
// Now, write a program that reads the data of six people. Calculate and Display the names of the youngest and oldest person.

#include<stdio.h>
#include<stdlib.h>

struct H
{
    int year,month,day;
    char name[100];
};

int main()
{
    struct H x[6];
    int a=0,b=0,c=0,y=0;
    int a1=0,b1=0,c1=0,z=0;
    for(int i = 0 ; i < 6 ; i++)
    {
        scanf("%s%d%d%d",&x[i].name,&x[i].day,&x[i].month,&x[i].year);
        if(i==0)
        {
            a = x[0].year;
            b = x[0].month;
            c = x[0].day;
        }
        if(x[i].year < a)
        {
            a = x[i].year;
            b = x[i].month;
            c = x[i].day;
            y = i;
        }
        else if(x[i].year == a)
        {
            if(x[i].month > b)
            {
                b = x[i].month;
                c = x[i].day;
                y = i;
            }
            else if(x[i].month == b)
            {
                if(x[i].day > c)
                {
                    c = x[i].day;
                    y = i;
                }

            }
        }
        if(x[i].year > a1)
        {
            a1 = x[i].year;
            b1 = x[i].month;
            c1 = x[i].day;
            z = i;
        }
        else if(x[i].year == a1)
        {
            if(x[i].month > b1)
            {
                b1 = x[i].month;
                c1 = x[i].day;
                z = i;
            }
            else if(x[i].month == b1)
            {
                if(x[i].day > c1)
                {
                    c1 = x[i].day;
                    z = i;
                }

            }
        }
    }
    printf("%s %dD/%dM/%dY\n",x[z].name,x[z].day,x[z].month,x[z].year);
    printf("%s %dD/%dM/%dY\n",x[y].name,x[y].day,x[y].month,x[y].year);


    system("pause");
    return 0;

}
