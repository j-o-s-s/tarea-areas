#Investigación : Fundamentos de RTOS

**1. ¿Qué significa RTOS y qué problema resuelve
    ? **RTOS significa Real -
          Time Operating System(Sistema operativo en tiempo real),
    garantiza que ciertas tareas se ejecuten dentro de un límite de tiempo,
    controla qué corre,
    cuándo y con qué prioridad

            * *
        2. ¿Diferencia entre un SO de propósito
        general(Windows / Linux) y un RTOS
    ? **Un OS de propósito general(Windows, Linux)
está diseñado para manejar muchas tareas variadas priorizando el rendimiento y
    la experiencia del usuario,
    un RTOS garantiza que una tarea crítica responda siempre dentro de un tiempo
        definido,
    aunque sacrifique rendimiento general

                    * *
                3. ¿Qué diferencia hay entre hard real -
            time y soft real - time
        ? Da un ejemplo de cada uno.*****Hard real - time
        : **Si no se cumple la fecha límite de respuesta,
    el sistema falla catastróficamente.*Ejemplo
    : *El sistema de despliegue de una bolsa de aire en un auto ***Soft real -
        time : **Si no se cumple la fecha límite,
    la calidad del sistema se degrada,
    pero no es fatal ni el sistema se detiene.*Ejemplo
    : *La transmisión de video en
      vivo(si un frame llega tarde, el video se traba un momento,
           pero el sistema continúa)

        * *4. ¿Qué es una tarea(task)
y qué es un scheduler en un RTOS
    ? *****Tarea(Task)
    : **Es un bloque de código independiente que ejecuta una función
       específica dentro del sistema,
    como un hilo ***Scheduler(Planificador)
    : **Es el núcleo del RTOS,
      se encarga de decidir qué tarea debe
              ejecutarse en cada instante de tiempo de acuerdo a sus prioridades

              * *5. ¿Qué es la prioridad de una tarea y qué significa la
                expropiación(preemption)
          ? *****Prioridad
      : **Define qué tan urgente es una tarea respecto a las demás *
              **Expropiación(Preemption)
    : **Significa que una tarea de mayor prioridad está lista y debe
      interrurmpir inmediatamente la que se está
      ejecutando para darle el control del procesador

              * *6. ¿Para qué sirven los mecanismos de
                sincronización(semáforos, mutexes y colas)
          ? **Para coordinar de forma segura el acceso a recursos compartidos
                entre tareas simultáneas y permitir que se comuniquen y
                transfieran datos entre sí sin perdida de información

                * *7. Diferencia entre semáforos y mutex.*****Semáforo
          : **Sirve como un contador donde cualquier tarea puede incrementarlo o
             decrementarlo,
      señaliza eventos o limita acceso a N recursos * **Mutex(Mutual Exclusion)
    : **Este es más exclusivo,
      solo la tarea que lo tomo para usar el recurso,
      y solo esa misma puede liberarlo, protege recursos compartidos

                                            * *8. ¿Qué es una mailbox
      ? **Es un mecanismo de comunicación entre tareas(IPC)
que permite enviar y recibir un único
mensaje(generalmente punteros o variables simples),
    típicamente solo guarda el último valor recibido

            * *
        9. ¿Qué es una interrupción y cómo se relaciona con un RTOS
    ? **Una interrupción es una señal asíncrona de hardware o software que debe
       ser atendida inmediatamente por el procesador,
    en un RTOS las interrupciones están integradas con el scheduler,
    asi pueden despertar una tarea de alta prioridad,
    que se encargará del procesamiento real

            * *
        10. Ejemplos de RTOS populares
    : **1. FreeRTOS 2. Zephyr 3. Micrium µC /
          OS

              * *
          11. Ejemplos reales de dispositivos o industrias donde se usan
    : *****Industria Automotriz(ECUs y ABS)
    : **Los sistemas de frenos antibloqueo necesitan leer sensores y actuar
      sobre los frenos en milisegundos exactos,
un retraso causaría un accidente * **Dispositivos
                                    Médicos(Ventiladores mecánicos)
    : **Deben suministrar oxígeno y medir la presión pulmonar del paciente con
      un determinismo temporal estricto para mantenerlo con vida sin fallas
      temporales
