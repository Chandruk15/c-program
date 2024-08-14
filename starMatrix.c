#include <stdio.h>
int main(){
    int a,b;
    printf("numeber of rows:");
    scanf("%d",&a);
    printf("number of coloums:");
    scanf("%d",&b);
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("*");
        }
        printf("\n");
    }
}
