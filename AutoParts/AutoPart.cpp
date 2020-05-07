

#include<iostream>
#include "Autopart.h"

using namespace std;

// 
AutoPart::AutoPart() {
	cout << "In AutoPart constructor: " << _PartDescription << endl;
};


AutoPart::AutoPart(int PartNo, string PartDescription, int PartMaker) : BasePart(PartNo) {
	_PartDescription = PartDescription;
	_PartMaker = PartMaker;
	cout << "In AutoPart constructor: ";
	PrintPart();
}


AutoPart:: ~AutoPart()
{
	cout << "In AutoPart destructor: ";
	PrintPart();
}; // destructor

/// <summary>
/// Prints the AutoPart BasePart number, maker ID and description
/// </summary>
void AutoPart::PrintPart() {
	cout << BasePart::_PartNo << "\t" << _PartMaker << "\t" << _PartDescription << endl;
}
