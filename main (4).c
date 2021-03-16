main()
{
    int  a,i,b,z=1;
    printf("Enter the value:");
    scanf("%d",&a);
    printf("Enter the power of the value:");
    scanf("%d",&b);
    for (i=1; i<=b; i++)
    {
        z=z*a;
    }
    printf("\n%d\n",z);
}
