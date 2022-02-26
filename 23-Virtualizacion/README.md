# Sistemas operacionales
<p><code>Fundamentos de sistemas operativos</code></p>
<p>Creado por <code>Giancarlo Ortiz</code> para explicar los fundamentos de los <code>Sistemas operativos</code></p>

## Virtualización
La virtualización utiliza software para imitar las características de un componente de un sistema informático y crear un entorno virtual que provea una solución similar al componente real.

## Agenda
1. [Virtualización de datos](#1-virtualización-de-datos).
1. [Virtualización de hardware](#1-virtualización-de-hardware).
1. [virtualización de software](#2-contenerización).
1. [virtualización de infraestructura](#2-contenerización).

<br>

---
# 1. Virtualización de datos
La [virtualización de datos][1_0] Consiste en integrar datos de fuentes dispersas, en distintas localizaciones y formatos, sin replicar los datos, para construir una capa de datos virtual que facilita la provisión de servicios de datos unificados para dar soporte a múltiples aplicaciones y usuarios.

* ><i>"Siempre encuentro a la gente más inteligente que yo. Entonces mi trabajo es asegurarme de que la gente inteligente pueda trabajar junta. Y es que la gente estúpida puede trabajar junta fácilmente, la gente inteligente no."</i><br>
<cite style="display:block; text-align: right">[Jack Ma](https://es.wikipedia.org/wiki/Jack_Ma)</cite>

[1_0]:https://es.wikipedia.org/wiki/Virtualizaci%C3%B3n_de_datos

## 1.1. Características
* Es una tecnología de integración de datos.
* Normaliza fuentes de datos heterogéneas.
* Ofrece la capacidad de aprovechar grandes volúmenes de datos.
* Permite al usuario manipular los datos en tiempo real.

## 1.2. Diagrama de capas
![Capas de virtualización de datos](img/data-virtualization.svg "Fuentes de datos heterogéneas")

<small>Papers: 
1: [Cevallos Zhunio, J., Noboa Franco, G., Valle Chiriboga, C., & Rodriguez Ve-
lasquez, P. (2020). Virtualización de datos una alternativa moderna de integración de datos. RECIMUNDO](https://dialnet.unirioja.es/descarga/articulo/7591598.pdf)
</small>


# 2. Virtualización de hardware
Un [hipervisor][11_0] o monitor de máquina virtual, [(VM)][11_1]; es una capa de software que permite realizar virtualización a nivel de hardware y utilizar, al mismo tiempo, diferentes sistemas operativos compartiendo los mismos recursos de hardware de una computadora.

* ><i>"Puedes tener la mejor tecnología, puedes tener el mejor modelo de negocio, pero si no sabes cómo contar tu historia; nada de eso importará. Nadie te verá."</i><br>
<cite style="display:block; text-align: right">[Jeff Bezos](https://es.wikipedia.org/wiki/Jeff_Bezos)</cite>

[11_0]:https://es.wikipedia.org/wiki/Hipervisor
[11_1]:https://es.wikipedia.org/wiki/M%C3%A1quina_virtual


## 2.1. Características
* Es una tecnología de integración de datos.
* Normaliza fuentes de datos heterogéneas.
* Ofrece la capacidad de aprovechar grandes volúmenes de datos.
* Permite al usuario manipular los datos en tiempo real.


## 2.2 Tipos de Hipervisor
![Hipervisor](img/type-hypervisors.svg "Tipos de hipervisores")

<small>Papers: 
1: [Fernandez, R. J. (2015). Comparación de performance de Hipervisores.](https://rdu.iua.edu.ar/bitstream/123456789/629/1/TF_Rodrigo%20Fernandez.pdf)
2: [Bermejo, B., & Juiz, C. (2022). A general method for evaluating the overhead when consolidating servers: performance degradation in virtual machines and containers. The Journal of Supercomputing, 1-28.](https://link.springer.com/content/pdf/10.1007/s11227-022-04318-5.pdf)
</small>


## 1.4. Ejemplos de Hipervisor
| Tipo 1 | Tipo 2 |
|:---:|:---:|
| [Hyper-V][14_1] | [Qemu][14_2] |
| [VMware ESXi][14_3] | [Vmware][14_4] |
| [Proxmox VE][14_5] | [Parallels][14_6] |
| [Xen][14_7] | [VirtualBox][14_8] |

[14_1]:https://es.wikipedia.org/wiki/Hyper-V
[14_2]:https://en.wikipedia.org/wiki/QEMU
[14_3]:https://en.wikipedia.org/wiki/VMware_ESXi
[14_4]:https://en.wikipedia.org/wiki/VMware_Workstation
[14_5]:https://es.wikipedia.org/wiki/Proxmox_Virtual_Environment
[14_6]:https://en.wikipedia.org/wiki/Parallels_Server_for_Mac
[14_7]:https://es.wikipedia.org/wiki/Xen
[14_8]:https://en.wikipedia.org/wiki/VirtualBox


# 3. Virtualización de software
Un motor de contenedores o [CT][11_0] es una capa de software que permite realizar una virtualización a nivel de software y utilizar diferentes y aislados espacios de usuario compartiendo los mismos recursos de una aplicación o sistema operativo.

* ><i>"Puedes tener la mejor tecnología, puedes tener el mejor modelo de negocio, pero si no sabes cómo contar tu historia; nada de eso importará. Nadie te verá."</i><br>
<cite style="display:block; text-align: right">[Jeff Bezos](https://es.wikipedia.org/wiki/Jeff_Bezos)</cite>

[11_0]:https://es.wikipedia.org/wiki/Hipervisor


## 1.2. Diagrama de capas
![Capas de virtualización de datos](img/data-virtualization.svg "Fuentes de datos heterogéneas")

<small>Papers: 
1: [Espinosa Tigre, Rodolfo Moisés. (2019). Análisis comparativo de un hipervisor nativo propietario y libre como alternativa de solución para el proceso de almacenamiento de datos. Escuela Superior Politécnica de Chimborazo. Riobamba.](http://dspace.espoch.edu.ec/bitstream/123456789/10832/1/20T01201.pdf)
</small>



aislados o [contenedores][11_1] donde las aplicaciones de software pueden ejecutarse con seguridad 
 sistemas operativos sin modificar en una misma computadora.
Un [Contenedor][] es un espacio de usuario aislado 
es una virtualización a nivel de sistema operativo o a nivel de aplicación sobre múltiples recursos de red para q en espacios de contenedores en cualquier entorno de nube o no nube, independientemente del tipo o proveedor.


# 3. Simulación
Un [hipervisor][11_0] (en inglés hypervisor) o monitor de máquina virtual (virtual machine monitor)1​ es una capa de software para realizar una virtualización de hardware que permite utilizar, al mismo tiempo, diferentes sistemas operativos (sin modificar o modificados, en el caso de paravirtualización) en una misma computadora.

* ><i>"Puedes tener la mejor tecnología, puedes tener el mejor modelo de negocio, pero si no sabes cómo contar tu historia; nada de eso importará. Nadie te verá."</i><br>
<cite style="display:block; text-align: right">[Jeff Bezos](https://es.wikipedia.org/wiki/Jeff_Bezos)</cite>

[11_0]:https://es.wikipedia.org/wiki/Hipervisor


# 4. Emulación
Un [hipervisor][11_0] (en inglés hypervisor) o monitor de máquina virtual (virtual machine monitor)1​ es una capa de software para realizar una virtualización de hardware que permite utilizar, al mismo tiempo, diferentes sistemas operativos (sin modificar o modificados, en el caso de paravirtualización) en una misma computadora.

* ><i>"Puedes tener la mejor tecnología, puedes tener el mejor modelo de negocio, pero si no sabes cómo contar tu historia; nada de eso importará. Nadie te verá."</i><br>
<cite style="display:block; text-align: right">[Jeff Bezos](https://es.wikipedia.org/wiki/Jeff_Bezos)</cite>

[11_0]:https://es.wikipedia.org/wiki/Hipervisor

## 1.1. Tipos de virtualización
* Virtualización de datos.
* Virtualización del hardware de una computadora.
* Virtualización de sistema operativo.
* Virtualización de la infraestructura de red.

---
## Mas Recursos
- [Sistema operativo](https://es.wikipedia.org/wiki/Sistema_operativo) (Wikipedia)
1. [Simulación](#3-simulación).
1. [Emulación](#4-emulación).