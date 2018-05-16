#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "screen.h"

///
/// @brief A classe Figura Geometrica serve para representar determinadas figuras que serão implementadas.
///
class FiguraGeometrica
{
public:
    ///
    /// @brief FiguraGeometrica Construtor padrão da classe
    ///
   FiguraGeometrica();
   ///
   /// @brief draw Função virtual que será definida de acordo com a figura que for desenhada
   /// @param m Tela para desenhar a figura
   ///
    virtual void draw(Screen &m)=0;
};

#endif // FIGURAGEOMETRICA_H
