#include <iostream>
#include <SFML/Window.hpp>
int main()
{
  size_t desktopWidth = sf::VideoMode::getDesktopMode().width;
  size_t desktopHeight = sf::VideoMode::getDesktopMode().height;

  size_t windowWidth = static_cast< size_t >(desktopWidth * 0.75);
  size_t windowHeight = static_cast< size_t >(desktopHeight * 0.8);

  sf::Window window(sf::VideoMode(windowWidth, windowHeight), "FavorIT Engine", sf::Style::Titlebar);

  int posX = static_cast< int >(desktopWidth / 2 - windowWidth / 2);
  int posY = static_cast< int >(desktopHeight / 2 - windowHeight / 2);
  sf::Vector2i pos(posX, posY);
  window.setPosition(pos);

  window.setVerticalSyncEnabled(true);

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
  }
  return 0;
}
