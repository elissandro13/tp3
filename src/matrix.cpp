#include "../include/segTree.hpp"
#include <iostream>




Matrix::Matrix() {

    // aplicar matrix identidade

    this->m11 = 1;
    this->m12 = 0;
    this->m21 = 0;
    this->m22 = 1;
}

Matrix::Matrix(unsigned long int a, unsigned long int b, unsigned long int c, unsigned long int d) {

    this->m11 = a;
    this->m12 = b;
    this->m21 = c;
    this->m22 = d;

}


void Matrix::imprimeMatrix() {

    std::cout << m11 << " " << m12 << std::endl << m21 << " " << m22 << std::endl;
};
