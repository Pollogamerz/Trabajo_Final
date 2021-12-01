# pragma once
# incluye  " SFML / Graphics.hpp "
# incluir < fstream >
# incluir < cadena >

 animación de clase
{
privado:
  std :: ifstream * lector {};
  sf :: Sprite * sprite;
  int animationIndex {};
  int startFrame {};
  int endFrame {};
  float animationDelay {};
  float currentTime {};
  int currentAnimation {};
público:
  Animación ();
  Animación (sf :: Sprite * sprite, std :: string animationUrl);

  void  Play ( flotar y deltaTime);
  ~ Animación ();
};