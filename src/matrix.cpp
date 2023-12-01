#include "../include/matrix.hpp"



Matrix::Matrix() {

    // aplicar matrix identidade

    this->m11 = 1;
    this->m12 = 0;
    this->m21 = 0;
    this->m22 = 1;
}

Matrix::Matrix(int a, int b, int c, int d) {

    this->m11 = a;
    this->m12 = b;
    this->m21 = c;
    this->m22 = d;

}


Matrix Matrix::multiplicaMatrix(Matrix a, Matrix b) {

    using long int resto = 100000000;

    return { (a.m11 * b.m11 + a.m12 * b.m21) % resto,
             (a.m11 * b.m12 + a.m12 * b.m22) % resto,
             (a.m21 * b.m11 + a.m22 * b.m21) % resto,
             (a.m21 * b.m12 + a.m22 * b.m22) % resto

    };

}
