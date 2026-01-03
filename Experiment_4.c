#include <stdio.h>
int main(){
    int a,b;
    printf("ENTER FIRST NUMBER: ");
    scanf("%d",&a);
    printf("ENTER SECOND NUMBER: ");
    scanf("%d",&b);
    if (a>b){
        printf("%d is Largest",a);
    }
    else if (b>a){
        printf("%d is Largest",b);
    }
    else{
        printf("BOTH ARE EQUAL");
    }
}