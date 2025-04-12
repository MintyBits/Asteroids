#include <iostream>
#include <complex>
#include <numeric>
#include <list>


struct Vector2 {
  int x, y;
};

class Entity {
public:
  // On colliding with this entity how will you react? also both entities are deleted after the function is called.
  virtual void onCollision(Entity& ent) = 0;
  
  virtual void update() = 0;
  virtual void draw() = 0;
  
  enum class Type {
    ASTEROID,
    SPACESHIP,
    INVADER
  };

  Entity::Type type;
  Vector2 position;
  Vector2 velocity;

};

class Asteroid : public Entity {
public:
  Asteroid(Vector2 pos, Vector2 vel) {
    position.x = pos.x;
    position.y = pos.y;

    velocity.x = vel.x;
    velocity.y = vel.y;

    type = Entity::Type::ASTEROID;
  }

  void onCollision(Entity& entity) override {

  }
  
  void update() override {

  }

};

int main() {

	return 0;
}
