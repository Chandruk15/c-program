#include <stdio.h>

int main() {
int a;
printf("number of rows:");
scanf("%d",&a);
for(int i=0;i<a;i++){
    for(int j=0;j<=i;j++){
    printf("*");
}
printf("\n");
}
}
