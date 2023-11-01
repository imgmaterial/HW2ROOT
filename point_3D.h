#ifndef POINT_3D_H
#define POINT_3D_H

#include <Rtypes.h>
#include <RtypesCore.h>
#include <TObject.h>

class Point_3D : public TObject{
    public:
        Point_3D();
        Point_3D(Int_t x, Int_t y, Int_t z);
        virtual ~Point_3D();
    private:
        Int_t xPos;
        Int_t yPos;
        Int_t zPos;
    ClassDef(Point_3D, 1)    
};


#endif