
#include <iostream>
#include "BasePart.h"

using namespace std;


BasePart::BasePart() {
	cout << "In BasePart Constructor: " << _PartNo << endl;
};

BasePart::BasePart(int PartNo) {
	_PartNo = PartNo;
	cout << "In BasePart Constructor: " << _PartNo << endl;
};


BasePart::~BasePart() {
	cout << "In BasePart Destructor: " << _PartNo << endl;
}
