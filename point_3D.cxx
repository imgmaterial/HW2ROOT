#include "point_3D.h"
#include <RtypesCore.h>

Point_3D::Point_3D(){
    this->xPos = 0;
    this->yPos = 0;
    this->zPos = 0;
}

Point_3D::Point_3D(Int_t x, Int_t y, Int_t z){
    this->xPos = x;
    this->yPos = y;
    this->zPos = z;
}

Point_3D::~Point_3D(){
    
}