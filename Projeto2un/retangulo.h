#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"

///
/// @brief Classe que define um retangulo
///
class Retangulo : public FiguraGeometrica
{
    ///
    /// @brief x guarda a coordenada x do canto superior esquerdo do retangulo
    /// @brief y guarda a coordenada y do canto superior esquerdo do retangulo
    /// @brief larg guarda a largura do retangulo
    /// @brief alt guarda a altura do retangulo
    ///
    float x, y, larg, alt;
    ///
    /// @brief fillmode seletor para definir se o cirulo será preenchido ou apenas o contorno
    ///
    bool fillmode;
public:
    ///
    /// @brief Retangulo Construtor da classe.
    /// @param _x Coordenada x do vértice superior esquerdo
    /// @param _y Coordenada y do vértice superior esquerdo
    /// @param _lar Largura do retangulo
    /// @param _alt Altura do retangulo
    /// @param _fill indica de que forma será impressa a figura
    ///
    Retangulo(int _x, int _y, int _lar, int _alt, int _fill);
    ///
    /// \brief draw Função para desenhar a figura
    /// \param m Tela na qual a figura será desenhada
    ///
    void draw(Screen &m);
};

#endif // RETANGULO_H
