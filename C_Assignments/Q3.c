#include<stdio.h>
int main(){
    int n = 65;
    int u;
    scanf("%d",&u);
   
    for(int i=65; i<=n+u; i++){
        printf("%c",i);
    }
    return 0;
}