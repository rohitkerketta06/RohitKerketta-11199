#include <stdio.h>
int main(){
    int n,s=0;
    printf("ENTER THE NTH TERM: ");
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        s+=i;
    }
    printf("THE SUM OF N NATURAL NUMBER IS %d",s);
}
