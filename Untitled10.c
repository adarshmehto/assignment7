int main()
{
    int s=0,r,n,i,j;
    for(n=1;n<=1000;n++)
    {
        s=0;
        i=n;
        while(i)
        {
            r=i%10;
            s=s+(r*r*r);
            i=i/10;
        }
    if(s==n)
        printf("%d ",s);
    }
}
