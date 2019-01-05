#include <QCoreApplication>
#include <SFML/Graphics.hpp>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    sf::RenderWindow myWindow(sf::VideoMode(800,600),"Hello Qt and SFML!");
    myWindow.clear(sf::Color(127,127,127));
    myWindow.display();

    return a.exec();
}
