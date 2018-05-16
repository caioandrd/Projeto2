#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"

///
/// @brief A Classe circulo é a classe que gera a figura círculo.
///
class Circulo : public FiguraGeometrica
{
    ///
    /// @brief x0 guarda a coordenada x do centro do círculo
    /// @brief y0 guarda a coordenada y do centro do círculo
    /// @brief raio guarda o valor do raio do círculo
    ///
    int x0, y0, raio;
    ///
    /// @brief fillmode seletor para definir se o cirulo será preenchido ou apenas o contorno
    ///
    bool fillmode;
public:
    ///
    /// \brief Circulo Construtor da classe
    /// \param _x é a coordenada x do centro do círculo
    /// \param _y é a coordenada y do centro do círculo
    /// \param _r é o valor do raio do círculo
    /// \param fill indica de que forma será impressa a figura
    ///
    Circulo(int _x, int _y, int _r, bool fill);
    ///
    /// \brief draw Função para desenhar a figura
    /// \param m Tela na qual a figura será desenhada
    ///
    void draw(Screen &m);
};

#endif // CIRCULO_H
