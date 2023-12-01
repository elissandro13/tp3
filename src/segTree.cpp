#include "../include/segTree.hpp"
#include "../include/util.hpp"



SegTree::SegTree(int n) {

    v = new Matrix[n];
    seg = new Matrix[4*n];


};

Matrix SegTree::controiArvore(int pos, int incio, int fim) {
    if(incio == fim) {
        // lembnrar de fazer a sobrecarga do operador
        seg[pos] = v[incio];
        return seg[pos];
    }
    int meio  = (incio+fim)/2;

    // lembnrar de fazer a sobrecarga do operador
    seg[pos] = multiplicaMatrix(controiArvore(2*pos, incio, meio), controiArvore(2*pos+1, meio + 1, fim));

    return seg[pos];

};

// controiArvore(1, 0, n-1);


Matrix SegTree::buscaArvore(int a, int b, int pos, int inicio, int fim){

    if(b < inicio || fim < a) return {0, 0, 0, 0};

    if(a <= inicio && fim <= b) return seg[pos];

    int meio = (inicio+fim)/2;

    return multiplicaMatrix(buscaArvore(a, b, 2*pos, inicio, meio), buscaArvore(a, b, 2*pos+1, meio+1, fim));

};

// buscaArvore(a, b, 1, 0, n-1);

Matrix SegTree::atualiza(int i, Matrix x, int pos, int inicio, int fim) {

    if(i < inicio || fim < i) return seg[pos];
    if(fim == inicio) {
        // lembnrar de fazer a sobrecarga do operador
        seg[pos] = x;
        return seg[pos];
    }
    int meio = (inicio + fim)/2;
    seg[pos] = multiplicaMatrix(atualiza(i, x, 2*pos, inicio, meio), atualiza(i, x, 2*pos+1, meio+1, fim));
    return seg[pos];



};

//atualiza(i, x, 1, 0, n-1);

// int p pos seg tree
// int l = comeco
// int fim