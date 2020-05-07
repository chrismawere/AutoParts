#include "EnginePart.h"
#include "AutoPart.h"

EnginePart::EnginePart()
{
	cout << "I've been created"<<endl;
}

EnginePart::EnginePart(int EngineSpecNo, int PartNo, string PartDescription, int PartMaker): AutoPart(PartNo, PartDescription, PartMaker)
{
	_EngineSpecNo = EngineSpecNo;
}

EnginePart::~EnginePart()
{
	cout << "I've been destroyed" << endl;
}