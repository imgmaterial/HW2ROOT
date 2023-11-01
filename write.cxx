#include "point_3D.h"
#include <RtypesCore.h>
#include <TTree.h>
#include <TUUID.h>
void write(){
    Point_3D* point_3d {nullptr};
    TFile f("tree_file.root", "RECREATE");
    TTree* Tree = new TTree("Tree", "Point_3D Tree");
    Tree->Branch("point_3D", &point_3d);

    Double_t px, py, pz;
    Double_t magP;

    for (Int_t i = 0; i<100000;i++){
        px = gRandom->Gaus(0,.02);
        py = gRandom->Gaus(0,.02);
        pz = gRandom->Gaus(0,.02);


        point_3d = new Point_3D(px, py, pz);

        Tree->Fill();

        delete point_3d;
    }
    Tree->AutoSave();
}