/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include <exception>
#include <stdexcept>

#include "Instruction_turn.h"
#include "Bug.h"


void Instruction_turn::execute(Bug b){
    if(lr.tleftright != 0 || lr.tleftright != 1)
        throw std::runtime_error("left, right out of range");
    else if(lr.tleftright == 0)
        b.set_direction((b.get_direction()+5) % 6);
    else 
        b.set_direction((b.get_direction()+1) % 6);
    b.set_state(z);
}

void Instruction_turn::parse(std::string instr) {
    /* move x y */
    std::string delimiter = " ";
    size_t pos = 0;
    std::string token;
    int i = 0;
    
    while ((pos = instr.find(delimiter)) != std::string::npos) {
        token = instr.substr(0, pos);
        switch (i) {
            case 0:
                break;
            case 1:
                x = tstate(std::stoi(token));
                break;
            case 2:
                y = tstate(std::stoi(token));
                break;
        }
        instr.erase(0, pos + delimiter.length());
        i++;
    }
}