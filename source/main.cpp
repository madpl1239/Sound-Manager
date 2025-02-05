/*
 * main.cpp
 * 
 * Test of SoundManager class.
 * 
 * 04-04-2025 by madpl
 */
#include "sndManager.hpp"


int main(void)
{
	SoundManager soundManager;

	soundManager.load("capture", "./resources/capture.ogg");
	soundManager.load("check", "./resources/check.ogg");
	soundManager.load("invalid", "./resources/invalid.ogg");
	soundManager.load("move", "./resources/move.ogg");

	soundManager.play("capture");
	soundManager.play("invalid");

	sf::sleep(sf::milliseconds(300));
	soundManager.update();

	return 0;
}
