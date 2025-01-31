// 4️⃣ Swap two numbers without using a third variable.
#include<stdio.h>
#include<conio.h>
int main(){
    int a,b;
    printf("enter the and a :");
    scanf("%d",&a);
    printf("enter the and b:");
    scanf("%d",&b);
    a=b,b=a;
    printf("a value after reversing:%d\n",a);
}
