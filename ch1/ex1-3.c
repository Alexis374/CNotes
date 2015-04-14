#include<stdio.h>
main(){
    printf("Fahr\tCelsuis\n");
    float fahr,celsuis;
    int lower=0,upper=300,step=20;
    for(fahr=lower;fahr<=upper;fahr+=step){
        celsuis = 5 * (fahr-32) / 9;
        printf("%3.2f\t%3.2f\n",fahr,celsuis);
    }
}