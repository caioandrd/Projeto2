#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"
#include <screen.h>

///
/// @brief Classe que constroi uma reta
///
class Reta : public FiguraGeometrica
{
    ///
    /// @brief x0 guarda o valor da coordenada x inicial da reta
    /// @brief y0 guarda o valor da coordenada y inicial da reta
    /// @brief x1 guarda o valor da coordenada x final da reta
    /// @brief y1 guarda o valor da coordenada y final da reta
    int x0, y0, x1, y1;
public:
    ///
    /// @brief Reta Construtor da classe
    /// @param _x valor da coordenada x inicial da reta
    /// @param _y valor da coordenada y inicial da reta
    /// @param _x2 valor da coordenada x final da reta
    /// @param _y2 valor da coordenada y final da reta
    ///
  Reta(int _x = 0, int _y =0, int _x2 = 0, int _y2 = 0);
  ///
  /// @brief draw Função para desenhar a figura
  /// @param m Tela na qual a figura será desenhada
  ///
  void draw(Screen &m);
};

#endif // RETA_H
