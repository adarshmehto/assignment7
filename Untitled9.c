int main()
{
    int j,n,i=0,s=0,r;
    printf("Enter a number:");
    scanf("%d",&n);
    j=n;
    while(n)
    {
        n=n/10;
        i++;
    }
    n=j;
    while(n)
    {
        r=n%10;
        s=s+cube(r,i);
        n=n/10;
    }
    if(j==s)
        printf("YES");
    else
        printf("NO");
}

int cube(int r,int i)
{
    int s=1;
    while(i)
    {
        s=s*r;
        i--;
    }
    return s;
}
