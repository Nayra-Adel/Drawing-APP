#include "Horizontal_Line.h"

Horizontal_Line::Horizontal_Line(Scene & scene):Shape(scene) {}
Horizontal_Line::Horizontal_Line(unsigned  height, Scene& scene):Shape(scene) { set_height(height); }
Horizontal_Line::Horizontal_Line(unsigned  x,unsigned  y, unsigned  height, Scene& scene):Shape(x,y,height,scene) {}

//get_x() & get_y() for the first point in the left of the Horizontal_Line (for the position)
//get_height is the height of the Horizontal_Line
//get_height_screen is the height of the scene
void Horizontal_Line::Draw(){

    for(unsigned z = 0; z < get_height() && z + get_y() < c.get_height_screen(); z++)
        
        c[get_x()][get_y() + z]="*";
}

Horizontal_Line::~Horizontal_Line() {}