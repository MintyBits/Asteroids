#include <iostream>
#include <complex>
#include <numeric>
#include <list>
#include <algorithm>

#include <SDL3/SDL.h>

struct Vector2 {
  int x, y;
};

class Entity {
public:
  Entity() {
    // TODO: Generate random UUID
  }

  // On colliding with this entity how will you react? also both entities are deleted after the function is called.
  virtual void onCollision(Entity& ent) {};
  
  virtual void update() {};
  virtual void draw(const SDL_Renderer* renderer) {};

  bool operator==(const Entity& other) const {
    return uuid == other.uuid;
  }
  
  enum class Type {
    ASTEROID,
    SPACESHIP,
    INVADER
  };

  Entity::Type type;
  Vector2 position;
  Vector2 velocity;
  int uuid;
};

std::list<Entity> entityList;

class Game {
public:
  Game(int screen_width, int screen_height);

  void draw();
  void update();
  
  void checkCollision();
private:
  SDL_Window* window;
  SDL_Renderer* renderer;

  std::list<Entity> entityList;
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
    // delete self with cool animation
    entityList.remove(entity);
  }
  
  void update() override {

  }
  
};

int main() {
	return 0;
}
