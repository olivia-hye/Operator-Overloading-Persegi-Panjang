#ifndef __PersegiPanjang_HPP__
#define __PersegiPanjang_HPP__

#include <iostream>

class PersegiPanjang{
    private:
    float ymin, ymax, xmin, xmax;

    public:
    PersegiPanjang();
    PersegiPanjang(float xTengah, float yTengah, float panjang, float lebar);
    
    bool operator == (PersegiPanjang const &);
    PersegiPanjang operator + (PersegiPanjang const &);
    PersegiPanjang operator - (PersegiPanjang const &);
    float operator [] (int);
    PersegiPanjang operator ++ (int);
    PersegiPanjang operator -- (int);
    void print();
    };

#endif