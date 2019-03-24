#include <stdio.h>
//palindrome function to find whether a number is a plaindrome or not
void palindrome(int originalnumber)
{
    int reversenumber=0;
    int remainder=0;
    while(originalnumber!=0)
    {
        remainder=originalnumber%10;    //modulus of originalnumber by 10
        reversenumber=(reversenumber*10+remainder); 
        originalnumber=originalnumber/10; //division of originalnumber by 10
    }
    if(reversenumber==originalnumber) /**check whether the originalnumber
                                         is equal to the reversenumber**/
    {
        printf("yes it is a palindrome");
    }
        printf("not a palindrome");
}

int main()
{
    int n=0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    palindrome(n);
    return 0;
}