#pragma once
#include <array>

struct GridPoint
{
	char x;
	char y;
};

#pragma once
void SetGridLocation(const GridPoint&, const char); // lets AI (or people) set a grid location
void UpdateGridLocation(const GridPoint&, const char, std::array<std::array<char, 3>, 3>&); // updates the grid location for the AI to see