#include<stdio.h>

int main()
{
  int a,b,c,x1,x2,x3;
  int delta;
     
    do{
        printf("Nhap a (a!=0): ");
        scanf("%d",&a);
        printf("Nhap b: ");
        scanf("%d",&b);
        printf("Nhap c: ");
        scanf("%d",&c);
    }
    while(!a);

      delta= b * b - 4 * a * c;

  if (delta <0)
  {
     printf("phuong trinh vo nghiem");
  }
  else if (delta == 0)
  {
     x3=x1 = x2 = -b / (2 * a);
     printf("phuong trinh co nghiem kep x1 = x2 = %d",x3) ;
  }
  else
  {
  	delta = sqrt(delta);
  	 x1=-b + delta / 2 * a;
     x2=-b - delta  / 2 * a;
  printf("phuong trinh co 2 nghiem x1 = %d \n",x1);
  printf("phuong trinh co 2 nghiem x2 = %d",x2);
  }	
  return 0;
}
