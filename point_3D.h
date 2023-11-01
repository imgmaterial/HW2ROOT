#ifndef POINT_3D_H
#define POINT_3D_H

#include <Rtypes.h>
#include <RtypesCore.h>
#include <TObject.h>

class Point_3D : public TObject{
    public:
        Point_3D();
        Point_3D(Double_t px, Double_t py, Double_t pz);
        virtual ~Point_3D();
    private:
        Double_t px;
        Double_t py;
        Double_t pz;
        Double_t magP;
        Double_t CalculateMagP(Double_t px, Double_t py, Double_t pz);

    ClassDef(Point_3D, 1)    
};


#endif