#include <stdio.h>

int main()
{
    int tab[100];
    int n, i, x, z;
    
    scanf("%d", &n);
    if(n>0&&n<=100){
        for(i=0;i<=n-1;i++){
            scanf("%d", &tab[i]);
        }
        
        x=n-1;
        z=0;
        
        while(x!=0){
            while(z<x){
                if(tab[z]>tab[z+1]){
                    printf("%d %d\n", tab[z],tab[z+1]);
                }
                z++;
            }
            x--;
        }
        
        
    }
    else{
        printf("BŁĄD");
        return 0;
    }
    
    return 0;
}