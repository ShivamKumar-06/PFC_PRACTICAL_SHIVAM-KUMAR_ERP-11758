#include <stdio.h>
int main(){
    //shivam kumar 11758
    int n;
    printf("Enter the height of the triangle: ");
    scanf("%d", &n);
    for (int i=1; i<=n;i++){
        for (int star=1;star<=i;star++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*output
  Enter the height of the triangle: 5
  *
  **
  ***
  ****
  *****

  */