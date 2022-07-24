int main()
{
    int i,a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    for(;a<=b;a++)
    {
        for(i=2;i<a;i++)
            if(a%i==0) break;
        if(i==a)
            printf("%d ",i);
    }
}
