#include<stdio.h>
#include<math.h>
int main ()
{
	int a,b,c,x,x1,x2;
	int delta;
	
{

 printf("Nhap a (a!=0)");
 scanf("%d",&a);
 printf("Nhap b (b!=0)");
 scanf("%d",&b);
 printf("Nhap c (c!=0)");
 scanf("%d",&c);
 
}

while(!a);

delta= b*b - 4 * a * c ;

if(delta>0)

 
 
{
	delta= sqrt (delta);
	x1 = (-b + delta) / (2*a);
    x2 = (-b - delta) / (2*a);

    
	printf("phuong trinh co 2 nghiem phan biet x1= %d\n",x1);
	printf("phuong trinh co 2 nghiem phan biet x2= %d",x2);
	
}
else 
if(delta<0)
{
	delta=b*b-4*a*c;
	printf("phuong trinh vo nghiem");
}
else if(delta=0)
{
	delta= b*b-4*a*c;
	x1=x2=x= -b/(2*a);
	
	printf("phuong trinh co nghiem kep x1=x2=%d",x);
}







return 0;
}

