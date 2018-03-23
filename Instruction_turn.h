#ifndef INSTRUCTION_TURN_H
#define INSTRUCTION_TURN_H

#include "Instruction.h"

class Instruction_turn: public Instruction 
{
private:
    tleftright lr;
    tstate z;
public:
    void execute(Bug b);
    void parse(std::string& instr);
};

#endif /* INSTRUCTION_TURN_H */

