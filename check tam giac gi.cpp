#include <stdio.h>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    printf("nhap a: ");
    scanf("%d", &a);
    printf("nhap b: ");
    scanf("%d", &b);
    printf("nhap c: ");
    scanf("%d", &c);
    if(a+b>c && b+c>a && c+a>b)
    {
        if(a*a==b*b+c*c && b*b==a*a+c*c && c*c== a*a+b*b)
        {printf("3 canh nay la tam giac vuong\n");}
        else{
            if (a==b&&b==c)
            {printf("3 canh nay la tam giac deu\n");}
            else{
                if (a==b||a==c||b==c)
                {printf("3 canh nay la tam giac can\n");}
                else {
                    printf("3 canh nay just la mot tam giac bth \n");
                }
            }
        }       
    }
    else{printf("3 canh nay k phai la tam giac \n");};
    return 0;
}

