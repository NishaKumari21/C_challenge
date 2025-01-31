// 8️⃣ Check if a year is a leap year.
#include<stdio.h>
#include<conio.h>
int main(){
    int year;
    printf("enter the year:");
    scanf("%d",&year);
    if(year%4==0){
        printf("year is leap");
    }
    else
            printf("year is not leap");
        
    return 0;
}