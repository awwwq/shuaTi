#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>

using namespace std;

long long gcd(long long a,long long b){
    return b==0?a:gcd(b,a%b);
}

void print(long long a,long long b){
    long long c=0;
    if(a>0){
        if(b==1){
            printf("%lld",a);
        } else if(a>b){
            c=a/b;
            a-=b*c;
            printf("%lld %lld/%lld",c,a,b);
        }else{
            printf("%lld/%lld",a,b);
        }
    }else if(a==0){
        printf("0");
    } else{
        if(b==1){
            printf("(%lld)",a);
        }else if(-1*a>b){
            c=a/b;
            a=(-1*a)%b;
            printf("(%lld %lld/%lld)",c,a,b);
        }else{
            printf("(%lld/%lld)",a,b);
        }
    }
}

void add(long long a,long long b,long long c,long long d){
    print(a,b);
    printf(" + ");
    print(c,d);
    printf(" = ");
    long long a3 = a*d+c*b;
    long long b3 = b*d;
    long long gcd3=abs(gcd(a3,b3));
    a3 /= gcd3;
    b3 /= gcd3;
    print(a3,b3);
    printf("\n");
}
void minu(long long a,long long b,long long c,long long d){
    print(a,b);
    printf(" - ");
    print(c,d);
    printf(" = ");
    long long a3 = a*d-c*b;
    long long b3 = b*d;
    long long gcd3=abs(gcd(a3,b3));
    a3 /= gcd3;
    b3 /= gcd3;
    print(a3,b3);
    printf("\n");
}
void multiply(long long a,long long b,long long c,long long d){
    print(a,b);
    printf(" * ");
    print(c,d);
    printf(" = ");
    long long a3 = a*c;
    long long b3 = b*d;
    long long gcd3=abs(gcd(a3,b3));
    a3 /= gcd3;
    b3 /= gcd3;
    print(a3,b3);
    printf("\n");
}
void divide(long long a,long long b,long long c,long long d) {
    print(a, b);
    printf(" / ");
    print(c, d);
    printf(" = ");
    if (c == 0) {
        printf("Inf");
    } else if (c < 0) {
        long long a3 = -1 * a * d;
        long long b3 = -1 * b * c;
        long long gcd3 = abs(gcd(a3, b3));
        a3 /= gcd3;
        b3 /= gcd3;
        print(a3, b3);
    }else{
        long long a3 = a * d;
        long long b3 = b * c;
        long long gcd3 = abs(gcd(a3, b3));
        a3 /= gcd3;
        b3 /= gcd3;
        print(a3, b3);
    }
    printf("\n");
}


int main() {
    long long a,b,c,d;
    scanf("%lld/%lld %lld/%lld",&a,&b,&c,&d);
    long long gcd1 = abs(gcd(a,b));
    long long gcd2 = abs(gcd(c,d));
    a/=gcd1;
    b/=gcd1;
    c/=gcd2;
    d/=gcd2;
    add(a,b,c,d);
    minu(a,b,c,d);
    multiply(a,b,c,d);
    divide(a,b,c,d);
    return 0;
}
