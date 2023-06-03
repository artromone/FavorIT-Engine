#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
int main()
{
  sf::VideoMode desktopMode = sf::VideoMode::getDesktopMode();
  size_t dWidth = desktopMode.width;
  size_t dHeight = desktopMode.height;
  if (dWidth == 0 || dHeight == 0)
  {
    dWidth = 800;
    dHeight = 600;
  }
  size_t wWidth = static_cast< size_t >(dWidth * 0.75);
  size_t wHeight = static_cast< size_t >(dHeight * 0.8);
  sf::RenderWindow window(sf::VideoMode(wWidth, wHeight), "FavorIT_Engine", sf::Style::Titlebar);
  int posX = dWidth / 2 - wWidth / 2;
  int posY = dHeight / 2 - wHeight / 2;
  sf::Vector2i pos(posX, posY);
  sf::Vector2f posf(posX, posY);
  window.setPosition(pos);
  //window.setPosition(sf::Vector2i(sf::Window::CenterHorizontal(), sf::Window::CenterVertical()));
  sf::RectangleShape rectangle(sf::Vector2f(100, 100));
  rectangle.setFillColor(sf::Color::Red);
  rectangle.setPosition(posf);
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
    window.clear(sf::Color::White);
    window.draw(rectangle);
    window.display();
  }
  return 0;
}
