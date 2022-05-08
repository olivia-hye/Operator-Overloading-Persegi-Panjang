#include <iostream>
#include "include/PersegiPanjang.hpp"


PersegiPanjang::PersegiPanjang(){}
PersegiPanjang::PersegiPanjang(float xTengah, float yTengah, float panjang, float lebar)
{
    this->xmin = xTengah - (panjang/2);
    this->xmax = xTengah + (panjang/2);
    this->ymin = yTengah - (lebar/2);
    this->ymax = yTengah + (lebar/2);
}

bool PersegiPanjang::operator == (PersegiPanjang const &p2)
{
    if(this->xmax > p2.xmin && this->xmin < p2.xmax && this->ymax > p2.ymin && this->ymin < p2.ymax){return 1;}
    else{return 0;}
}

PersegiPanjang PersegiPanjang::operator + (PersegiPanjang const &p2)
{
    PersegiPanjang temp;
    if (this->xmin < p2.xmin){temp.xmin = this->xmin;}
    else {temp.xmin = p2.xmin;}
    
    if (this->xmax > p2.xmax) {temp.xmax = this->xmax;}
    else {temp.xmax = p2.xmax;}

    if (this->ymin < p2.ymin){temp.ymin = this->ymin;}
    else {temp.ymin = p2.ymin;}
    
    if (this->ymax > p2.ymax) {temp.ymax = this->ymax;}
    else {temp.ymax = p2.ymax;}

    if(*this == p2){return temp;}
}

PersegiPanjang PersegiPanjang::operator - (PersegiPanjang const &p2)
{
    PersegiPanjang temp;
    
    if (this->xmin > p2.xmin){temp.xmin = this->xmin;}
    else {temp.xmin = p2.xmin;}
    
    if (this->xmax < p2.xmax) {temp.xmax = this->xmax;}
    else {temp.xmax = p2.xmax;}

    if (this->ymin > p2.ymin){temp.ymin = this->ymin;}
    else {temp.ymin = p2.ymin;}
    
    if (this->ymax < p2.ymax) {temp.ymax = this->ymax;}
    else {temp.ymax = p2.ymax;}
    if(*this == p2){return temp;}
}

PersegiPanjang PersegiPanjang::operator ++ (int)
{
    float panjang, lebar, xTengah, yTengah;

    panjang = this->xmax - this->xmin;
    lebar   = this->ymax - this->ymin;
    
    xTengah = this->xmin + panjang/2;
    yTengah = this->ymin + lebar/2;

    panjang = panjang*2;
    lebar   = lebar*2;

    this->xmin = xTengah - panjang/2;
    this->xmax = xTengah + panjang/2;

    this->ymin = yTengah - lebar/2;
    this->ymax = yTengah + lebar/2;
    return *this;
}

PersegiPanjang PersegiPanjang::operator -- (int)
{
    float panjang, lebar, xTengah, yTengah;

    panjang = this->xmax - this->xmin;
    lebar   = this->ymax - this->ymin;

    xTengah = this->xmin + panjang/2;
    yTengah = this->ymin + lebar/2;

    panjang = panjang/2;
    lebar   = lebar/2;

    this->xmin = xTengah - panjang/2;
    this->xmax = xTengah + panjang/2;

    this->ymin = yTengah - lebar/2;
    this->ymax = yTengah + lebar/2;
    return *this;
}

float PersegiPanjang::operator[] (int i)
{
    switch(i){
        case 1: return this-> xmin; break; 
        case 2: return this-> ymin; break; 
        case 3: return this-> xmax; break; 
        case 4: return this-> ymax; break;
    }
}

void PersegiPanjang::print()
{
    float panjang, lebar, xTengah, yTengah;
    panjang = this->xmax - this->xmin;
    lebar   = this->ymax - this->ymin;
    
    xTengah = this->xmin + panjang/2;
    yTengah = this->ymin + lebar/2;
    
    std::cout << std::endl;
    std::cout << "Panjang             : " << panjang << std::endl; 
    std::cout << "Lebar               : " << lebar  << std::endl << std::endl;
    std::cout << "Titik Tengah X      : " << xTengah << std::endl;
    std::cout << "Titik Tengah Y      : " << yTengah << std::endl << std::endl;
    std::cout << "Xmin                : " << this->xmin << std::endl;
    std::cout << "Xmax                : " << this->xmax << std::endl;
    std::cout << "Ymin                : " << this->ymin << std::endl;
    std::cout << "Ymax                : " << this->ymax << std::endl;
    std::cout << std::endl;
    std::cout << "Tekan ENTER Untuk Melanjutkan Program";
}

