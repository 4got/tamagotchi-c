
// libs
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include < unistd.h > //Для alarm
#include < signal.h > //Для signal
//Функция, вызываемая при генерации сигнала SIGALRM
void MyAlarm(int var)
{
  puts(“End work”);
  _Exit(0); //Завершение работы программы
}

#include <heads_actions.h>
#include <structs.h>
//functions

//destroy

//name

//
