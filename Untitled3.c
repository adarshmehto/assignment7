int main()
{
    int a=-1,b=1,c,n;
    printf("Enter a number:");
    scanf("%d",&n);
    while(1)
    {
        c=a+b;
        a=b;
        b=c;
        if(c==n)break;
        if(c>n)break;
    }
    if(c==n)
        printf("Yes");
    else
        printf("No");
}
