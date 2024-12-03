void main()
{
int i;
int a[5];
int min;
clrscr();

for(i=0;i<=4;i++)
{
//a[i]=n;
scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<=4;i++)
{
if(min>a[i])
{
min = a[i];
}
}
printf("%d", min);

getch();
}