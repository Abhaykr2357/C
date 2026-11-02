#include <stdio.h>
int main(){
    int p,c,m,h,e;
    printf("enter physics marks : ");
    scanf("%d",&p);
    printf("enter marks of chemistry : ");
    scanf("%d",&c);
    printf("enter marks of math : ");
    scanf("%d",&m);
    printf("enter marks of english : ");
    scanf("%d",&e);
    printf("enter marks of hindi : ");
    scanf("%d",&h);

    float percentage;
    percentage=(p+c+m+h+e)/5.0;
    printf("you've got %f %\n",percentage);
    
    if(percentage>=90){
        printf("your grade is A+");
    }
    else if(percentage>=75&&percentage<90){
        printf("your grade is A");
    }
    else if(percentage<=30){
        printf("fail");
    }
    else{
        printf("your grade is B");
    }
    return 0;}