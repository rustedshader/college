/* Multiplication Table */
#include <stdio.h>

int main(){
    int n;
    printf("Enter the number for which you want the table\n-> ");
    scanf("%d",&n);
    for (int i =1 ; i<=10 ; i++ ){
        printf("%d\n",i*n);
    }
    return 0;
}
