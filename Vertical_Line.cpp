#include "Vertical_Line.h"

Vertical_Line::Vertical_Line(Scene & s): Shape(s){}

Vertical_Line::Vertical_Line(unsigned  h, Scene& s):Shape(s){
    
    set_height(h);
}

//we use that constructor
Vertical_Line::Vertical_Line(unsigned  x,unsigned  y, unsigned  h, Scene& s):Shape(x,y,h,s) {}

//get_height() is the height of the Vertical_Line
//get_x() & get_y() for the position
void Vertical_Line::Draw(){
    for(unsigned  z = 0; z < get_height() && z + get_x() < c.get_width_screen(); z++)
        c[get_x() + z][get_y()] = "*";
}

Vertical_Line::~Vertical_Line() {}