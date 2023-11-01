#include "point_3D.h"
#include <RtypesCore.h>
#include <TH1.h>
#include <TTree.h>
#include <TFile.h>
#include <TH1F.h>
#include <TH2.h>
void read(){
    Point_3D* point_3D = nullptr;
    auto file = TFile::Open("tree_file.root");

    TTree* tree = static_cast<TTree*>(file->Get("Tree"));
    tree->SetBranchAddress("point_3D", &point_3D);
    Long64_t N = tree->GetEntries();
    TH2F* h2  = new TH2F("hist", "Histogram", 100, -0.1, 0.1, 100, -0.1, 0.1);
    for (Long64_t i = 0; i<N;i++){
        tree->GetEntry(i);
        h2->Fill(point_3D->GetX(), point_3D->GetY());
    }
    h2->Draw();
}