#include <stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    float area,s;
    //input three value of triangle
    printf("enter the first value : ");
    scanf("%f" ,&a);
    printf("enter the second value : ");
    scanf("%f",&b);
    printf("enter the third value : ");
    scanf("%f",&c);
    //calculate semi parameter
   s=(a+b+c)/2;
   //caclucate area (heron's formula')
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    //display result
    printf("area of triangle is: %.2f\n" ,area);
    return 0;
}

