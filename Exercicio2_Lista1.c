#include <stdio.h>
int main(){
    int n;
    int matriz[n][n];
    
    printf("Digite o tamanho da matriz (n): ");
    Scanf("%d", &n);
    
    for(int=0; i<n, i++){
               for(int j=0; j<n; j++){
                       if(j<i) {
                               matriz[i][j] = j+1;
                       }
                       else if(j == i){
                            matriz[i][j] = i+1;
                       }
                       else{
                            matriz[i][j] = 0;
                       }
                 }
    }
    
    for(i < n; i++){
          for(j<n; j++){
                   printf("%d", matriz[i][j]);
          }
          printf("\n");
    }
    return 0;
}
