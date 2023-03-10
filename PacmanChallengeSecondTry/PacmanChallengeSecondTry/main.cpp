#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

void mainWindowCycle(RenderWindow& _window)
{
    CircleShape pacman;
    pacman.setRadius(12);
    pacman.setPosition(0, 0);
    while (_window.isOpen())
    {
        Event event;
        while (_window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                _window.close();
        }

        _window.clear();
        _window.draw(pacman);
        _window.display();
    }
}

int main()
{
    RenderWindow window(VideoMode(200, 200), "SFML works!");
    CircleShape shape(100.f);
    shape.setFillColor(Color::Green);

    mainWindowCycle(window);

    return 0;
}