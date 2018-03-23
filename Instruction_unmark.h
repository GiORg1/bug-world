#ifndef INSTRUCTION_UNMARK_H
#define INSTRUCTION_UNMARK_H

#include "Instruction.h"

class Instruction_unmark: public Instruction 
{
private:
    int m;
    tstate z;
public:
    void execute(Bug b);
    void parse(std::string& instr);
};

#endif