# 2Proyecto-C-

#### DESCRIPCIÓN
- La idea de este proyecto es permitir al usuario registrar, organizar y visualizar videojuegos según su género donde el sistema incluye juegos de acción, RPG y aventura gráfica, cada uno con características específicas.
- La clase abstracta Videojuego contiene la información común de todos los juegos, mientras que las clases JuegoAccion, JuegoRPG y JuegoAventuraGrafica heredan de ella mediante herencia. La clase Biblioteca administra los videojuegos almacenados utilizando un vector de apuntadores a Videojuego, permitiendo aplicar polimorfismo. Finalmente, la clase Usuario representa a la persona que utiliza el sistema y posee una biblioteca propia mediante composición mientras la clase Sistema maneja la interaccción con el usuario.

#### PARA QUE SIRVE
- Registrar y almacenar videojuegos
- Agregar videojuegos
- Ver videojuegos registrados
- Mostrar información detallada
- Calificar juegos
- Crear una biblioteca personal
- Buscar videojuegos por nombre
- Agregar y ver videojuegos favoritos

#### PARA QUE NO SIRVE
- Descargar videojuegos
- Ejecutar juegos reales
- Funcionar como una tienda digital real
- Eliminar juegos ya guardados
- Editar infromación de un juego
- Guardar información permanentemente al cerrar el programa

#### CASOS QUE PUEDEN HACER QUE EL PROYECTO DEJE DE FUNCIONAR
- Agregar videojuegos con datos vacios
- Buscar un videojuego inexistente
- Duplicar videojuegos
- Agregar videojuegos con nombres vacíos
- Registrar videojuegos duplicados
  
#### COMO USARLO
- Abrir todos los archivos .cpp en un proyecto de C++ (..., main.cpp)
- Abrir una terminal o consola y navegar a la carpeta donde están los archivos
- Compilar todos los archivos juntos usando un compilador de C++ y ejecutar el programa resultante (en Windows y Linux)
	- g++ main.cpp  -o main.exe
	- /.main.exe
- Compilar todos los archivos juntos usando un compilador de C++ y ejecutar el programa resultante (en IOs)
	- g++ main.cpp  -o main.o
	- ./main.o
