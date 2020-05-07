#pragma once
class EnginePart : protected AutoPart
{
private:

public:
	int _EngineSpecNo = 1;
	EnginePart();
	EnginePart(int ,int , string , int );
		~EnginePart();
};

