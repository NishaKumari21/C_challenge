// 2️⃣ Print even numbers from 1 to 100.
#include<stdio.h>
#include<conio.h>
int main(){
    int i;
    
    for(int i=0;i<=100;i++){
        if(i%2==0){
            printf("Even no :%d\n",i);
        }
        else{
        printf("Odd no :%d\n",i);
        }
    }
}