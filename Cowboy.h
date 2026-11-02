#ifndef COWBOY_H
#define COWBOY_H

#include "humain.h"

class Cowboy : public Humain
{
public:
    Cowboy(const string nom = "", const string boissonFavorite = "whisky", const string adjectif = "vaillant");
    int getPopularite() const { return popularite;}
    string getAdjectif() const {return adjectif;}
    void sePresente() const;
private:
    int popularite;
    string adjectif;
};
#endif

