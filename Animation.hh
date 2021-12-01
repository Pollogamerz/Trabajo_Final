# incluir < fstream >
# incluye < iostream >
# incluir < cadena >

anular  CreateAnimation ( char ** y argv)
{
  std :: ruta de la cadena {argv [ 2 ]};
  std :: string startFrame {argv [ 3 ]};
  std :: string endFrame {argv [ 4 ]};
  std :: string animationDelay {argv [ 5 ]};
  std :: string currentAnimation {argv [ 6 ]};

  std :: ofstream * escritor { nuevo  std :: ofstream ()};

  escritor-> abrir (ruta + " .animacion " );
  * escritor << startFrame;
  * escritor << "  " + endFrame;
  * escritor << "  " + animationDelay;
  * escritor << "  " + currentAnimation;

  escritor-> cerrar ();

  eliminar escritor;
}