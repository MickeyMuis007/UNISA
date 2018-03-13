#include "wadget.h"

Wadget::Wadget(double a, double b): m_d1(a), m_d2(b){
    m_wadgetCount ++;
}

int Wadget:: wadgetCount(){
    return m_wadgetCount;
}

double Wadget::calculation(){
    return m_d1*m_d2 + m_wadgetCount;
}

void Wadget::print(){

}
