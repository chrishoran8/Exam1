#include <iostream>
using namespace std;
#include "functions.h"

float calcVat(float cost) {
	return cost / 100 * 20 + cost;
}