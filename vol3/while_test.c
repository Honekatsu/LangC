#include <stdio.h>

int main(){
    int count = 1;
    while(count<=10){
        printf("%d\n",count);
        count++;
    }


    /*1~10のうち偶数のみ出力*/
    puts("偶数のみ出力");
    count = 1;
    while(count<=10){
        if(count%2==0)
            printf("%d\n",count);
        count++;
    }
    return 0;
}