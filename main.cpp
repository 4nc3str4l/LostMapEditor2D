#include <iostream>
#include "gfx/window.h"

int main(int argc, char** argv)
{
    auto w = le::Window{800, 600, "Lost Engine"};

	if (!w.init()) 
	{
		return -1;
	}


    while (!w.isClosed())
    {
		w.clear();

		
		w.update();
    }

    return 0;
}