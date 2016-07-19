# Control de Tiras de Leds

Se trata de controlar tiras de leds RGB

## Electricidad

Las tiras de leds usualmente necesitan 12v y dependiendo del número de leds, más o menos intensidad (amperios)
(el voltaje será el mismo haya 10 o 100 leds, pero necesitamos ir incrementando la intensidad al añadir más leds)

Supongamos una tira que consume unos 0,3A por metro. Si usamos 10 metros necesitaremos proporcionar 3 amperios

¿Cálculos de consumos?

## Montaje

Usamos un transistor para poder proporcionar la intensidad suficiente a la tira conectada (una patilla de Arduino no puede proporcionar más de 40mA (0,04A))

![transistor](./images/ledstripbjt.gif)

¿Transistores compatibles?

## Código

Con el montaje utilizado basta con activar la salida correspondinete de Arduino para que se encienda la tira de leds conectada a ese transistor

[Código](./codigo/MontajeLedRGB/MontajeLedRGB.ino))
