#ifndef ANIMAL_H
#define ANIMAL_H

#include <QLabel>
#include <iostream>
#include <QDebug>

class Animal{

protected:
    QLabel *ptrUI;
    int position;

public:
    Animal();
    ~Animal();
    void init();
    virtual void avancer();
    int get_position();

};

class Tortue : public Animal{

private:
    int vitesse = 25;

public:
    Tortue(QLabel *label);
    ~Tortue();
    void avancer();
    int get_position();

};

class Lievre : public Animal{

private:
    int vitesse = 50;

public:
    Lievre(QLabel *label);
    ~Lievre();
    void avancer();
    int get_position();
};

#endif // ANIMAL_H
