# Sistemas operacionales
<p><code>Fundamentos de sistemas operativos</code></p>
<p>Creado por <code>Giancarlo Ortiz</code> para explicar los fundamentos de los <code>Sistemas operativos</code></p>

## Estructura
Un SO es complejo y solo puede entenderse dividiendo su operación en piezas funcionales mas pequeñas, definiendo cuidadosamente entradas, salidas de cada proceso.

## Agenda
1. [Virtualización de datos](#1-virtualización-de-datos).
1. [Virtualización de hardware](#2-virtualización-de-hardware).
1. [Virtualización de software](#3-virtualización-de-software).
1. [Virtualización de infraestructura de red](#4-virtualización-de-infraestructura-de-red).

<br>


---
# 1. Virtualización de datos
La [virtualización de datos][1_0] consiste en integrar datos de fuentes dispersas, en distintas localizaciones y formatos, sin replicar los datos, para construir una capa de datos virtual que facilita la provisión de servicios de datos unificados para dar soporte a múltiples aplicaciones y usuarios.

* ><i>"Siempre encuentro a la gente más inteligente que yo. Entonces mi trabajo es asegurarme de que la gente inteligente pueda trabajar junta. Y es que la gente estúpida puede trabajar junta fácilmente, la gente inteligente no."</i><br>
<cite style="display:block; text-align: right">[Jack Ma](https://es.wikipedia.org/wiki/Jack_Ma)</cite>

[1_0]:https://es.wikipedia.org/wiki/Virtualizaci%C3%B3n_de_datos


## 1.1. Características ✔
* Es una tecnología de integración de datos.
* Normaliza fuentes de datos heterogéneas.
* Ofrece la capacidad de aprovechar grandes volúmenes de datos.
* Permite al usuario manipular los datos en tiempo real.


## 1.2. Diagrama de capas ✔
![Capas de virtualización de datos](img/data-virtualization.svg "Fuentes de datos heterogéneas")

<small>Papers: 
1: [Cevallos Zhunio, J., Noboa Franco, G., Valle Chiriboga, C., & Rodriguez Ve-
lasquez, P. (2020). Virtualización de datos una alternativa moderna de integración de datos. RECIMUNDO](https://dialnet.unirioja.es/descarga/articulo/7591598.pdf)
</small>


# 2. Virtualización de hardware
Un [hipervisor][2_0] o monitor de máquina virtual, [VM][2_1]; es una capa de software que permite realizar virtualización a nivel de hardware y utilizar, al mismo tiempo, diferentes sistemas operativos compartiendo los mismos recursos de hardware de una computadora.

* ><i>"Puedes tener la mejor tecnología, puedes tener el mejor modelo de negocio, pero si no sabes cómo contar tu historia; nada de eso importará. Nadie te verá."</i><br>
<cite style="display:block; text-align: right">[Jeff Bezos](https://es.wikipedia.org/wiki/Jeff_Bezos)</cite>

[2_0]:https://es.wikipedia.org/wiki/Hipervisor
[2_1]:https://es.wikipedia.org/wiki/M%C3%A1quina_virtual


## 2.1. Componentes de la arquitectura ✔
* Un [__hipervisor__][2_0] permite alojar distintas maquinas virtuales.
* El [__Guest__][2_1] o máquina invitada es la máquina virtual.
* El [__Host__][21_1] o anfitrión es la máquina utilizada por el hipervisor.
* La [__Asistencia por hardware__][21_2] mejora la eficiencia.
* Las [__Instantáneas__][21_3] o copias temporal del estado del sistema.

[21_1]:https://es.wikipedia.org/wiki/Host
[21_2]:https://es.wikipedia.org/wiki/Virtualizaci%C3%B3n_x86#Soporte_hardware
[21_3]:https://es.wikipedia.org/wiki/Copia_instant%C3%A1nea_de_volumen


## 2.2. Características ✔
* Permite el despliegue de entornos seguros de ejecución.
* Permite reducir costos y simplificar la gestión.
* Permite la ampliación dinámica de las capacidades del hardware.
* Permite La migración de instantáneas mejora la fiabilidad. 


## 2.3 Tipos de Hipervisor ✔
* [__Virtualización nativa:__][22_1] mejor rendimiento porque el hipervisor se ejecuta directamente sobre el hardware físico.
* [__Virtualización alojada:__][22_2] mejor compatibilidad porque el hipervisor se ejecuta sobre un sistema operativo anfitrión.

[22_1]:https://es.wikipedia.org/wiki/Hipervisor#Hipervisor_tipo_1
[22_2]:https://es.wikipedia.org/wiki/Hipervisor#Hipervisor_tipo_2


## 2.4 Diagrama de capas ✔
![Capas de virtualización con hipervisor](img/type-hypervisors.svg "Tipos de hipervisor")

<small>Papers: 
1: [Fernandez, R. J. (2015). Comparación de performance de Hipervisores.](https://rdu.iua.edu.ar/bitstream/123456789/629/1/TF_Rodrigo%20Fernandez.pdf)
2: [Bermejo, B., & Juiz, C. (2022). A general method for evaluating the overhead when consolidating servers: performance degradation in virtual machines and containers. The Journal of Supercomputing, 1-28.](https://link.springer.com/content/pdf/10.1007/s11227-022-04318-5.pdf)
</small>


## 2.5. Ejemplos de Hipervisor ✔
| Tipo 1 | Tipo 2 |
|:---:|:---:|
| [Hyper-V][23_1] | [Qemu][23_2] |
| [VMware ESXi][23_3] | [Vmware][23_4] |
| [Proxmox VE][23_5] | [Parallels][23_6] |
| [Xen][23_7] | [VirtualBox][23_8] |

[23_1]:https://es.wikipedia.org/wiki/Hyper-V
[23_2]:https://en.wikipedia.org/wiki/QEMU
[23_3]:https://en.wikipedia.org/wiki/VMware_ESXi
[23_4]:https://en.wikipedia.org/wiki/VMware_Workstation
[23_5]:https://es.wikipedia.org/wiki/Proxmox_Virtual_Environment
[23_6]:https://en.wikipedia.org/wiki/Parallels_Server_for_Mac
[23_7]:https://es.wikipedia.org/wiki/Xen
[23_8]:https://en.wikipedia.org/wiki/VirtualBox


# 3. Virtualización de software
Un [ejecutor][3_0] de contenedores o [CT][3_1] es una capa de software que permite realizar una virtualización a nivel de software y utilizar diferentes y aislados espacios de usuario compartiendo los mismos recursos de una aplicación o sistema operativo.

* ><i>"Si no te saltas sobre lo nuevo, no sobrevivirás."</i><br>
<cite style="display:block; text-align: right">[Satya Nadella](https://es.wikipedia.org/wiki/Satya_Nadella)</cite>

[3_0]:https://es.wikipedia.org/wiki/Sistema_en_tiempo_de_ejecuci%C3%B3n
[3_1]:https://es.wikipedia.org/wiki/Virtualizaci%C3%B3n_a_nivel_de_sistema_operativo#Tipos


## 3.1. Componentes de la arquitectura ✔
* Un [__Ejecutor__][3_0] permite ejecutar distintos contenedores.
* Un [__Contenedor__][3_1] o CT es un espacio de usuario aislado.
* Una [__Imagen__][31_1] es una plantilla de solo lectura usada para crear CT.
* Un [__Orquestador__][31_2] permite automatizar el despliegue y escalado de CT.
* Una [__Capsula__][31_3] es un conjunto de CT que comparten recursos en un anfitrión.
* es un archivo que se utiliza para ejecutar código en un contenedor de Docker.

[31_1]:https://hub.docker.com/
[31_2]:https://en.wikipedia.org/wiki/Orchestration_(computing)#
[31_3]:https://es.wikipedia.org/wiki/Kubernetes#Cápsulas_(Pods)


## 3.2. Características ✔
* La virtualización a nivel de software impone poca o ninguna sobrecarga.
* Los CT pueden parecer computadoras reales, pero es una capa mas ligera.
* Aislá aplicaciones del SO subyacente y de aplicaciones.
* los programas dentro de un CT solo pueden ver los dispositivos asignados.
* Pueden ser utilizadas para realizar balanceo de carga.
* Posibilita las migraciones en vivo.


## 3.3 Tipos de Ejecutor ✔
* Virtualización a nivel de sistema operativo.
* Virtualización de escritorio.
* Virtualización de aplicaciones.
* Virtualización de servicios.


## 3.4. Diagrama de capas ✔
![Capas de virtualización con contenedores](img/type-container-engine.svg  "Container-runtime")

<small>Papers: 
1: [Espinosa Tigre, Rodolfo Moisés. (2019). Análisis comparativo de un hipervisor nativo propietario y libre como alternativa de solución para el proceso de almacenamiento de datos. Escuela Superior Politécnica de Chimborazo. Riobamba.](http://dspace.espoch.edu.ec/bitstream/123456789/10832/1/20T01201.pdf)
</small>


## 3.5. Ejemplos de [Container-Runtimes][35_0] ✔
* [Docker](https://es.wikipedia.org/wiki/Docker_(software))
* [Kubernetes](https://es.wikipedia.org/wiki/Kubernetes)
* [OpenShift](https://es.wikipedia.org/wiki/OpenShift)

[35_0]:https://kubernetes.io/docs/setup/production-environment/container-runtimes/


## 4. Virtualización de infraestructura de red
los servicios de [red virtualizados][4_0] son una capa de software que provee una solución similar al componente físico real y son necesarios para comunicar los diferentes componentes virtuales de un sistema informático.  
 
* ><i>"Los servidores físicos, privados o públicos son irrelevantes para el usuario final, Las nubes híbridas se están convirtiendo en la solución predeterminada."</i><br>
<cite style="display:block; text-align: right">[Paul Cormier](https://en.wikipedia.org/wiki/Paul_Cormier_(engineer))</cite>

[4_0]:https://en.wikipedia.org/wiki/Network_as_a_service


## 4.1. Componentes de la arquitectura ✔
* Un [SDN][41_1] es una red definida por software.
* Una [VPC][41_2] es una red de recursos de procesamiento configurable por demanda.
* La [computación en la nube][41_3] es el uso servidores remotos virtualmente integrados.
* la [IaC][41_4] es el aprovisionamiento de centros de datos a través de archivos de definición.

[41_1]:https://es.wikipedia.org/wiki/Redes_definidas_por_software
[41_2]:https://es.wikipedia.org/wiki/Nube_privada_virtual
[41_3]:https://es.wikipedia.org/wiki/Computaci%C3%B3n_en_la_nube
[41_4]:https://es.wikipedia.org/wiki/Infraestructura_como_c%C3%B3digo


## 4.2. Características ✔
* La virtualización utiliza software para imitar las características de un componente del SI y crear un entorno virtual que provea una solución similar al componente real.
* A partir de la fragmentación de componentes de un SI es posible plantear multiples métodos de virtualización, pero en la mayoría de los escenarios necesita construir servicios de red virtualizados.
* En una virtualización de plataforma a nivel de SO o a nivel de aplicación sobre múltiples recursos de red se desea comunicación entre entre espacios de CTs y VMs.


## 4.3. Servicios nube ✔
* [__NaaS:__][42_1] Infraestructura de red.
* [__IaaS__][42_2] Maquinas virtuales para procesamiento.
* [__PaaS:__][42_3] Contenedores de software.

[42_1]:https://en.wikipedia.org/wiki/Network_as_a_service
[42_2]:https://es.wikipedia.org/wiki/Infraestructura_como_servicio_(IaaS)#
[42_3]:https://en.wikipedia.org/wiki/Platform_as_a_service


## 4.3. Diagrama de servicios nube ✔
![Capas de virtualización](img/type-cloud-services.svg  "Servicios")


## 4.5. Ejemplos de servicios en nube  ✔
* [Amazon EC2](https://es.wikipedia.org/wiki/Amazon_EC2) (Wikipedia)
* [Microsoft Azure VM](https://es.wikipedia.org/wiki/Microsoft_Azure) (Wikipedia)
* [Alibaba Cloud ECS](https://en.wikipedia.org/wiki/IBM_Cloud) (Wikipedia)
* [Google Compute Engine](https://en.wikipedia.org/wiki/Google_Compute_Engine) (Wikipedia)
* [IBM Cloud VS](https://en.wikipedia.org/wiki/IBM_Cloud) (Wikipedia)
* [Oracle Cloud VM](https://es.wikipedia.org/wiki/Oracle_Cloud) (Wikipedia)


---
## Mas Recursos
- [Emulador](https://es.wikipedia.org/wiki/Emulador) (Wikipedia)
- [Simulador](https://es.wikipedia.org/wiki/Simulador) (Wikipedia)
- [Computación en la nube](https://es.wikipedia.org/wiki/Computaci%C3%B3n_en_la_nube) (Wikipedia)
