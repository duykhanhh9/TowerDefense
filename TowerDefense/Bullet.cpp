#include "Bullet.h"

void Bullet::move() {
    if (isActive) {
        x += dx * speed * 2;
        y += dy * speed;
    }

    if (x < 10 || y < 10 || x >= BUFFER_WIDTH || y >= BUFFER_HEIGHT) {
        deactivate();
    }
}
