#include "../../headers/objects/Soldier.h"

const float Soldier::body_side = 1.0f;

Soldier::Soldier(point2d position):
    body(position, 
        point2d(position.x() + body_side,
            position.x() + body_side)) {
}

Soldier::~Soldier() {
}

