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

* ><i>"La gente con conocimientos técnicos está dispuesta a perdonar a un ordenador que se cuelga un par de veces al año, pero los usuarios normales no."</i><br><cite style="display:block; text-align: right">
[Andrew S. Tanenbaum](https://es.wikipedia.org/wiki/Andrew_S._Tanenbaum)</cite>

[1_0]:https://es.wikipedia.org/wiki/N%C3%BAcleo_(inform%C3%A1tica)#


## 1.1. Núcleo Linux ✔
Linux es un clon del sistema operativo Unix escrito, desde cero, por Linus Torvalds con la ayuda de un equipo de piratas informáticos de la red con el objetivo es el cumplimiento de POSIX y Single UNIX Specification.

* Version Estable: [5.16.15][11_0].
* Tamaño: [122 MB][11_0].
* Lineas de código: [32 M][11_0].
* Licencia [GPL v2][11_1]

[11_0]:https://www.kernel.org/
[11_1]:https://es.wikipedia.org/wiki/GNU_General_Public_License
[11_2]:https://en.wikipedia.org/wiki/Linux_kernel

## 1.2. Estructura monolítica de linux ✔
* [__Scheduler:__][12_1] Planificador de tareas.
* [__MM__][12_2]: Gestión de memoria.
* [__IPC__][12_3]: Comunicación entre procesos.
* [__VFS__][12_4]: Sistema de archivos virtual.
* [__VFS__][12_5]: Pila de red.

![Estructura del núcleo Linux](img/linux-kernel.svg "Núcleo de Linux")

[12_1]:https://es.wikipedia.org/wiki/Planificador
[12_2]: https://es.wikipedia.org/wiki/Gesti%C3%B3n_de_memoria
[12_3]:https://es.wikipedia.org/wiki/Comunicaci%C3%B3n_entre_procesos
[12_4]:https://es.wikipedia.org/wiki/Sistema_de_archivos_virtual
[12_5]:https://en.wikipedia.org/wiki/Network_scheduler


## 1.3. Caracteristicas Linux ✔
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
* Existen servicios de alojamiento de código en la nube como [**GitHub**][21_3].
* Estos servicios integran GIT y otras herramientas que facilitan el desarrollo colaborativo.

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
* [__a:__][23_0] Alfa
* [__b:__][23_0] Beta
* [__rc:__][23_0] Candidato de lanzamiento

[23_0]:https://en.wikipedia.org/wiki/Software_versioning


# 3. Derivaciones
En ingeniería de software se considera una [bifurcación][3_0] al desarrollo de un proyecto informático tomando como base un código fuente que ya existe.

* ><i>"A todas las mejores personas en la vida, parece gustarles Linux."</i><br><cite style="display:block; text-align: right">
[Steve Wozniak](https://es.wikipedia.org/wiki/Steve_Wozniak)</cite>

[3_0]:https://es.wikipedia.org/wiki/Bifurcaci%C3%B3n_(desarrollo_de_software)#


## 3.1. Derivaciones de Linux ✔
* [__Linux-libre__][31_1].
* [__RTLinux__][31_2].
* [__L4Linux__][31_3].
* [__webOS__][31_4].
* [__Android__][31_5].
* [__Tizen__][31_6].
* [__Sailfish OS__][31_7].


[31_1]:https://es.wikipedia.org/wiki/Linux-libre
[31_2]:https://es.wikipedia.org/wiki/RTLinux
[31_3]:https://en.wikipedia.org/wiki/L4Linux
[31_4]:https://es.wikipedia.org/wiki/WebOS
[31_5]:https://es.wikipedia.org/wiki/Android
[31_6]:https://es.wikipedia.org/wiki/Tizen
[31_7]:https://es.wikipedia.org/wiki/Sailfish_OS


# 4. Distribuciones
Una [distribución][4_0] Linux es una colección de software basada en el núcleo Linux y herramientas de software o bibliotecas en paquetes de software que pretende satisfacer las necesidades de un grupo específico de usuarios.

* ><i>"Microsoft ama a Linux."</i><br><cite style="display:block; text-align: right">
[Satya Nadella](https://es.wikipedia.org/wiki/Satya_Nadella)</cite>

[4_0]:https://es.wikipedia.org/wiki/Distribuci%C3%B3n_Linux


## 4.1. Distribuciones de Linux ✔
* [__Debian__][41_1]: Gnome3 - Kde - Cinnamon - Lxde - Lxqt - mate - xfce.
* [__Ubuntu Desktop__][41_2]: Gnome3 - Kde - Budgie - Lxqt - mate - xfce.
* [__Mint__][41_3]: Cinnamon - mate - xfce.
* [__Kde neon__][41_4]: Kde.
* [__elementary OS__][41_5]: Pantheon.
* [__Pop!\_OS__][41_6]: Cosmic.
* [__Deepin__][41_7]: DDE.

[41_1]:https://cdimage.debian.org/cdimage/unofficial/non-free/cd-including-firmware/current-live/amd64/iso-hybrid/
[41_2]:https://ubuntu.com/download
[41_3]:https://linuxmint.com/download_all.php
[41_4]:https://neon.kde.org/download
[41_5]:https://elementary.io/es/
[41_6]:https://pop.system76.com/
[41_7]:https://www.deepin.org/en/download/


## 4.2. Distribuciones con otros kernels ✔
* [__Debian GNU/Hurd__][42_1]: Kernel Hurd.
* [__Debian GNU/kFreeBSD__][42_2] Kernel BSD.
* [__Openindiana__][42_3]: Kernel Illumos.

[42_1]:https://www.debian.org/ports/hurd/index.es.html
[42_2]:https://www.debian.org/ports/kfreebsd-gnu/index.es.html
[42_3]:https://www.openindiana.org/download/


## 4.2. Arquitectura distribuciones de Linux ✔

![Arquitectura Linux](img/linux.svg "Arquitectura Linux")


---
## Mas Recursos
- [Linux From Scratch](https://es.wikipedia.org/wiki/Linux_From_Scratch) (Wikipedia)
- [Modularidad Linux](https://es.wikipedia.org/wiki/Portabilidad_del_n%C3%BAcleo_Linux_y_arquitecturas_soportadas) (Wikipedia)
- [GNU GRUB](https://es.wikipedia.org/wiki/GNU_GRUB) (Wikipedia)
- [Btrfs](https://es.wikipedia.org/wiki/Btrfs) (Wikipedia)
- [ext4](https://es.wikipedia.org/wiki/Ext4) (Wikipedia)