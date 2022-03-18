# Sistemas operacionales
<p><code>Fundamentos de sistemas operativos</code></p>
<p>Creado por <code>Giancarlo Ortiz</code> para explicar los fundamentos de los <code>Sistemas operativos</code></p>

## Clasificación de sistemas Operativos
Un SO es un conjunto de programas destinados a permitir la comunicación del usuario con el sistema cuando se enciende y ayuda gestionar sus recursos de hardware de manera cómoda y eficiente, por tanto sus caracteristicas están relacionadas con el hardware asociado.


## Agenda
1. [Núcleo](#1-núcleo-de-linux).
1. [Versiones](#2-versiones).
1. [Derivaciones](#3-derivaciones).
1. [Distribuciones](#4-distribuciones).

<br>


---
# 1. Núcleo
El [Kernel][1_0] es un programa de computadora en el núcleo del sistema operativo que se define como la parte que se ejecuta en modo privilegiado y tiene control completo sobre todo en el sistema.

* ><i>"Si algo puede ser uno de los secretos del éxito de Google, eso es Linux."</i><br><cite style="display:block; text-align: right">
[Serguéi Brin](https://es.wikipedia.org/wiki/Sergu%C3%A9i_Brin)</cite>

[1_0]:https://es.wikipedia.org/wiki/N%C3%BAcleo_(inform%C3%A1tica)#


## 1.1. Núcleo Linux ✔
Linux es un clon del sistema operativo Unix, escrito desde cero por Linus Torvalds con la ayuda de un equipo de piratas informáticos de la red. Su objetivo es el cumplimiento de POSIX y Single UNIX Specification.

* Version Estable: [5.16.15][11_0].
* Tamaño: [122 MB][11_0].
* Lineas de código: [32 M][11_0].

[11_0]:https://www.kernel.org/


## 1.2. Estructura monolítica de linux ✔
![Estructura del núcleo Linux](img/linux-kernel.svg "Núcleo de Linux")


## 1.3. Caracteristicas ✔
* Verdadera multi-tarea.
* Memoria virtual.
* Bibliotecas y ejecutables compartidas.
* Carga a pedido.
* Redes de múltiples pilas que incluyen IPv4 e IPv6


## 1.4. Otros Núcleos ✔
* [Match][14_1].
* [GNU/Hurd][14_2].
* [XNU][14_3].
* [FreeRTOS][14_4].

[14_1]:https://es.wikipedia.org/wiki/Mach_(n%C3%BAcleo)#
[14_2]:https://es.wikipedia.org/wiki/GNU_Hurd
[14_3]:https://en.wikipedia.org/wiki/XNU
[14_4]:https://es.wikipedia.org/wiki/FreeRTOS


# 2. Versiones
La [versión][2_0] de un software es un nombre, código o número único que sirve para indicar el nivel de desarrollo de la obra.

* ><i>"Si algo puede ser uno de los secretos del éxito de Google, eso es Linux."</i><br><cite style="display:block; text-align: right">
[Serguéi Brin](https://es.wikipedia.org/wiki/Sergu%C3%A9i_Brin)</cite>

[2_0]:https://es.wikipedia.org/wiki/Versionado_de_software


## 2.1. Control de versiones ✔
* Para la gestión de cambios se existen sistemas de control de versiones o [**VCS**][21_1].
* Linus Torvalds diseño un VSC para gestionar el código de Linux llamado [**GIT**][21_2].
* Existen servicios de alojamiento de código como [**GitHub**][21_3] que integran GIT y facilitan esta gestión de código y el desarrollo colaborativo.

[21_1]:https://es.wikipedia.org/wiki/Control_de_versiones
[21_2]:https://es.wikipedia.org/wiki/Git
[21_3]:https://es.wikipedia.org/wiki/GitHub


## 2.2. Versiones de Linux ✔
Linus Torvalds con el apoyo de la comunidad continúa lanzando versiones “vanilla” del núcleo Linux; para ello usa una numeración de 4 dígitos [A.B.C[.D]][22_0].

* [__A:__][22_0]  versión mayor del núcleo.
* [__B:__][22_0]  versión menor del núcleo.
* [__C:__][22_0]  revision de controladores.
* [__D:__][22_0]  parches de seguridad. 

[22_0]:https://es.wikipedia.org/wiki/N%C3%BAcleo_Linux#Versiones


## 2.3. Sufijos alfanumérico ✔
* [__a:__][22_0] Alfa
* [__b:__][22_0] Beta
* [__rc:__][22_0] Candidato de lanzamiento




# 3. Derivaciones
En ingeniería de software se considera una [bifurcación][2_0] al desarrollo de un proyecto informático tomando como base un código fuente que ya existe.

* ><i>"A todas las mejores personas en la vida, parece gustarles Linux."</i><br><cite style="display:block; text-align: right">
[Steve Wozniak](https://es.wikipedia.org/wiki/Steve_Wozniak)</cite>

[2_0]:https://es.wikipedia.org/wiki/Bifurcaci%C3%B3n_(desarrollo_de_software)#


## 2.1. Derivaciones de Linux ✔
* [__Linux-libre__][21_1].
* [__webOS__][21_2].
* [__Sailfish OS__][21_3].

[21_1]:https://es.wikipedia.org/wiki/Linux-libre
[21_2]:https://es.wikipedia.org/wiki/WebOS
[21_3]:https://es.wikipedia.org/wiki/Sailfish_OS








# 4. Distribuciones
* Versión: [Jammy Jellyfish][4_0]
* Núcleo: monolítico ([Linux][4_1])
* API: [Linux API][4_2]
* GUI: [Gnome][4_3]
* Framework: [GTK][4_4]

![Arquitectura Linux](img/linux.svg "Arquitectura Linux")

[4_0]:https://en.wikipedia.org/wiki/Ubuntu
[4_1]:https://en.wikipedia.org/wiki/Linux_kernel
[4_2]:https://en.wikipedia.org/wiki/Linux_kernel_interfaces
[4_3]:https://en.wikipedia.org/wiki/GNOME
[4_4]:https://en.wikipedia.org/wiki/GTK

![Arquitectura Linux](img/linux.svg "Arquitectura Linux")

---
## Mas Recursos
- [Debate Tanenbaum–Torvalds](https://es.wikipedia.org/wiki/Debate_Tanenbaum%E2%80%93Torvalds) (Wikipedia)
- [Micro-kernel o Monolitivo ](https://www.xataka.com/historia-tecnologica/linux-esta-obsoleto-historia-detras-declaracion-que-provoco-debate-apasionante-acerca-este-sistema-operativo-1) (XATAKA)
- [Computadoras paralelas](https://es.wikipedia.org/wiki/Computaci%C3%B3n_paralela#Clases_de_computadoras_paralelas) (Wikipedia)
- [Concurrencia](https://es.wikipedia.org/wiki/Concurrencia_(inform%C3%A1tica)) (Wikipedia)