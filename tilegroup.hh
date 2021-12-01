# incluir < fstream >
# incluye < iostream >
# incluir < cadena >

vacío  CreateTileGroup (std :: ruta de cadena)
{
  std :: ofstream * escritor { nuevo  std :: ofstream ()};

  escritor-> abrir (ruta + " xd " );

  escritor-> cerrar ();

  eliminar escritor;
}