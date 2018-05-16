#include "circulo.h"
#include "screen.h"


Circulo::Circulo(int _x, int _y, int _r, bool fill)
{
    x0 = _x;
    y0 = _y;
    raio = _r;
    fillmode = fill;
}

void Circulo::draw(Screen &m)
{
    int x, y, d;
       x = 0;
       y = raio;
       d = 1 - raio;

    while(y > x){
       m.setPixel(x0 + x, y0 + y);
       m.setPixel(x0 + y, y0 + x);
       m.setPixel(x0 - y, y0 + x);
       m.setPixel(x0 - x, y0 + y);
       m.setPixel(x0 - x, y0 - y);
       m.setPixel(x0 - y, y0 - x);
       m.setPixel(x0 + y, y0 - x);
       m.setPixel(x0 + x, y0 - y);
    if(fillmode == 1){
        for(int i = x0 - x; i <= x0 + x; i++){
            m.setPixel(i, y0 + y);
            m.setPixel(i, y0 - y);
            }
        for(int i = x0 - y; i <= x0 + y; i++){
            m.setPixel(i, y0 + x);
            m.setPixel(i, y0 - x);
            }
     }
     if(d < 0){
        d = d + 2*x + 3;
        x = x + 1;
     }
     else{
        d = d + 2*(x-y) + 5;
        x = x + 1;
        y = y - 1;
     }
  }
}
