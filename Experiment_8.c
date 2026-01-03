#include <stdio.h>
int main(){
    int n;
    printf("ENTER NUMBER : ");
    scanf("%d", &n);
    if (n%2==0){
        printf("ENTERED NUMBER IS EVEN");
    }
    else{
        printf("ENTERED NUMBER IS ODD");
    }
    return 0;
}