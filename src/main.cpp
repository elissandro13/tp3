#include <iostream>
#include "../include/segTree.hpp"
#include "../include/matrix.hpp"
#include "../include/util.hpp"




using std::cout;
using std::cin;
using std::endl;



int main() {

    /*
    Matrix k = {1,2,3,4};
    Matrix po[3];

    po[2] = k;
    po[2].imprimeMatrix();

    return 0;



    Matrix xxx = multiplicaMatrix(k,po);

    xxx.imprimeMatrix();
    cout << endl;

    k = po;

    k.imprimeMatrix();
    cout <<  endl;

    Vetor vet = multiplicaMatrixVetor(k, 15, 7);
    cout <<  vet.x << " " << vet.y << endl; */

    int n, q;

    char c;

    int instante, inicio, fim;
    unsigned long int m11, m12, m21, m22, x, y;

    cin >> n >> q;

    SegTree * segTree = new SegTree(n);
    segTree->controiArvore(1, 0, n-1);

    /* for (int i = 0; i < 4*n; ++i) {

        segTree->seg[i].imprimeMatrix();
        cout << endl;

    } */

    while(q--) {
        cin >> c;
        if(c == 'u') {
            cin >> instante;
            cin >> m11 >> m12 >> m21 >> m22;
            Matrix tmp = {m11, m12, m21, m22};
            segTree->atualiza(instante, tmp, 1, 0, n-1);
           //segTree->v[instante] = tmp;

        } else if(c == 'q') {

            //segTree->controiArvore(1, 0, n-1);
            cin >> inicio >> fim >> x >> y;

            Matrix tmp = segTree->buscaArvore(inicio, fim,1, 0, n-1);
            Vetor vet = multiplicaMatrixVetor(tmp, x, y);
            cout <<  vet.x << " " << vet.y << endl;

        }
    }


//     for (int i = 0; i <= 7; ++i) {
//
//        segTree->seg[i].imprimeMatrix();
//        cout << endl;
//
//    }

     delete segTree;

    return 0; 
}