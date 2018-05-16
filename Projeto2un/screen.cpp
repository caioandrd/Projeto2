#include "screen.h"
#include<iostream>
using namespace std;

Screen::Screen(int _nl, int _nc)
{
    nlin = _nl;
    ncol = _nc;
    mat = vector<vector<char>>(nlin, vector<char>(ncol, ' '));
}

void Screen::setDimensao(int _nlin, int _ncol)
{
    nlin = _nlin;
    ncol = _ncol;
    mat = vector<vector<char>>(nlin, vector<char>(ncol, ' '));
}

void Screen::setPixel(int x, int y)
{
    //testar se x e y estão dentro da matriz
    if((x > 0 && y > 0) || (x <= nlin && y <= ncol)){
    mat[x][y] = brush;
    };
 }

void Screen::clear()
{
    mat = vector< vector<char> >(nlin, vector<char>(ncol, ' '));

}

void Screen::setBrush(char _brush)
{
    brush = _brush;
}

ostream& operator<<(ostream &os, Screen &t)
{
    for(int i=0; i<t.nlin; i++){
        for(int j=0; j<t.ncol; j++){
            cout << t.mat[i][j];
        }
        cout << endl;
    }
    return os;
}
