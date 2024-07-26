# OS-Apuntes2
Esto seria un taller del lenguague de progemacion en C.

Instrucciones

Utilizaremos toda la lección para practicar con el lenguaje de programación C. Primero que
nada deben crear un repositorio de GitHub llamado Apuntes2-Nombre Estudiante.
Importante, creen el repositorio con un archivo README.MD.

● Clone su repositorio: Para esto puede utilizar el comando git clone <url_repositorio>
● Configuración de CMake
    ○ Pueden seguir el siguiente link para más información
    ○ Cree un archivo main.c con solamente las librerías stdio, stdlib y un entry point
        vacío
    ○ Cree un archivo CMakeLists.txt como el profesor lo ha mostrado en las clases
        anteriores
    ○ Abrir la paleta de comandos de VS Code (Ctrl + Shift + P)
    ○ Seleccionar CMake: Select a Kit
        ■ Un kit es básicamente un serie de tools que va a utilizar CMake
            para construir nuestro proyecto (Compilador, Linker, Debugger, etc)
    ○ Seleccione un Kit de la lista
    ○ Abrir la paleta de comandos
    ○ Seleccionar CMake: Select Variant
        ■ Un Variant es algo así como una configuración del proyecto, vamos
            a seleccionar debug por el momento
    ○ Abrir la paleta de comandos
    ○ Seleccionar CMake: Configure

Posterior a correr todos estos pasos podrán utilizar CMake en su proyecto
La barra de status de VS Code indica las acciones que pueden realizar

● Clickear donde dice Build compila todo el proyecto
● Tenemos un botón para correr el proyecto y otro para debuggearlo
