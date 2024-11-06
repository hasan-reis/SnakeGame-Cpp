class MainMenu { 
public:
  Menu(sf::RenderWindow &w);
  void start();

private:
  void setup_menu_context();

  sf::RenderWindow &_window;
  sf::Font _font;
  game_menu::MENU *_current_menu;
  std::unique_ptr<game_menu::MENU, std::function<void(game_menu::MENU *)>>
      _menu_context;
  bool _is_exit_requested = false;
};
} // namespace game

#endif