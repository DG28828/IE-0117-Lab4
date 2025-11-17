# IE-0117-Lab4
Repositorio para la entrega del Laboratorio 5 del curso IE-0117 Programacion Bajo PLataformas Abiertas.

El presente repositorio contiene el código fuente para compilar el programa solicitado. La estructura de datos escogida fué **Arreglos Dinámicos**.

## Contenido
El repositorio se compone de la siguiente estructura de directorios:

├── include
│   └── arreglos_dinamicos.h
└── src
    ├── arreglos_dinamicos.c
    └── main.c
├── Makefile
├── README.md

La carpeta **src/** contiene el código compilable, mientras que la carpeta **include/** contiene los archivos de encabezados a incluir durante la compilación.

## Compilación y ejecución
La forma de compilar es por medio del programa _make_ que procesa el archivo **Makefile**.

>Se pretende que el código sea compilado en alguna distribución de Linux.

El archivo **Makefile** contiene las instrucciones de compilación, ejecución y verificación de errores. Las instrucciones brindadas son:

- **make**: compila en un archivo resultante **main**.
- **make run**: compila y ejecuta el archivo **main**.
- **make clean**: borra los archivos .o resultantes de la compilación y el archivo compilado **main**.
- **make Valgrind**: realiza un análisis en búsqueda de mal manejo de memoria.

En caso de correr únicamente **make**, es posible ejecutar el archivo resultante con **./main**.
