#include <iostream>

int main() {
    int a,b,sum;

    std::cin>>a>>b;
    sum=a+b;
    int len=0;
    int _a[10];

    if(sum==0)
        std::cout<<0;
    if(sum<0)
    {
        std::cout<<'-';
        sum=-sum;
    }

    while(sum){
        _a[++len]=sum%10;
        sum/=10;
    }
    int l=len;
    while (len>0){
        if(len%3==0&&len<l)
            std::cout<<',';
        std::cout<<_a[len];
        len--;
    }
    /*
     * Solvtion 2:
    if(sum>=1000000)
        printf("%d,%03d,%03d", sum/1000000, sum%1000000/1000, sum%1000);
    else if(sum>=1000)
        printf("%d,%03d", sum/1000, sum%1000);
    else
        printf("%d", sum);
     */
    return 0;
}