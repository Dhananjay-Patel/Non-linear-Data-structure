# include<conio.h>
# include<stdio.h>
int fact(int num)
{
    int ans = num;
    if (num == 0)
        return 1;
    if (num != 1)
    {
        ans = ans * fact(num - 1);
    }
    else
    {
        return 1;
    }
    return ans;
}
int main()
{
    int num;
    printf("Enter num:");
    scanf("%d", &num);
    printf("Factorial of %d is %d", num, fact(num));
    return 0;
}