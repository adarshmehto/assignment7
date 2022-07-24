int main()
{
    int a,b,flag=0,c;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if(a>b)
        c=a;
    else
        c=b;
    for(int i=2;i<c;i++)
        if(a%i==0 && b%i==0)
        {
        flag=1;
        break;
        }
    if(flag==1)
        printf("Not co prime");
    else
        printf("Prime");
}
