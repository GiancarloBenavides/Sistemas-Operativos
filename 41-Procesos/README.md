# Sistemas operacionales
<p><code>Fundamentos de sistemas operativos</code></p>
<p>Creado por <code>Giancarlo Ortiz</code> para explicar los fundamentos de los <code>Sistemas operativos</code></p>

## Gestión
La gestión consiste en que el sistema operativo asume responsabilidades sobre los datos y los procesos que sobreviven en un sistema de procesamiento digital.

## Agenda
1. [Los procesos](#1-los-procesos).
1. [Los modos de procesamiento](#2-los-modos-de-procesamiento).
1. [El contexto](#3-el-contexto).
1. [La comunicación entre procesos](#4-la-comunicación-entre-procesos).
1. [El planificador](#5-el-planificador).

<br>

---
# 1. Los procesos
Un [procesos][1_0] en es una tarea en ejecución del sistema operativo que se caracteriza por la realización ordenada de una secuencia de instrucciones, un estado y otros recursos del sistema asociados.

* ><i>"Siempre encuentro a la gente más inteligente que yo. Entonces mi trabajo es asegurarme de que la gente inteligente pueda trabajar junta. Y es que la gente estúpida puede trabajar junta fácilmente, la gente inteligente no."</i><br>
<cite style="display:block; text-align: right">[Jack Ma](https://es.wikipedia.org/wiki/Jack_Ma)</cite>

[1_0]:https://es.wikipedia.org/wiki/Proceso_(inform%C3%A1tica)#

## 1.1. Caracteristicas ✔
* Es el principal concepto en cualquier sistema operativo.
* Los resultados de un proceso pueden ser operaciones [MM][11_1](Datos) o [I/O][11_2].
* Los insumos incluyen recursos de [memoria][11_1], datos e instrucciones.
* Un estado del proceso incluye el [contexto][11_3] de la CPU.
* Cada proceso tiene al menos un [thread][11_4] o hilo de ejecución.
* Los hilos se alternan en un núcleo de CPU de forma [concurrente][11_5], 
* La concurrencia da apariencia de paralelismo (multi-programación).

[11_1]:https://es.wikipedia.org/wiki/Memoria_principal
[11_2]:https://es.wikipedia.org/wiki/Perif%C3%A9rico_de_entrada/salida
[11_3]:https://en.wikipedia.org/wiki/Context_(computing)#
[11_4]:https://es.wikipedia.org/wiki/Hilo_(inform%C3%A1tica)#
[11_5]:https://es.wikipedia.org/wiki/Computaci%C3%B3n_concurrente


## 1.2. Tipos ✔
* [__CPU-bound__][12_1]: Los procesos que contienen un alto uso de procesador 
son llamados CPU-bound o compute-bound.
* [__I/O-bound__][12_2]: Los procesos que realizan muchos accesos a 
operaciones de E/S son llamados I/O-bound.

[12_1]:https://en.wikipedia.org/wiki/CPU-bound
[12_2]:https://en.wikipedia.org/wiki/I/O_bound


## 1.2. Estados de ejecución ✔
* [__Ready__][12_1] o Listo.
* [__Running__][12_1] o Corriendo.
* [__Blocked__][12_1] o Bloqueado.
* [__Swapped__][12_1] o Suspendido.

[12_1]:https://en.wikipedia.org/wiki/Process_state


## 1.3. Diagrama de estados ✔

![diagrama de estado](../22-Almacenamiento/img/process_state_secondary.svg "Estados de una tarea")


# 2. Los modos de procesamiento
Los [modos de procesamiento][2_0] son los modos de operación de las CPU de algunas arquitecturas, que establecen ciertas restricciones sobre el tipo y ámbito de las operaciones que pueden llevar a cabo ciertos procesos cuando se encuentran corriendo.

* ><i>"Siempre encuentro a la gente más inteligente que yo. Entonces mi trabajo es asegurarme de que la gente inteligente pueda trabajar junta. Y es que la gente estúpida puede trabajar junta fácilmente, la gente inteligente no."</i><br>
<cite style="display:block; text-align: right">[Jack Ma](https://es.wikipedia.org/wiki/Jack_Ma)</cite>

[2_0]:https://es.wikipedia.org/wiki/Modos_de_operaci%C3%B3n_de_la_unidad_central_de_procesamiento


## 2.1 Modo Usuario ✔
* Protege frente a fallas catastróficas.
* Asegura la ejecución aislada de cada proceso.
* El proceso puede acceder a su propio espacio de direcciones o [VAS][21_1].
* El proceso no puede acceder al espacio de direcciones de otros procesos.
* El proceso no puede acceder al espacio de direcciones del kernel.
* No permite el acceso a los dispositivos I/O.
* No permite la ejecución de instrucciones privilegiadas.

[21_1]:https://en.wikipedia.org/wiki/Virtual_address_space


## 2.2 Modo Kernel ✔
* Los procesos pueden acceder a las direcciones del kernel y de los usuarios.
* Permite el acceso sin restricciones al hardware.
* Permite la ejecución de instrucciones privilegiadas.
* Se puede producir por una [llamada al sistema][22_1].
* Las instrucciones de I/O se ejecutan en modo Kernel.

[22_1]:https://es.wikipedia.org/wiki/Llamada_al_sistema


# 3. El contexto
Los [modos de procesamiento][2_0] son los modos de operación de las CPU de algunas arquitecturas, que establecen ciertas restricciones sobre el tipo y ámbito de las operaciones que pueden llevar a cabo ciertos procesos cuando se encuentran corriendo.

* ><i>"Siempre encuentro a la gente más inteligente que yo. Entonces mi trabajo es asegurarme de que la gente inteligente pueda trabajar junta. Y es que la gente estúpida puede trabajar junta fácilmente, la gente inteligente no."</i><br>
<cite style="display:block; text-align: right">[Jack Ma](https://es.wikipedia.org/wiki/Jack_Ma)</cite>

[2_0]:https://es.wikipedia.org/wiki/Modos_de_operaci%C3%B3n_de_la_unidad_central_de_procesamiento


## 3.1. Bloque descriptor de proceso ✔
* Un proceso esta representado por el [PCB][31_1].
* El PCB es una estructura de datos formada por campos.
* Esta estructura será el operando de las operaciones del [Planificador][31_2].
* Los campos incluyen la 

[31_1]:https://es.wikipedia.org/wiki/Bloque_de_control_del_proceso
[31_2]:https://es.wikipedia.org/wiki/Planificador


## 3.2. La estructura del PCB ✔

| Identificador de proceso |
|:---|
| __Estado del proceso__ |
| __Context CPU__ | 
|   _Contador de programa_ |
|   _Registros_ |
| __Limites de memoria__ |
| __Lista de archivos abiertos__ |


## 3.3. La estructura del PCB ✔

<p align="center">
    <img src="img/" title="Arquitectura KDE" alt="Arquitectura KDE" width="70%"/>
</p>


## 3.3. El contador de programa ✔
* Cada proceso tiene su [PC][33_1] o program counter.
* Se incrementa cuando el proceso esta corriendo.
* El contexto de la CPU esta formado por el PC y otros registros.
* Un proceso incluye las variables.

[33_1]:https://es.wikipedia.org/wiki/Contador_de_programa


Cambio de contexto

---
## Mas Recursos
- [Emulador](https://es.wikipedia.org/wiki/Emulador) (Wikipedia)
- [Simulador](https://es.wikipedia.org/wiki/Simulador) (Wikipedia)
- [Computación en la nube](https://es.wikipedia.org/wiki/Computaci%C3%B3n_en_la_nube) (Wikipedia)
- [Amazon EC2](https://es.wikipedia.org/wiki/Amazon_EC2) (Wikipedia)
- [Microsoft Azure VM](https://es.wikipedia.org/wiki/Microsoft_Azure) (Wikipedia)
- [Alibaba Cloud ECS](https://en.wikipedia.org/wiki/IBM_Cloud) (Wikipedia)
- [Google Compute Engine](https://en.wikipedia.org/wiki/Google_Compute_Engine) (Wikipedia)
- [IBM Cloud VS](https://en.wikipedia.org/wiki/IBM_Cloud) (Wikipedia)
- [Oracle Cloud VM](https://es.wikipedia.org/wiki/Oracle_Cloud) (Wikipedia)