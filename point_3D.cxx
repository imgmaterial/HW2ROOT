#include "point_3D.h"
#include <RtypesCore.h>
#include <cmath>

Point_3D::Point_3D(){
    this->px = 0;
    this->py = 0;
    this->pz = 0;
    this->magP = CalculateMagP(this->px, this->py, this->pz);
}

Point_3D::Point_3D(Double_t x, Double_t y, Double_t z){
    this->px = x;
    this->py = y;
    this->pz = z;
    this->magP = CalculateMagP(this->px, this->py, this->pz);
}

Double_t Point_3D::CalculateMagP(Double_t x, Double_t y, Double_t z){
    Double_t magnitude = std::sqrt(std::pow(x,2) + std::pow(y, 2) + std::pow(z, 2)); 
    return magnitude;
}

Double_t Point_3D::GetX(){
    return this->px;
}

Double_t Point_3D::GetY(){
    return this->py;
}

Double_t Point_3D::GetZ(){
    return this->pz;
}

Point_3D::~Point_3D(){

}