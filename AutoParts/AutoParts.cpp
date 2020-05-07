
#include <iostream>
#include "Autopart.h"
#include "BasePart.h"
 #include "EnginePart.h"

int main()
{
	EnginePart eP;
	EnginePart* eP1 = new EnginePart();

	delete eP1;
}
