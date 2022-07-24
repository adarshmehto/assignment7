int main()
{
    int a=-1,b=1,c,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(n)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    printf("Nth term is %d",c);
}
