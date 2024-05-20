# POUBELLE INTELLIGENTE


| | |
|-|-|
|`Mihalcea Andreea-Elena` | 


## Description
J'ai développé un projet de séparation des déchets basé sur Arduino, qui peut trier automatiquement les déchets plastiques et métalliques en utilisant des capteurs et des actionneurs. De plus, notre projet peut également détecter lorsque la poubelle est pleine et alerter l'utilisateur ou le service de gestion des déchets.

## Motivation
 L'une des principales problématiques environnementales auxquelles nous sommes confrontés aujourd'hui est l'élimination et le recyclage corrects des déchets. Beaucoup de ces déchets, comme le plastique et le métal, peuvent être réutilisés ou recyclés s'ils sont séparés du reste des ordures. Cependant, le tri manuel des déchets est fatigant, chronophage et inefficace. C'est pourquoi nous avons décidé de créer une telle poubelle qui aide à résoudre le problème du recyclage des emballages en plastique et en métal.

## Architecture
L'architecture du système comprend :
Arduino Mega: Agit comme l'unité de contrôle centrale.
Fils de Connexion : Facilitent les connexions entre les composants sur une plaque d'essai.
2x Module Ultrasonique HC-SR04
2x Moteur Servo MICRO SERVO TOWER PRO 9G : Contrôle l'ouverture et la fermeture du couvercle de la poubelle.
Capteur de proximité capacitif (PNP, sortie NO, 6 ~ 12 V)
2x Capteur de proximité inductif (PNP, sortie NO, 6 ~ 12 V)
2x Batterie 9~12V
2x Poubelle
2x Led
3x Resistors
Breadbord

### Block diagram
Le schéma de bloc représente visuellement les connexions entre l'Arduino Uno, le capteur ultrasonique, le moteur servo et les autres composants.
<!-- Make sure the path to the picture is correct -->
![Block Diagram](block_diagram.jpg)

### Schematic

![Schematic](schema.png)

### Components


<!-- This is just an example, fill in with your actual components -->


| Device | Usage | Price |
|--------|--------|-------|
| Arduino Mega | Contrôleur principal | [73 RON](https://www.optimusdigital.ro/ro/compatibile-cu-arduino-mega/471-placa-de-dezvoltare-compatibila-cu-arduino-mega-2560-atmega2560-ch340.html?search_query=%09Placa+de+dezvoltare+compatibila+cu+Arduino+MEGA+2560+%28ATmega2560+++CH340%29&results=5) |
| 2x Moteur Servo MICRO SERVO TOWER PRO 9G | Mouvement du couvercle | [28 RON](https://www.optimusdigital.ro/ro/motoare-servomotoare/26-micro-servomotor-sg90.html?search_query=Micro+Servomotor+SG90+90%C2%B0&results=9) |
|2x Capteur de proximité inductif |  | [30 RON](https://cleste.ro/pro-signal-psg-jmp150mm-jumper-cable-male-to-male-connectors-150mm-length-pack-of-10-arduino-beaglebone-pachet.html) |
|Capteur de proximité capacitif|  | [54 RON](https://www.fruugo.ro/ljc18a3-h-zby-1-10mm-capacitance-proximity-sensor-switch-no-dc-6-36v-300ma/p-160356332-340280224?language=en&ac=KelkooCSS&asc=pmax&gad_source=1&gclid=Cj0KCQjw6auyBhDzARIsALIo6v_tLAd3UDKk4OnZNB3JifeboIvujaI3njk0DPMUdVTTvihMQpzxyQIaAjtzEALw_wcB)  |
|Fils de Connexion | Connexions des composants | [16 RON](https://www.optimusdigital.ro/ro/senzori-senzori-de-distanta/3753-senzor-de-metal-normal-deschis-lj12a34zbx.html?search_query=Senzor+Inductiv+de+Proximitate+LJ12A34Z%2FBX&results=1) |
|2x Module Ultrasonique HC-SR04|  | [20 RON](https://ardushop.ro/ro/electronica/47-modul-senzor-ultrasonic-detector-distanta.html?search_query=Ultrasonic&results=5) |
| Breadbord|  | [25 RON](https://ardushop.ro/ro/electronica/163-kit-breadboard830-65xfire-jumper-sursa-alimentare-335v.html) |

### Libraries

<!-- This is just an example, fill in the table with your actual components -->

| Library | Description | Usage |
|---------|-------------|-------|
| [Servo.h | Manages servo motor | Used for accesing the peripherals of the microcontroller  |

## Conception Logicielle
Utilise la bibliothèque Servo.h pour contrôler le moteur servo qui manipule le couvercle de la poubelle. L'algorithme détecte la distance des objets et commande le moteur servo pour ouvrir ou fermer le couvercle en fonction de la distance détectée.

![Cod](cod.png)

## Résultats Obtenus
Le prototype fonctionnel a été capable de détecter les objets et d'opérer automatiquement le couvercle de la poubelle. Les tests ont montré une réaction fiable à la présence d'objets dans la plage définie.

## Conclusions
Le projet a démontré la viabilité de l'utilisation d'un Arduino et de composants simples pour créer des solutions automatisées efficaces et accessibles, avec des applications possibles dans de nombreux autres domaines.

## Log

<!-- write every week your progress here -->

### Week 6 - 12 May

### Week 7 - 19 May

### Week 20 - 26 May


## Reference links

<!-- Fill in with appropriate links and link titles -->

[Tutorial 1](https://www.youtube.com/watch?v=aqAUIhVwF6o)
[Tutorial 2](https://www.youtube.com/watch?v=9yrP1CZN3Ds)


