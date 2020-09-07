#include "stdio.h"
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

int main(int argc, char const *argv[])
{
	std::vector<std::string> vect(&argv[1], &argv[argc]);

	std::sort(vect.begin(), vect.end());

	for (auto& s : vect)
	{
		std::cout<<s;
		std::cout<<'\n';
	}
	return 0;
}