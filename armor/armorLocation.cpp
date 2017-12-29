#include "armorLocation.h"

ArmorLocation::ArmorLocation(const Point2d location, const Armor& armor):
Point2d(location) , armor(&armor) {

}
