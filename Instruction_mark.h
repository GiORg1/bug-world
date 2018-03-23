#ifndef INSTRUCTION_MARK_H
#define INSTRUCTION_MARK_H

#include "Instruction.h"

class Instruction_mark: public Instruction 
{
private:
    int m;
    tstate z;
public:
    void execute(Bug b);
    void parse(std::string& instr);
};

#endif /* INSTRUCTION_MARK_H */

