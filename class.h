
#ifndef __SRC_H__
#define __SRC_H__

#include <iostream>

class A{
    public:
        inline void Init(){
            std::cout <<"----------------------- class A initialized -------------------"<<std::endl;
        }
        inline void Finalize(){
            std::cout <<"----------------------- class A finalized -------------------"<<std::endl;
        }
        int Calc(int a, int b){
            return b - a;
        }
};

#endif //__SRC_H__
