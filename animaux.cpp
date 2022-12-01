#include "animaux.h"

Animal::Animal(){

}
void Animal::init() {
// Déplace l'Animal sur la gauche de la fenêtre
ptrUI->setFrameRect(QRect(0,ptrUI->frameRect().y(),ptrUI->frameRect().width(),ptrUI->frameRect().height()));
}
void Animal::avancer(){
}

/***********************************************************************************************************************************/

Tortue::Tortue(QLabel *label){
    ptrUI = label;
}
void Tortue::avancer(){
    ptrUI->setFrameRect(QRect(ptrUI->frameRect().x()+vitesse,ptrUI->frameRect().y(),ptrUI->frameRect().width(),ptrUI->frameRect().height()));
    qDebug()<<"Tortue avance";
}

/***********************************************************************************************************************************/

Lievre::Lievre(QLabel *label){
    ptrUI = label;
}
void Lievre::avancer(){
    ptrUI->setFrameRect(QRect(ptrUI->frameRect().x()+vitesse,ptrUI->frameRect().y(),ptrUI->frameRect().width(),ptrUI->frameRect().height()));
    qDebug()<<"Lievre avance";
}
