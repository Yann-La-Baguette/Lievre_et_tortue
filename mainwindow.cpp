#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow){

    ui->setupUi(this);

    // creation du timer
    timer = new QTimer(this);
    // Connexion du signal timout() et du slot timerSlot
    connect(timer, SIGNAL(timeout()),this, SLOT(timerSlot()));


    tab[0] = new Lievre(ui->lapin);
    tab[1] = new Tortue(ui->tortue);

    ui->lapin->setPixmap(QPixmap(":images2/tortue.png").scaledToHeight(200));
    ui->tortue->setPixmap(QPixmap(":images2/lievre.png").scaledToHeight(200));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnAvancer_Clicked(){
    timer->start(25);
    tab[0]->avancer();
    tab[1]->avancer();
}

void MainWindow::on_btnRetour_Clicked(){
    timer->stop();
    tab[0]->init();
    tab[1]->init();
}

void MainWindow::timerSlot(){
on_btnAvancer_Clicked();
}
