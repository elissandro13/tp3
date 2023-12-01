//
// Created by ecjun on 01/12/2023.
//

#include "../include/util.hpp"

Matrix multiplicaMatrix(Matrix a, Matrix b) {

    unsigned long int resto = 100000000;

    return { (a.m11 * b.m11 + a.m12 * b.m21) % resto,
             (a.m11 * b.m12 + a.m12 * b.m22) % resto,
             (a.m21 * b.m11 + a.m22 * b.m21) % resto,
             (a.m21 * b.m12 + a.m22 * b.m22) % resto

    };

}

Vetor multiplicaMatrixVetor(Matrix m, int x, int y) {

    unsigned long int resto = 100000000;

    int a = (m.m11 * x + m.m12 * y) % resto;
    int b = (m.m21 * x + m.m22 * y) % resto;

    return { a, b };

}
