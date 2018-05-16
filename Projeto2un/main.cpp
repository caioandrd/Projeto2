#include <iostream>
#include <vector>
#include "screen.h"
#include "figurageometrica.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"
#include<fstream>
#include<list>
#include<sstream>
#include<string>


using namespace std;

int main()
{
    /*Screen m(40,40);
    m.setBrush('%');
    Reta r(2,2,10,10);
    Retangulo ret(5,6,10,20,1);
    Circulo c(10,10,5,1);
    c.draw(m);
    cout << m;*/

    ifstream fin;
    ofstream fout;
    Screen s;
    string st;
    list <FiguraGeometrica*> fig;
    list <FiguraGeometrica*>::iterator it;

    fin.open("C:/Users/caiow/Documents/Projeto2un/entrada.txt");
    fout.open("C:/Users/caiow/Documents/Projeto2un/figuras.txt");

    while(fin.good()){
      getline(fin,st);
        if(fin.good()){
               string cmd;
               stringstream sstream(st);
               sstream >> cmd;
               if(cmd.compare("dim")==0){
                   int x, y;
                   sstream >> x >> y;
                   s.setDimensao(x,y);
               }
               if(cmd.compare("brush")==0){
                    char brush;
                    sstream >> brush;
                    s.setBrush(brush);
                     cout << cmd <<endl;
                           }
               if(cmd.compare("line")==0){
                     int x0, y0, x1, y1;
                     sstream >> x0 >> y0 >> x1 >> y1;
                     fig.push_back(new Reta(x0, y0, x1, y1));
                           }
                if(cmd.compare("rectangle")==0){
                     int x0, y0, altura, largura;
                     bool fillmode;
                     sstream >> x0 >> y0 >> altura >> largura >> fillmode;
                     fig.push_back(new Retangulo(x0, y0, altura, largura, fillmode));
                           }
                 if(cmd.compare("circle")==0){
                      int x0, y0, r;
                      bool fillmode;
                      sstream >> x0 >> y0>> r >> fillmode;
                      fig.push_back(new Circulo(x0, y0, r, fillmode));
                           }
                       cout << cmd << endl;
                      }

                   }
    for(it = fig.begin(); it!=fig.end(); it++){
            (*it)->draw(s);
          }
        fout <<s;
        return 0;
}
