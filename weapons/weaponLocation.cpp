#include "weaponLocation.h"

WeaponLocation::WeaponLocation(const Point2d location, const Weapons& weapon):
Point2d(location) , weapon(&weapon) {

}
