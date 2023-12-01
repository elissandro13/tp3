#include <iostream>
#include "../include/segTree.hpp"
#include "../include/matrix.hpp"
#include "../include/util.hpp"




using std::cout;
using std::cin;
using std::endl;



int main() {

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

        } else if(c == 'q') {
            cin >> inicio >> fim >> x >> y;

            Matrix tmp = segTree->buscaArvore(inicio, fim,1, 0, n-1);
            Vetor vet = multiplicaMatrixVetor(tmp, x, y);
            cout <<  vet.x << " " << vet.y << endl;

        }
    }

    return 0; 
}