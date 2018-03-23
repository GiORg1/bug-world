#ifndef INSTRUCTION_DROP_H
#define INSTRUCTION_DROP_H

#include "Instruction.h"

class Instruction_drop: public Instruction 
{
private:
    tstate z;
public:
    void execute(Bug b);
    void parse(std::string& args);
};

#endif /* INSTRUCTION_DROP_H */

