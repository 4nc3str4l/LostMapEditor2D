#include <iostream>
#include "le/logic/lost_engine.h"
#include "lost_map.h"

int main(int argc, char** argv)
{
	le::LostEngine(argv, new LostMapEditor("Lost Map Editor 2D", 1200, 800)).start();
    return 0;
}