#include<stdio.h>
int main (){
    static int a =12;
    int b=12;
    if(a<31){
        
        printf("Static is %d and non static is %d\n ",a,b);
        a++;
        b++;
        main();
    }
    return 0;
}