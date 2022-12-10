#include <array>

#pragma once
void SetGridLocation(const int, const char); // lets AI (or people) set a grid location
void UpdateGridLocation(const int, const char, std::array<std::array<std::array<int, 3>, 3>, 3>&); // updates the grid location for the AI to see