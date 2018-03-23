#ifndef INSTRUCTION_FLIP_H
#define INSTRUCTION_FLIP_H

#include "Instruction.h"

class Instruction_flip: public Instruction 
{
private:
    int p;
    tstate x, y;
    int seed;
public:
    int randomint();
    void execute(Bug b);
    void parse(std::string& instr);
};

#endif /* INSTRUCTION_FLIP_H */

