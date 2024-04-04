#include <stdio.h>
int main()
{
    int a,b,c,max,min;    
    printf("nhap a: ");
    scanf("%d", &a);
    printf("nhap b: ");
    scanf("%d", &b);
    printf("nhap c: ");
    scanf("%d", &c);
    // if (a>b & a>c)
    // {
    //     printf(" so lon nhat la a=%d \n",a);
    // }
    // if (a<b & a<c)
    // {
    //     printf("so nho nhat la a=%d \n",a);
    // }
    // if (b>a & b>c)
    // {
    //     printf("so lon nhat la b=%d \n",b);
    // }
    // if (b<a & b<c)
    // {
    //     printf("so nho nhat la b=%d \n",b);
    // }
    // if (c>a & c>b)
    // {
    //     printf("so lon nhat la c=%d \n",c);
    // }
    // if (c<a & c<b)
    // {
    //     printf("so nho nhat la c=%d \n",c);
    // }
    max = a;
    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }
    printf("So lon nhat la= %d \n", max);
    min=a;
    if(b<min){
        min=b;
    }
    if(c<min){
        min=c;
    }
    printf("So nho nhat la= %d \n",min);
    return 0;

}
