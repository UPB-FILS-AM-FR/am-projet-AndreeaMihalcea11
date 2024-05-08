# Poubelle Intelligente

| | |
|-|-|
|`Mihalcea Andreea-Elena` | 


## Description
Ce projet consiste à créer une poubelle intelligente qui ouvre automatiquement son couvercle lorsqu'un objet est détecté à moins de 30 centimètres. 
Cette fonctionnalité vise à réduire le contact physique et à améliorer l'hygiène.

## Motivation
La motivation de développer cette poubelle intelligente est de minimiser la propagation des germes et des bactéries dans des environnements où l'hygiène est primordiale, tels que les cuisines, les hôpitaux et les bureaux.

## Architecture
L'architecture du système comprend :
Carte Compatible Arduino Uno R3 : Agit comme l'unité de contrôle centrale.
Module Ultrasonique HC-SR04 : Détecte la proximité d'un objet avec la poubelle.
Moteur Servo MICRO SERVO TOWER PRO 9G : Contrôle l'ouverture et la fermeture du couvercle de la poubelle.
Fils de Connexion : Facilitent les connexions entre les composants sur une plaque d'essai.

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
| Arduino Uno R3 + Câble | Contrôleur principal | [75 RON](https://www.conexelectronic.ro/cautare?controller=search&orderby=position&orderway=desc&ssa_submit=&search_query=Cablu+jumper+de+20+cm) |
| Module Ultrasonique HC-SR04 | Mesure de distance | [10 RON](https://www.optimusdigital.ro/ro/butoane-i-comutatoare/1119-buton-6x6x6.html?search_query=buton&results=222) |
| Moteur Servo TOWER PRO 9G MICRO | Mouvement du couvercle | [24 RON](https://www.conexelectronic.ro/senzori-si-module-pentru-platforme-de-dezvoltare/15482-MINISERVOMOTOR-SG90-9G.html) |
|Fils de Connexion | Connexions des composants | [16 RON](https://cleste.ro/pro-signal-psg-jmp150mm-jumper-cable-male-to-male-connectors-150mm-length-pack-of-10-arduino-beaglebone-pachet.html) |

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


