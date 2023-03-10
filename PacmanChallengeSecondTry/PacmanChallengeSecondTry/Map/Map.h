#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "SFML/Graphics.hpp"

using namespace std;
using namespace sf;

class Map
{
	static const int WIDTH = 34;
	static const int HEIGHT = 36;
	const char map[HEIGHT] [WIDTH];

public:
	const char initMap() {
		ifstream mapFile("Map.txt");
		print("Hello world");
	}
protected:

};

