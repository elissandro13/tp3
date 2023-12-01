#ifndef SEGTREE_HPP
#define SEGTREE_HPP

#include "matrix.hpp"

class SegTree {

    public:

        Matrix controiArvore(int pos, int incio, int fim);

        Matrix buscaArvore(int a, int b, int pos, int inicio, int fim);

        Matrix atualiza(int i, Matrix x, int pos, int inicio, int fim);

        SegTree(int n);

        Matrix * v;

        Matrix * seg;








};


#endif
