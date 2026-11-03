#ifndef COWBOY_H
#define COWBOY_H

#include "humain.h"
class Brigand;
class Dame;
class Cowboy : public Humain
{
public:
    Cowboy(const string nom = "", const string boissonFavorite = "whisky", const string adjectif = "vaillant");
    int getPopularite() const { return popularite;}
    string getAdjectif() const {return adjectif;}
    string getNom()const { return nom; }
    void sePresente() const;
    void tire(Brigand& brigand);
    void libere(Dame& dame);
private:
    int popularite;
    string adjectif;
};
#endif

