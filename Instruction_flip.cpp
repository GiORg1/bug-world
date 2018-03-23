/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Instruction_flip.h"
#include "Bug.h"

void Instruction_flip::execute(Bug b) {
    int randomi =randomint();
    if(randomi == 0)
        b.set_state(x);
    else 
        b.set_state(y);
}

void Instruction_flip::parse(std::string& args){
    
}

int Instruction_flip::randomint() {
    srand(time(NULL));
    return rand() % (this->p - 1);
}