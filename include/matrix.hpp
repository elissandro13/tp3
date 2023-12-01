#ifndef ARESTA_HPP
#define ARESTA_HPP

class Matrix {

    public:
        int m11, m12, m21, m22;
    
    Matrix();

    Matrix(int a, int b, int c, int d);

    Matrix multiplicaMatrix(Matrix a, Matrix b);


};


#endif
