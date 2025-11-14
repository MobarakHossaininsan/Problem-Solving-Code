#include<stdio.h>
int main()
{
    int n,a,b,c,d;
    scanf("%d",&n);
    while(n--)
    {
        //Mobarak Hossain Insan
        scanf("%d%d%d%d",&a,&b,&c,&d);
         if(a<b && a<c && a<d)
             printf("3\n");
        else if(a<b && (a<c || a<d))
         printf("2\n");
         else if((a<b || a<c) && a<d)
         printf("2\n");
         else if(a<c && (a<b || a<d))
         printf("2\n");
        else if(a<b || a<c || a<d)
            printf("1\n");
        else
             printf("0\n");

    }
    return 0;
}
