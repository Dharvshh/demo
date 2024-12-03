void main()
{
int i;
int a[5];
int b[5];
clrscr();

for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}

for(i=4;i>=0;i--)
{
b[5-1-i]=a[i];
}

for(i=0;i<=4;i++)
{
printf("%d ",b[i]);
}
getch();
}