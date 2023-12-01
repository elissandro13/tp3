#include <iostream>
#include <sstream>
#include "../include/matrix.hpp"
#include "../include/segTree.hpp"




using std::cout;
using std::cin;



int main() {

    int n, q;

    char c;

    int instante, inicio, fim, m11, m12, m21, m22, x, y;

    cin >> n >> q;

    while(q--) {
        cin >> c;
        if(c == 'u') {
            cin >> instante;
            cin >> m11 >> m12 >> m21 >> m22;

        } else if(c == 'q') {
            cin >> inicio >> fim >> x, y

        }
    }

    return 0; 
}