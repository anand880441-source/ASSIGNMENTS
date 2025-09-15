#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=66; i<=65+n; i++){
        for(int j=1; j<=n-i+65; j++){
            printf(" ");
            
        }
        for(int k=65; k<=i-1; k++){
            printf("%c",k);
        }
        printf("\n");
    }
    return 0;
}