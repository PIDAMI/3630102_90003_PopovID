#include "SFML/Graphics.hpp"


using namespace sf;

int main() {
	RenderWindow window(sf::VideoMode(400, 400), "Gems");

	while (window.isOpen())
	{
		// ������������ ������� ������� � �����
		Event event;
		while (window.pollEvent(event))
		{
			// ������������ ����� �� �������� � ����� ���� �������?
			if (event.type == Event::Closed)
				// ����� ��������� ���
				window.close();
		}
		

		

		window.display();
	}
	return 0;
}