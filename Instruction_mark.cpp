/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include <iostream>

#include "Instruction_mark.h"
#include "World.h"
#include "Marker.h"

void Instruction_mark::execute(Bug b){
    //set mark m and go to state z
    Cell x = this->w.getCell(b.get_position());
    tmark newmark;
    newmark.mark = m;
    x.mark.set_marker(newmark, b.get_color());
    b.set_state(z);
}

void Instruction_mark::parse(std::string& args){
    
}