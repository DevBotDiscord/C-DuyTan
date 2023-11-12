#include <stdio.h>
int main()
{
    float a,b,x;
    printf("nhap a: ");
    scanf("%f", &a);
    printf("nhap b: ");
    scanf("%f", &b);
    if (a==0)
    {
        if(b==0){
            printf("ptrinh vo so nghiem");
        } else{
            printf("ptrinh vo nghiem");
        }
    } else {
        printf("ptrinh co nghiem x=%g\n",-b/a);
    }
    return 0;
}
