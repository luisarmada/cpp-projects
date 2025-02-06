export module game;

export class Game {
private:


public:
    Game();
    virtual ~Game();

    void updateSFMLEvents();
    void update();
    void render();
    void run();

};