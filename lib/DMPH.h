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

/**
 * Diretivas de Compilação - Elas não deixam as declarações/definições da bliblioteca serem inseridas 
 * mais de uma vez em um projeto. 
 */

#ifndef DMPH_H
#define DMPH_H

/* Permite fazer uso e ter acesso as funções do Arduíno. */
#include <Arduino.h>
 
 /**
  * Class DMPH - Possui os atributos e métodos.
  */
  class DMPH {
  private:
 	// Atributos
  	int pino1;
  	int pino2;
  	int pinoVel;

  public:
 	/* Construtor que recebe os parâmetros dos pinos correspondente a saída. (pin_Motor, pin_Motor, pin_Veloidade_Motor) */
  	DMPH(int pin1, int pin2, int pinVel); 

 	// Método move, que recebe o sentido da rotação do motor e o valor da velocidade.
  	void move(int vel);
  };
  
  
#endif