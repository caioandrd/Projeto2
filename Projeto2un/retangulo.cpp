#include "retangulo.h"
#include "figurageometrica.h"
#include "screen.h"


Retangulo::Retangulo(int _x, int _y, int _lar, int _alt, int _fill)
{
    x = _x;
    y = _y;
    larg = _lar;
    alt = _alt;
    fillmode = _fill;
}

void Retangulo::draw(Screen &m)
{
    if(fillmode == 1){
            for(int i = y; i <= y+alt; i++){
                for(int j = x; j <= x+larg; j++){
                    m.setPixel(i,j);
                }
            }
        }
        else if (fillmode == 0){
            for(int i = y; i <= y+alt; i++){
                for(int j = x; j <= x+larg; j++){
                    if((i == y)||(j == x)||(i == y+alt)||(j == x+larg))
                        m.setPixel(i,j);
                }
            }
        }
}
