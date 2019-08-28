/**
 * ========================================================================================================================
 * @Software: Biblioteca para Ponte H DMPH_L298N  
 * @Description: Ajuda na implementação de tarefas usando o Driver Motor Ponte H L298N.
 * @Version: 1.0.0 / Data: 28 de agosto de 2019
 * @Developer: 7º Período de Sistemas de Informação do IFNMG - Campus Pirapora
 * @E-mail: ifsi2016@googlegroups.com 
 * ========================================================================================================================
 * Historic Version
 * 
 * @ 28 de agosto de 2019 - Versão 1.0.0 - Inicio.
 *
 *
 *
 * ========================================================================================================================
 */

#include "DMPH.h"

/**
 * O construtor DMPH::DMPH(x, y, z) configura os pinos passados como parâmetro da saída e depois atribui 
 * os seus valores às variáveis privadas, de modo que elas possão ser utilizadas pelos métodos das classes
 * futuramente.
 */

 DMPH::DMPH(int pin1, int pin2, int pinVel){
 	// Configura pinos como saída.
 	pinMode(pin1, OUTPUT); 
 	pinMode(pin2, OUTPUT);
 	pinMode(pinVel, OUTPUT);

 	pino1 = pin1; // Motor pino 1
 	pino2 = pin2; // Motor pino 2
 	pinoVel = pinVel; // Motor pino velocidade
 }

/**
 * Método move - recebe a orientação de rotação do motor (horario ou antihorario) e a velocidade (PWM).
 */

 void DMPH::move(int vel){
 	if(vel > 0){ //rotação do motor sentido horário.
 		digitalWrite(pino1,HIGH);
 		digitalWrite(pino2,LOW);
 		analogWrite(pinoVel,vel);

 	} 

 	else if(vel < 0){ //rotação do motor sentido antihorário.
 		digitalWrite(pino1,LOW);
 		digitalWrite(pino2,HIGH);
 		analogWrite(pinoVel,vel*(-1));

 	}
     
     else if(vel == 0){ //desligar
 		digitalWrite(pino1, LOW);
 		digitalWrite(pino2, LOW);
 	}

 }