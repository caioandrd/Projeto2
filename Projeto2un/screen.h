#ifndef SCREEN_H
#define SCREEN_H
#include<vector>
#include <cstdlib>
#include <ostream>
#include<cmath>

using namespace std;
///
/// @brief Classe que define a tela onde figuras geometricas serão desenhadas
///
class Screen
{
private:
    ///
    /// @brief nlin guarda o numero de linhas da matriz que gerará a tela
    /// @brief ncol guarda o numero de colunas da matriz que gerará a tela
    int nlin, ncol;
    ///
    /// @brief brush guarda qual o "pincel" usado para desenhar a figura
    ///
    char brush;
    ///
    /// @brief mat matriz que será a tela
    ///
    vector< vector<char> > mat;
public:
    ///
    /// @brief Screen Construtor da classe
    /// @param _nl numero de linhas que terá a matriz que forma a tela
    /// @param _nc numero de colunas da matriz
    ///
    Screen(int _nl = 0, int _nc = 0);
    ///
    /// @brief setDimensao Define a dimensão da matriz que forma a tela
    /// @param _nlin numero de linhas da matriz
    /// @param _ncol numero de colunas da matriz
    ///
    void setDimensao (int _nlin = 0, int _ncol = 0);
    ///
    /// @brief setPixel Define a posição de um pixel na tela que será pintado
    /// @param x coordenada x do ponto
    /// @param y coordenada y do ponto
    ///
    void setPixel(int x, int y);
    ///
    /// @brief clear Limpa a tela
    ///
    void clear();
    ///
    /// @brief setBrush Define o "pincel" que será usado para desenhar a tela
    /// @param brush "pincel" selecionado
    ///
    void setBrush(char brush);
    ///
    /// @brief operator << Imprime a tela como uma matriz
    /// @param os objeto que será o fluxo de saída
    /// @param t tela onde é desenhada as figuras
    /// @return retorna o objeto fluxo de saída
    ///
    friend ostream& operator<<(ostream &os, Screen &t);
};

#endif // SCREEN_H

