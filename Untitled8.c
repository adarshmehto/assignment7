int main()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(n=n+1;;n++)
    {
        for(i=2;i<n;i++)
            if(n%i==0) break;
    if(n==i)
    {
        printf("%d is next prime",n);
        break;
    }
    }
}
