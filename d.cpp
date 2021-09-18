#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i,j,tc,t, n[100];
    
	scanf("%d", &tc);
    for(i=1; i<=tc; i++){
        scanf("%d", &n[i]);
    }

    for(i=1; i<=(tc-1); i++){
        for(j=tc; j>=(i+1); j--){
            if(n[j-1]>n[j]){
                t=n[j-1];
                n[j-1] = n[j];
                n[j] = t;
            }
        }
    }

    for(i=1; i<=tc; i++){
    	n[i] =
        printf("%d ",n[i]);
    }
    printf("\n");
    return 0;
}
