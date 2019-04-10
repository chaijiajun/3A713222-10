#include <stdio.h>
#include <stdlib.h> 

int main(void)
{
    int n; 
    int i, j, k, m; 
    printf("輸入正方形的邊長 -> ");
    scanf("%d", &n); 
    m = n;
    for(k=1; k<=m; k++){
       for(j=n; j<m; j++) 
          printf(" ");
       for(i=1; i<=n; i++)
          printf("*");
       printf("\n");
       n--;
    }
    system("pause");
    return 0;
}
 
