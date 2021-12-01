# incluye < iostream >
# include  " CreateGameObject.hh "
# incluye  " CreateAnimation.hh "
# incluye  " CreateTileGroup.hh "

int  main ( int argc, char ** argv)
{
  std :: string action {argv [ 1 ]};

  interruptor (argc)
  {
  caso  3 :
    if (action == " creategameobject " )
    {
      CreateGameObject (argv [ 2 ]);
    }
    si (acción == " createtilegroup " )
    {
      CreateTileGroup (argv [ 2 ]);
    }
    romper ;
  caso  7 :
    si (acción == " crear animación " )
    {
      CreateAnimation (argv);
    }
  romper ;
  por defecto :
    romper ;
  }

  return  0 ;
}