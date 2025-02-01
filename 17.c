// 7️⃣ Print a right-angled triangle pattern of *.
#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,n;
    printf("enter rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}