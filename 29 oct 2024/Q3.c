
#include <stdio.h>

int main() {
    int x;
    printf("Enter x=");
    
    scanf("%d",&x);
int ms=0,ps=0;
int c=0;
if(x==0){
    c++;

}else if(x>0){
    ps+=x;
}else{
   ms+=x;
}
printf("Zero Count: %d\nPlus Sum: %.2f\nMinus Sum: %.2f", c, ps, ms);
    return 0 ;
}