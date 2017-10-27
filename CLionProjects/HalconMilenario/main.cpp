#include <iostream>
#include <SFML/Graphics.hpp>



int main()
{
    sf::RenderWindow Window;
    Window.create(sf::VideoMode(1200,400),"Halcon Milenario",sf::Style::Titlebar | sf::Style::Close);

    Window.setVerticalSyncEnabled(true);
    Window.setPosition(sf::Vector2i(200,100));

    sf::Texture pTexture;
    sf::Sprite playerImage;

    if(!pTexture.loadFromFile("nave3.png"))
        std::cout << "Error could not load nave image" << std::endl;

    playerImage.setTexture(pTexture);


    while(Window.isOpen())
    {
        sf::Event Event;
        while(Window.pollEvent(Event))
        {
            if(Event.type == sf::Event::Closed)
                Window.close();
                break;
        }
        Window.draw(playerImage);
        Window.display();
    }
}