# pragma once
# incluye  " Animation.hh "
# incluir < cadena >
# incluir < mapa >

clase  AnimationSystem
{
privado:
  std :: map <std :: string, Animación *> * animaciones;
  float deltaTime {};
público:
  AnimationSystem ();
  ~ AnimationSystem ();

  Animación * GetAnimation (std :: string animationName) const ;
  Void  Play (std :: string animationName);
  void  AddAnimation (std :: string animationName, Animación * animación);
  nula  actualización ( float y DeltaTime);
};