# incluir < fstream >
# incluye < iostream >
# incluir < cadena >

vacío  CreateGameObject (std :: string assetName)
{
  std :: string replaceWord { " TemplateName " };

  std :: ifstream * lector { nuevo  std :: ifstream ()};
  std :: ofstream * escritor { nuevo  std :: ofstream ()};

  std :: string currentLine {};

  / * Creando archivo HH * /

  lector-> abierto ( " cli / templates / GameObjectHH.template " );
  escritor-> abierto ( " incluir / " + nombreActivo + " .hh " );

  while ( std :: getline (* reader, currentLine))
  {
    size_t pos {currentLine. buscar (reemplazar palabra)};

    si (pos! = std :: string :: npos)
    {
      currentLine. reemplazar (pos, replaceWord. length (), assetName);
    }
    * escritor << currentLine << ' \ n ' ;
  }

  lector-> cerrar ();
  escritor-> cerrar ();

  / * creando archivo CC * /

  lector-> abierto ( " cli / templates / GameObjectCC.template " );
  escritor-> abierto ( " src / " + assetName + " .temp " );

  while ( std :: getline (* reader, currentLine))
  {
    size_t pos {currentLine. buscar (reemplazar palabra)};

    si (pos! = std :: string :: npos)
    {
      currentLine. reemplazar (pos, replaceWord. length (), assetName);
    }
    * escritor << currentLine << ' \ n ' ;
  }

  lector-> cerrar ();
  escritor-> cerrar ();

  lector-> abierto ( " src / " + assetName + " .temp " );
  escritor-> abierto ( " src / " + assetName + " .cc " );

  while ( std :: getline (* reader, currentLine))
  {
    size_t pos {currentLine. buscar (reemplazar palabra)};

    si (pos! = std :: string :: npos)
    {
      currentLine. reemplazar (pos, replaceWord. length (), assetName);
    }
    * escritor << currentLine << ' \ n ' ;
  }

  lector-> cerrar ();
  escritor-> cerrar ();

  std :: string removeFile { " src / " + assetName + " .temp " };
  std :: remove (removeFile. c_str ());


  eliminar lector;
  eliminar escritor;
}