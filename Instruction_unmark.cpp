/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

void Instruction_mark::execute(Bug b){
 
    Cell x = this->w.getCell(b.get_position());
    tmark newmark;
    newmark.mark = m;
    x.mark.set_marker(newmark, b.get_color());
    b.set_state(z);
}

void Instruction_mark::parse(std::string instr) {
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