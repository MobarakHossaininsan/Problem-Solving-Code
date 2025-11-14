#include <stdio.h>
int main()
{
    unsigned char haha = 0;
    unsigned char lol = 0;
    unsigned char c;
    printf("Enter Something: ");
    scanf("%d",&c);
    printf("You Entered: %d\n", c);
    if(haha == 13 && lol == 37){
        printf("flag{answer}\n");
    }
    else{
        printf("Try Again! : Haha = %d , Lol = %d\n", haha,lol);
    }
    return 0;
}
