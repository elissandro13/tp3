#ifndef MATRIX_HPP
#define MATRIX_HPP

struct Vetor {
    unsigned long int x;
    unsigned long int y;
};


class Matrix {

    public:
        unsigned long int m11, m12, m21, m22;

        Matrix();

        Matrix(unsigned long int a, unsigned long int b, unsigned long int c, unsigned long int d);

        void imprimeMatrix();


};


#endif
