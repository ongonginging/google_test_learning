
#ifndef __FUNC_H__
#define __FUNC_H__

int Func(int a, int b){
    if (a == 0 || b == 0){
        throw "don't do that";
    }
    int c = a % b;
    if (c == 0)
        return b;
    return Func(b, c);
}

bool IsPrime(int n){
    if (n <= 1) return false;
    if (n % 2 == 0) return n == 2;
    for (int i = 3; ; i += 2) {
        if (i > n/i) break;
        if (n % i == 0) return false;
    }
    return true;
}

#endif //__FUNC_H__
