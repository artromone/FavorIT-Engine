#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
int main()
{
  size_t desktopWidth = sf::VideoMode::getDesktopMode().width;
  size_t desktopHeight = sf::VideoMode::getDesktopMode().height;
  //
  size_t windowWidth = static_cast< size_t >(desktopWidth * 0.75);
  size_t windowHeight = static_cast< size_t >(desktopHeight * 0.8);
  //
  sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "FavorIT_Engine", sf::Style::Titlebar);
  //
  int posX = static_cast< int >(desktopWidth / 2 - windowWidth / 2);
  int posY = static_cast< int >(desktopHeight / 2 - windowHeight / 2);
  sf::Vector2i pos(posX, posY);
  sf::Vector2f posf(posX, posY);
  window.setPosition(pos);
  //window.setPosition(sf::Vector2i(sf::Window::CenterHorizontal(), sf::Window::CenterVertical()));
  //
  sf::RectangleShape rectangle(sf::Vector2f(100, 100));
  rectangle.setFillColor(sf::Color::Red);
  rectangle.setPosition(posf);
  //
  window.setVerticalSyncEnabled(true);
  //
  while (window.isOpen())
  {
    sf::Event event;
    while (window.pollEvent(event))
    {
      if (event.type == sf::Event::Closed)
      {
        window.close();
      }
    }
    window.clear(sf::Color::White);
    window.draw(rectangle);
    window.display();
  }
  return 0;
}
