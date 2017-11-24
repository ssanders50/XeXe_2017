void Fill_N(int anal,int bin, TH2D *qxtrk_, TH2D * qytrk_, TH2D * qcnt_, double Ax, double Ay, double Bx, double By, double Cx, double Cy, double wA, double wB, double wC){
  
  qanal[anal].qA[bin][0]->Add(qxtrk_,Ax);
  qanal[anal].qA[bin][0]->Add(qytrk_,Ay);
  qanal[anal].qB[bin][0]->Add(qxtrk_,Bx);
  qanal[anal].qB[bin][0]->Add(qytrk_,By);
  qanal[anal].wnA[bin][0]->Add(qcnt_,wA);
  qanal[anal].wnB[bin][0]->Add(qcnt_,wB);
  qanal[anal].qBA[bin][0]->Fill(0.,Bx*Ax + By*Ay);
  qanal[anal].qCA[bin][0]->Fill(0.,Cx*Ax + Cy*Ay);
  qanal[anal].qCB[bin][0]->Fill(0.,Cx*Bx + Cy*By);
  qanal[anal].qBAcnt[bin][0]->Fill(0.,wB*wA);
  qanal[anal].qCAcnt[bin][0]->Fill(0.,wC*wA);
  qanal[anal].qCBcnt[bin][0]->Fill(0.,wC*wB);
  
  int j=(int)(ran->Uniform(0,9.999))+1;
  qanal[anal].qA[bin][j]->Add(qxtrk_,Ax);
  qanal[anal].qA[bin][j]->Add(qytrk_,Ay);
  qanal[anal].qB[bin][j]->Add(qxtrk_,Bx);
  qanal[anal].qB[bin][j]->Add(qytrk_,By);
  qanal[anal].wnA[bin][j]->Add(qcnt_,wA);
  qanal[anal].wnB[bin][j]->Add(qcnt_,wB);
  qanal[anal].qBA[bin][j]->Fill(0.,Bx*Ax + By*Ay);
  qanal[anal].qCA[bin][j]->Fill(0.,Cx*Ax + Cy*Ay);
  qanal[anal].qCB[bin][j]->Fill(0.,Cx*Bx + Cy*By);
  qanal[anal].qBAcnt[bin][j]->Fill(0.,wB*wA);
  qanal[anal].qCAcnt[bin][j]->Fill(0.,wC*wA);
  qanal[anal].qCBcnt[bin][j]->Fill(0.,wC*wB);
}

void Fill_N42(int anal, int bin, TH2D * qxtrk_, TH2D * qytrk_, TH2D * qcnt_, double * qx, double * qy, double * sumw){
  double Ax = qx[HFp2];
  double Ay = qy[HFp2];
  double wA = sumw[HFp2];

  double Bx = qx[HFm2];
  double By = qy[HFm2];
  double wB = sumw[HFm2];

  double Cx = qx[trackmid2];
  double Cy = qy[trackmid2];
  double wC = sumw[trackmid2];
  qanal[anal].qA[bin][0]->Add(qxtrk_,pow(Ax,2)-pow(Ay,2));
  qanal[anal].qA[bin][0]->Add(qytrk_,2*Ax*Ay);
  qanal[anal].qB[bin][0]->Add(qxtrk_,pow(Bx,2)-pow(By,2));
  qanal[anal].qB[bin][0]->Add(qytrk_,2*Bx*By);
  qanal[anal].wnA[bin][0]->Add(qcnt_,pow(wA,2));
  qanal[anal].wnB[bin][0]->Add(qcnt_,pow(wB,2));
  qanal[anal].qBA[bin][0]->Fill(0.,pow(Ax,2)*(pow(Bx,2)-pow(By,2)) + pow(Ay,2)*(pow(By,2)-pow(Bx,2))+4*Ax*Ay*Bx*By);
  qanal[anal].qCA[bin][0]->Fill(0.,pow(Ax,2)*(pow(Cx,2)-pow(Cy,2)) + pow(Ay,2)*(pow(Cy,2)-pow(Cx,2))+4*Ax*Ay*Cx*Cy);
  qanal[anal].qCB[bin][0]->Fill(0.,pow(Bx,2)*(pow(Cx,2)-pow(Cy,2)) + pow(By,2)*(pow(Cy,2)-pow(Cx,2))+4*Bx*By*Cx*Cy);
  qanal[anal].qBAcnt[bin][0]->Fill(0.,pow(wA*wB,2));
  qanal[anal].qCAcnt[bin][0]->Fill(0.,pow(wA*wC,2));
  qanal[anal].qCBcnt[bin][0]->Fill(0.,pow(wB*wC,2));
  
  int j=(int)(ran->Uniform(0,9.999))+1;
  qanal[anal].qA[bin][j]->Add(qxtrk_,pow(Ax,2)-pow(Ay,2));
  qanal[anal].qA[bin][j]->Add(qytrk_,2*Ax*Ay);
  qanal[anal].qB[bin][j]->Add(qxtrk_,pow(Bx,2)-pow(By,2));
  qanal[anal].qB[bin][j]->Add(qytrk_,2*Bx*By);
  qanal[anal].wnA[bin][j]->Add(qcnt_,pow(wA,2));
  qanal[anal].wnB[bin][j]->Add(qcnt_,pow(wB,2));
  qanal[anal].qBA[bin][j]->Fill(0.,pow(Ax,2)*(pow(Bx,2)-pow(By,2)) + pow(Ay,2)*(pow(By,2)-pow(Bx,2))+4*Ax*Ay*Bx*By);
  qanal[anal].qCA[bin][j]->Fill(0.,pow(Ax,2)*(pow(Cx,2)-pow(Cy,2)) + pow(Ay,2)*(pow(Cy,2)-pow(Cx,2))+4*Ax*Ay*Cx*Cy);
  qanal[anal].qCB[bin][j]->Fill(0.,pow(Bx,2)*(pow(Cx,2)-pow(Cy,2)) + pow(By,2)*(pow(Cy,2)-pow(Cx,2))+4*Bx*By*Cx*Cy);
  qanal[anal].qBAcnt[bin][j]->Fill(0.,pow(wA*wB,2));
  qanal[anal].qCAcnt[bin][j]->Fill(0.,pow(wA*wC,2));
  qanal[anal].qCBcnt[bin][j]->Fill(0.,pow(wB*wC,2));
}


void Fill_N523(int anal, int bin, TH2D * qxtrk_, TH2D * qytrk_, TH2D * qcnt_, double * qx, double * qy, double * sumw){
  double a2x = qx[HFp2];
  double a2y = qy[HFp2];
  double a2w = sumw[HFp2];
  double a3x = qx[HFp3];
  double a3y = qy[HFp3];
  double a3w = sumw[HFp3];

  double b2x = qx[HFm2];
  double b2y = qy[HFm2];
  double b2w = sumw[HFm2];
  double b3x = qx[HFm3];
  double b3y = qy[HFm3];
  double b3w = sumw[HFm3];

  double c2x = qx[trackmid2];
  double c2y = qy[trackmid2];
  double c2w = sumw[trackmid2];
  double c3x = qx[trackmid3];
  double c3y = qy[trackmid3];
  double c3w = sumw[trackmid3];

  qanal[anal].qA[bin][0]->Add(qxtrk_,a2x*a3x-a2y*a3y);
  qanal[anal].qA[bin][0]->Add(qytrk_,a2y*a3x+a2x*a3y);
  qanal[anal].qB[bin][0]->Add(qxtrk_,b2x*b3x-b2y*b3y);
  qanal[anal].qB[bin][0]->Add(qytrk_,b2y*b3x+b2x*b3y);
  qanal[anal].wnA[bin][0]->Add(qcnt_,a2w*a3w);
  qanal[anal].wnB[bin][0]->Add(qcnt_,b2w*b3w);
  qanal[anal].qBA[bin][0]->Fill(0.,a2x*a3x*b2x*b3x - a2y*a3y*b2x*b3x + a2y*a3x*b2y*b3x + a2x*a3y*b2y*b3x + a2y*a3x*b2x*b3y + a2x*a3y*b2x*b3y - a2x*a3x*b2y*b3y + a2y*a3y*b2y*b3y);
  qanal[anal].qCA[bin][0]->Fill(0.,a2x*a3x*c2x*c3x - a2y*a3y*c2x*c3x + a2y*a3x*c2y*c3x + a2x*a3y*c2y*c3x + a2y*a3x*c2x*c3y + a2x*a3y*c2x*c3y - a2x*a3x*c2y*c3y + a2y*a3y*c2y*c3y);
  qanal[anal].qCB[bin][0]->Fill(0.,b2x*b3x*c2x*c3x - b2y*b3y*c2x*c3x + b2y*b3x*c2y*c3x + b2x*b3y*c2y*c3x + b2y*b3x*c2x*c3y + b2x*b3y*c2x*c3y - b2x*b3x*c2y*c3y + b2y*b3y*c2y*c3y);
  qanal[anal].qBAcnt[bin][0]->Fill(0.,b2w*b3w*a2w*a3w);
  qanal[anal].qCAcnt[bin][0]->Fill(0.,c2w*c3w*a2w*a3w);
  qanal[anal].qCBcnt[bin][0]->Fill(0.,c2w*c3w*b2w*b3w);
  
  int j=(int)(ran->Uniform(0,9.999))+1;
  qanal[anal].qA[bin][j]->Add(qxtrk_,a2x*a3x-a2y*a3y);
  qanal[anal].qA[bin][j]->Add(qytrk_,a2y*a3x+a2x*a3y);
  qanal[anal].qB[bin][j]->Add(qxtrk_,b2x*b3x-b2y*b3y);
  qanal[anal].qB[bin][j]->Add(qytrk_,b2y*b3x+b2x*b3y);
  qanal[anal].wnA[bin][j]->Add(qcnt_,a2w*a3w);
  qanal[anal].wnB[bin][j]->Add(qcnt_,b2w*b3w);
  qanal[anal].qBA[bin][j]->Fill(0.,a2x*a3x*b2x*b3x - a2y*a3y*b2x*b3x + a2y*a3x*b2y*b3x + a2x*a3y*b2y*b3x + a2y*a3x*b2x*b3y + a2x*a3y*b2x*b3y - a2x*a3x*b2y*b3y + a2y*a3y*b2y*b3y);
  qanal[anal].qCA[bin][j]->Fill(0.,a2x*a3x*c2x*c3x - a2y*a3y*c2x*c3x + a2y*a3x*c2y*c3x + a2x*a3y*c2y*c3x + a2y*a3x*c2x*c3y + a2x*a3y*c2x*c3y - a2x*a3x*c2y*c3y + a2y*a3y*c2y*c3y);
  qanal[anal].qCB[bin][j]->Fill(0.,b2x*b3x*c2x*c3x - b2y*b3y*c2x*c3x + b2y*b3x*c2y*c3x + b2x*b3y*c2y*c3x + b2y*b3x*c2x*c3y + b2x*b3y*c2x*c3y - b2x*b3x*c2y*c3y + b2y*b3y*c2y*c3y);
  qanal[anal].qBAcnt[bin][j]->Fill(0.,b2w*b3w*a2w*a3w);
  qanal[anal].qCAcnt[bin][j]->Fill(0.,c2w*c3w*a2w*a3w);
  qanal[anal].qCBcnt[bin][j]->Fill(0.,c2w*c3w*b2w*b3w);
}
void Fill_N523A(int anal, int bin, TH2D * qxtrk_, TH2D * qytrk_, TH2D * qcnt_, double * qx, double * qy, double * sumw){
  double a2x = qx[HFp2];
  double a2y = qy[HFp2];
  double a2w = sumw[HFp2];
  double a3x = qx[HFm3];
  double a3y = qy[HFm3];
  double a3w = sumw[HFm3];

  double b2x = qx[HFm2];
  double b2y = qy[HFm2];
  double b2w = sumw[HFm2];
  double b3x = qx[HFp3];
  double b3y = qy[HFp3];
  double b3w = sumw[HFp3];

  double c2x = qx[trackmid2];
  double c2y = qy[trackmid2];
  double c2w = sumw[trackmid2];
  double c3x = qx[trackmid3];
  double c3y = qy[trackmid3];
  double c3w = sumw[trackmid3];

  qanal[anal].qA[bin][0]->Add(qxtrk_,a2x*a3x-a2y*a3y);
  qanal[anal].qA[bin][0]->Add(qytrk_,a2y*a3x+a2x*a3y);
  qanal[anal].qB[bin][0]->Add(qxtrk_,b2x*b3x-b2y*b3y);
  qanal[anal].qB[bin][0]->Add(qytrk_,b2y*b3x+b2x*b3y);
  qanal[anal].wnA[bin][0]->Add(qcnt_,a2w*a3w);
  qanal[anal].wnB[bin][0]->Add(qcnt_,b2w*b3w);
  qanal[anal].qBA[bin][0]->Fill(0.,a2x*a3x*b2x*b3x - a2y*a3y*b2x*b3x + a2y*a3x*b2y*b3x + a2x*a3y*b2y*b3x + a2y*a3x*b2x*b3y + a2x*a3y*b2x*b3y - a2x*a3x*b2y*b3y + a2y*a3y*b2y*b3y);
  qanal[anal].qCA[bin][0]->Fill(0.,a2x*a3x*c2x*c3x - a2y*a3y*c2x*c3x + a2y*a3x*c2y*c3x + a2x*a3y*c2y*c3x + a2y*a3x*c2x*c3y + a2x*a3y*c2x*c3y - a2x*a3x*c2y*c3y + a2y*a3y*c2y*c3y);
  qanal[anal].qCB[bin][0]->Fill(0.,b2x*b3x*c2x*c3x - b2y*b3y*c2x*c3x + b2y*b3x*c2y*c3x + b2x*b3y*c2y*c3x + b2y*b3x*c2x*c3y + b2x*b3y*c2x*c3y - b2x*b3x*c2y*c3y + b2y*b3y*c2y*c3y);
  qanal[anal].qBAcnt[bin][0]->Fill(0.,b2w*b3w*a2w*a3w);
  qanal[anal].qCAcnt[bin][0]->Fill(0.,c2w*c3w*a2w*a3w);
  qanal[anal].qCBcnt[bin][0]->Fill(0.,c2w*c3w*b2w*b3w);
  
  int j=(int)(ran->Uniform(0,9.999))+1;
  qanal[anal].qA[bin][j]->Add(qxtrk_,a2x*a3x-a2y*a3y);
  qanal[anal].qA[bin][j]->Add(qytrk_,a2y*a3x+a2x*a3y);
  qanal[anal].qB[bin][j]->Add(qxtrk_,b2x*b3x-b2y*b3y);
  qanal[anal].qB[bin][j]->Add(qytrk_,b2y*b3x+b2x*b3y);
  qanal[anal].wnA[bin][j]->Add(qcnt_,a2w*a3w);
  qanal[anal].wnB[bin][j]->Add(qcnt_,b2w*b3w);
  qanal[anal].qBA[bin][j]->Fill(0.,a2x*a3x*b2x*b3x - a2y*a3y*b2x*b3x + a2y*a3x*b2y*b3x + a2x*a3y*b2y*b3x + a2y*a3x*b2x*b3y + a2x*a3y*b2x*b3y - a2x*a3x*b2y*b3y + a2y*a3y*b2y*b3y);
  qanal[anal].qCA[bin][j]->Fill(0.,a2x*a3x*c2x*c3x - a2y*a3y*c2x*c3x + a2y*a3x*c2y*c3x + a2x*a3y*c2y*c3x + a2y*a3x*c2x*c3y + a2x*a3y*c2x*c3y - a2x*a3x*c2y*c3y + a2y*a3y*c2y*c3y);
  qanal[anal].qCB[bin][j]->Fill(0.,b2x*b3x*c2x*c3x - b2y*b3y*c2x*c3x + b2y*b3x*c2y*c3x + b2x*b3y*c2y*c3x + b2y*b3x*c2x*c3y + b2x*b3y*c2x*c3y - b2x*b3x*c2y*c3y + b2y*b3y*c2y*c3y);
  qanal[anal].qBAcnt[bin][j]->Fill(0.,b2w*b3w*a2w*a3w);
  qanal[anal].qCAcnt[bin][j]->Fill(0.,c2w*c3w*a2w*a3w);
  qanal[anal].qCBcnt[bin][j]->Fill(0.,c2w*c3w*b2w*b3w);
}

void Fill_N63(int anal, int bin, TH2D * qxtrk_, TH2D * qytrk_, TH2D * qcnt_, double * qx, double * qy, double * sumw){
  double ax = qx[HFp3];
  double ay = qy[HFp3];
  double wa = sumw[HFp3];

  double bx = qx[HFm3];
  double by = qy[HFm3];
  double wb = sumw[HFm3];

  double cx = qx[trackmid3];
  double cy = qy[trackmid3];
  double wc = sumw[trackmid3];
  qanal[anal].qA[bin][0]->Add(qxtrk_,pow(ax,2)-pow(ay,2));
  qanal[anal].qA[bin][0]->Add(qytrk_,2*ax*ay);
  qanal[anal].qB[bin][0]->Add(qxtrk_,pow(bx,2)-pow(by,2));
  qanal[anal].qB[bin][0]->Add(qytrk_,2*bx*by);
  qanal[anal].wnA[bin][0]->Add(qcnt_,pow(wa,2));
  qanal[anal].wnB[bin][0]->Add(qcnt_,pow(wb,2));
  qanal[anal].qBA[bin][0]->Fill(0.,pow(ax,2)*(pow(bx,2)-pow(by,2)) + pow(ay,2)*(pow(by,2)-pow(bx,2))+4*ax*ay*bx*by);
  qanal[anal].qCA[bin][0]->Fill(0.,pow(ax,2)*(pow(cx,2)-pow(cy,2)) + pow(ay,2)*(pow(cy,2)-pow(cx,2))+4*ax*ay*cx*cy);
  qanal[anal].qCB[bin][0]->Fill(0.,pow(bx,2)*(pow(cx,2)-pow(cy,2)) + pow(by,2)*(pow(cy,2)-pow(cx,2))+4*bx*by*cx*cy);
  qanal[anal].qBAcnt[bin][0]->Fill(0.,pow(wa*wb,2));
  qanal[anal].qCAcnt[bin][0]->Fill(0.,pow(wa*wc,2));
  qanal[anal].qCBcnt[bin][0]->Fill(0.,pow(wb*wc,2));
  
  int j=(int)(ran->Uniform(0,9.999))+1;
  qanal[anal].qA[bin][j]->Add(qxtrk_,pow(ax,2)-pow(ay,2));
  qanal[anal].qA[bin][j]->Add(qytrk_,2*ax*ay);
  qanal[anal].qB[bin][j]->Add(qxtrk_,pow(bx,2)-pow(by,2));
  qanal[anal].qB[bin][j]->Add(qytrk_,2*bx*by);
  qanal[anal].wnA[bin][j]->Add(qcnt_,pow(wa,2));
  qanal[anal].wnB[bin][j]->Add(qcnt_,pow(wb,2));
  qanal[anal].qBA[bin][j]->Fill(0.,pow(ax,2)*(pow(bx,2)-pow(by,2)) + pow(ay,2)*(pow(by,2)-pow(bx,2))+4*ax*ay*bx*by);
  qanal[anal].qCA[bin][j]->Fill(0.,pow(ax,2)*(pow(cx,2)-pow(cy,2)) + pow(ay,2)*(pow(cy,2)-pow(cx,2))+4*ax*ay*cx*cy);
  qanal[anal].qCB[bin][j]->Fill(0.,pow(bx,2)*(pow(cx,2)-pow(cy,2)) + pow(by,2)*(pow(cy,2)-pow(cx,2))+4*bx*by*cx*cy);
  qanal[anal].qBAcnt[bin][j]->Fill(0.,pow(wa*wb,2));
  qanal[anal].qCAcnt[bin][j]->Fill(0.,pow(wa*wc,2));
  qanal[anal].qCBcnt[bin][j]->Fill(0.,pow(wb*wc,2));


}

void Fill_N62(int anal, int bin, TH2D * qxtrk_, TH2D * qytrk_, TH2D * qcnt_, double * qx, double * qy, double * sumw){
  double ax = qx[HFp2];
  double ay = qy[HFp2];
  double wa = sumw[HFp2];

  double bx = qx[HFm2];
  double by = qy[HFm2];
  double wb = sumw[HFm2];

  double cx = qx[trackmid2];
  double cy = qy[trackmid2];
  double wc = sumw[trackmid2];
  qanal[anal].qA[bin][0]->Add(qxtrk_,pow(ax,3)-3*ax*pow(ay,2));
  qanal[anal].qA[bin][0]->Add(qytrk_,3*ay*pow(ax,2)-pow(ay,3));
  qanal[anal].qB[bin][0]->Add(qxtrk_,pow(bx,3)-3*bx*pow(by,2));
  qanal[anal].qB[bin][0]->Add(qytrk_,3*by*pow(bx,2)-pow(by,3));
  qanal[anal].wnA[bin][0]->Add(qcnt_,pow(wa,3));
  qanal[anal].wnB[bin][0]->Add(qcnt_,pow(wb,3));
  qanal[anal].qBA[bin][0]->Fill(0.,pow(ax,3)*pow(bx,3) - 3*ax*pow(ay,2)*pow(bx,3) + 9*pow(ax,2)*ay*pow(bx,2)*by - 3*pow(ay,3)*pow(bx,2)*by - 3*pow(ax,3)*bx*pow(by,2) + 
   9*ax*pow(ay,2)*bx*pow(by,2) - 3*pow(ax,2)*ay*pow(by,3) + pow(ay,3)*pow(by,3));
  qanal[anal].qCA[bin][0]->Fill(0.,pow(ax,3)*pow(cx,3) - 3*ax*pow(ay,2)*pow(cx,3) + 9*pow(ax,2)*ay*pow(cx,2)*cy - 3*pow(ay,3)*pow(cx,2)*cy - 3*pow(ax,3)*cx*pow(cy,2) + 
   9*ax*pow(ay,2)*cx*pow(cy,2) - 3*pow(ax,2)*ay*pow(cy,3) + pow(ay,3)*pow(cy,3));
  qanal[anal].qCB[bin][0]->Fill(0.,pow(bx,3)*pow(cx,3) - 3*bx*pow(by,2)*pow(cx,3) + 9*pow(bx,2)*by*pow(cx,2)*cy - 3*pow(by,3)*pow(cx,2)*cy - 3*pow(bx,3)*cx*pow(cy,2) + 
   9*bx*pow(by,2)*cx*pow(cy,2) - 3*pow(bx,2)*by*pow(cy,3) + pow(by,3)*pow(cy,3));
  qanal[anal].qBAcnt[bin][0]->Fill(0.,pow(wa*wb,3));
  qanal[anal].qCAcnt[bin][0]->Fill(0.,pow(wa*wc,3));
  qanal[anal].qCBcnt[bin][0]->Fill(0.,pow(wb*wc,3));
  
  int j=(int)(ran->Uniform(0,9.999))+1;
  qanal[anal].qA[bin][j]->Add(qxtrk_,pow(ax,3)-3*ax*pow(ay,2));
  qanal[anal].qA[bin][j]->Add(qytrk_,3*ay*pow(ax,2)-pow(ay,3));
  qanal[anal].qB[bin][j]->Add(qxtrk_,pow(bx,3)-3*bx*pow(by,2));
  qanal[anal].qB[bin][j]->Add(qytrk_,3*by*pow(bx,2)-pow(by,3));
  qanal[anal].wnA[bin][j]->Add(qcnt_,pow(wa,3));
  qanal[anal].wnB[bin][j]->Add(qcnt_,pow(wb,3));
  qanal[anal].qBA[bin][j]->Fill(0.,pow(ax,3)*pow(bx,3) - 3*ax*pow(ay,2)*pow(bx,3) + 9*pow(ax,2)*ay*pow(bx,2)*by - 3*pow(ay,3)*pow(bx,2)*by - 3*pow(ax,3)*bx*pow(by,2) + 
   9*ax*pow(ay,2)*bx*pow(by,2) - 3*pow(ax,2)*ay*pow(by,3) + pow(ay,3)*pow(by,3));
  qanal[anal].qCA[bin][j]->Fill(0.,pow(ax,3)*pow(cx,3) - 3*ax*pow(ay,2)*pow(cx,3) + 9*pow(ax,2)*ay*pow(cx,2)*cy - 3*pow(ay,3)*pow(cx,2)*cy - 3*pow(ax,3)*cx*pow(cy,2) + 
   9*ax*pow(ay,2)*cx*pow(cy,2) - 3*pow(ax,2)*ay*pow(cy,3) + pow(ay,3)*pow(cy,3));
  qanal[anal].qCB[bin][j]->Fill(0.,pow(bx,3)*pow(cx,3) - 3*bx*pow(by,2)*pow(cx,3) + 9*pow(bx,2)*by*pow(cx,2)*cy - 3*pow(by,3)*pow(cx,2)*cy - 3*pow(bx,3)*cx*pow(cy,2) + 
   9*bx*pow(by,2)*cx*pow(cy,2) - 3*pow(bx,2)*by*pow(cy,3) + pow(by,3)*pow(cy,3));
  qanal[anal].qBAcnt[bin][j]->Fill(0.,pow(wa*wb,3));
  qanal[anal].qCAcnt[bin][j]->Fill(0.,pow(wa*wc,3));
  qanal[anal].qCBcnt[bin][j]->Fill(0.,pow(wb*wc,3));
 

}
void Fill_N723(int anal, int bin, TH2D * qxtrk_, TH2D * qytrk_, TH2D * qcnt_, double * qx, double * qy, double * sumw){
  double a2x = qx[HFp2];
  double a2y = qy[HFp2];
  double a2w = sumw[HFp2];
  double a3x = qx[HFp3];
  double a3y = qy[HFp3];
  double a3w = sumw[HFp3];

  double b2x = qx[HFm2];
  double b2y = qy[HFm2];
  double b2w = sumw[HFm2];
  double b3x = qx[HFm3];
  double b3y = qy[HFm3];
  double b3w = sumw[HFm3];

  double c2x = qx[trackmid2];
  double c2y = qy[trackmid2];
  double c2w = sumw[trackmid2];
  double c3x = qx[trackmid3];
  double c3y = qy[trackmid3];
  double c3w = sumw[trackmid3];

  qanal[anal].qA[bin][0]->Add(qxtrk_,pow(a2x,2)*a3x - pow(a2y,2)*a3x - 2*a2x*a2y*a3y);
  qanal[anal].qA[bin][0]->Add(qytrk_,2*a2x*a2y*a3x  + pow(a2x,2)*a3y - pow(a2y,2)*a3y );
  qanal[anal].qB[bin][0]->Add(qxtrk_,pow(b2x,2)*b3x - pow(b2y,2)*b3x - 2*b2x*b2y*b3y);
  qanal[anal].qB[bin][0]->Add(qytrk_, 2*b2x*b2y*b3x + pow(b2x,2)*b3y - pow(b2y,2)*b3y );
  qanal[anal].wnA[bin][0]->Add(qcnt_,a2w*a2w*a3w);
  qanal[anal].wnB[bin][0]->Add(qcnt_,b2w*b2w*b3w);
  qanal[anal].qBA[bin][0]->Fill(0.,pow(a2x,2)*a3x*pow(b2x,2)*b3x - pow(a2y,2)*a3x*pow(b2x,2)*b3x - 2*a2x*a2y*a3y*pow(b2x,2)*b3x + 4*a2x*a2y*a3x*b2x*b2y*b3x + 2*pow(a2x,2)*a3y*b2x*b2y*b3x - 
		    2*pow(a2y,2)*a3y*b2x*b2y*b3x - pow(a2x,2)*a3x*pow(b2y,2)*b3x + pow(a2y,2)*a3x*pow(b2y,2)*b3x + 2*a2x*a2y*a3y*pow(b2y,2)*b3x + 2*a2x*a2y*a3x*pow(b2x,2)*b3y + 
		    pow(a2x,2)*a3y*pow(b2x,2)*b3y - pow(a2y,2)*a3y*pow(b2x,2)*b3y - 2*pow(a2x,2)*a3x*b2x*b2y*b3y + 2*pow(a2y,2)*a3x*b2x*b2y*b3y + 4*a2x*a2y*a3y*b2x*b2y*b3y - 
		    2*a2x*a2y*a3x*pow(b2y,2)*b3y - pow(a2x,2)*a3y*pow(b2y,2)*b3y + pow(a2y,2)*a3y*pow(b2y,2)*b3y);
  qanal[anal].qCA[bin][0]->Fill(0.,pow(a2x,2)*a3x*pow(c2x,2)*c3x - pow(a2y,2)*a3x*pow(c2x,2)*c3x - 2*a2x*a2y*a3y*pow(c2x,2)*c3x + 4*a2x*a2y*a3x*c2x*c2y*c3x + 2*pow(a2x,2)*a3y*c2x*c2y*c3x - 
		    2*pow(a2y,2)*a3y*c2x*c2y*c3x - pow(a2x,2)*a3x*pow(c2y,2)*c3x + pow(a2y,2)*a3x*pow(c2y,2)*c3x + 2*a2x*a2y*a3y*pow(c2y,2)*c3x + 2*a2x*a2y*a3x*pow(c2x,2)*c3y + 
		    pow(a2x,2)*a3y*pow(c2x,2)*c3y - pow(a2y,2)*a3y*pow(c2x,2)*c3y - 2*pow(a2x,2)*a3x*c2x*c2y*c3y + 2*pow(a2y,2)*a3x*c2x*c2y*c3y + 4*a2x*a2y*a3y*c2x*c2y*c3y - 
		    2*a2x*a2y*a3x*pow(c2y,2)*c3y - pow(a2x,2)*a3y*pow(c2y,2)*c3y + pow(a2y,2)*a3y*pow(c2y,2)*c3y);
  qanal[anal].qCB[bin][0]->Fill(0.,pow(b2x,2)*b3x*pow(c2x,2)*c3x - pow(b2y,2)*b3x*pow(c2x,2)*c3x - 2*b2x*b2y*b3y*pow(c2x,2)*c3x + 4*b2x*b2y*b3x*c2x*c2y*c3x + 2*pow(b2x,2)*b3y*c2x*c2y*c3x - 
		    2*pow(b2y,2)*b3y*c2x*c2y*c3x - pow(b2x,2)*b3x*pow(c2y,2)*c3x + pow(b2y,2)*b3x*pow(c2y,2)*c3x + 2*b2x*b2y*b3y*pow(c2y,2)*c3x + 2*b2x*b2y*b3x*pow(c2x,2)*c3y + 
		    pow(b2x,2)*b3y*pow(c2x,2)*c3y - pow(b2y,2)*b3y*pow(c2x,2)*c3y - 2*pow(b2x,2)*b3x*c2x*c2y*c3y + 2*pow(b2y,2)*b3x*c2x*c2y*c3y + 4*b2x*b2y*b3y*c2x*c2y*c3y - 
		    2*b2x*b2y*b3x*pow(c2y,2)*c3y - pow(b2x,2)*b3y*pow(c2y,2)*c3y + pow(b2y,2)*b3y*pow(c2y,2)*c3y);
  qanal[anal].qBAcnt[bin][0]->Fill(0.,b2w*b2w*b3w*a2w*a2w*a3w);
  qanal[anal].qCAcnt[bin][0]->Fill(0.,c2w*c2w*c3w*a2w*a2w*a3w);
  qanal[anal].qCBcnt[bin][0]->Fill(0.,c2w*c2w*c3w*b2w*b2w*b3w);
 
 int j=(int)(ran->Uniform(0,9.999))+1;
  qanal[anal].qA[bin][j]->Add(qxtrk_,pow(a2x,2)*a3x - pow(a2y,2)*a3x- 2*a2x*a2y*a3y);
  qanal[anal].qA[bin][j]->Add(qytrk_,2*a2x*a2y*a3x + pow(a2x,2)*a3y- pow(a2y,2)*a3y );
  qanal[anal].qB[bin][j]->Add(qxtrk_,pow(b2x,2)*b3x - pow(b2y,2)*b3x - 2*b2x*b2y*b3y);
  qanal[anal].qB[bin][j]->Add(qytrk_, 2*b2x*b2y*b3x + pow(b2x,2)*b3y - pow(b2y,2)*b3y );
  qanal[anal].wnA[bin][j]->Add(qcnt_,a2w*a2w*a3w);
  qanal[anal].wnB[bin][j]->Add(qcnt_,b2w*a2w*b3w);
  qanal[anal].qBA[bin][j]->Fill(0.,pow(a2x,2)*a3x*pow(b2x,2)*b3x - pow(a2y,2)*a3x*pow(b2x,2)*b3x - 2*a2x*a2y*a3y*pow(b2x,2)*b3x + 4*a2x*a2y*a3x*b2x*b2y*b3x + 2*pow(a2x,2)*a3y*b2x*b2y*b3x - 
   2*pow(a2y,2)*a3y*b2x*b2y*b3x - pow(a2x,2)*a3x*pow(b2y,2)*b3x + pow(a2y,2)*a3x*pow(b2y,2)*b3x + 2*a2x*a2y*a3y*pow(b2y,2)*b3x + 2*a2x*a2y*a3x*pow(b2x,2)*b3y + 
   pow(a2x,2)*a3y*pow(b2x,2)*b3y - pow(a2y,2)*a3y*pow(b2x,2)*b3y - 2*pow(a2x,2)*a3x*b2x*b2y*b3y + 2*pow(a2y,2)*a3x*b2x*b2y*b3y + 4*a2x*a2y*a3y*b2x*b2y*b3y - 
   2*a2x*a2y*a3x*pow(b2y,2)*b3y - pow(a2x,2)*a3y*pow(b2y,2)*b3y + pow(a2y,2)*a3y*pow(b2y,2)*b3y);
  qanal[anal].qCA[bin][j]->Fill(0.,pow(a2x,2)*a3x*pow(c2x,2)*c3x - pow(a2y,2)*a3x*pow(c2x,2)*c3x - 2*a2x*a2y*a3y*pow(c2x,2)*c3x + 4*a2x*a2y*a3x*c2x*c2y*c3x + 2*pow(a2x,2)*a3y*c2x*c2y*c3x - 
   2*pow(a2y,2)*a3y*c2x*c2y*c3x - pow(a2x,2)*a3x*pow(c2y,2)*c3x + pow(a2y,2)*a3x*pow(c2y,2)*c3x + 2*a2x*a2y*a3y*pow(c2y,2)*c3x + 2*a2x*a2y*a3x*pow(c2x,2)*c3y + 
   pow(a2x,2)*a3y*pow(c2x,2)*c3y - pow(a2y,2)*a3y*pow(c2x,2)*c3y - 2*pow(a2x,2)*a3x*c2x*c2y*c3y + 2*pow(a2y,2)*a3x*c2x*c2y*c3y + 4*a2x*a2y*a3y*c2x*c2y*c3y - 
   2*a2x*a2y*a3x*pow(c2y,2)*c3y - pow(a2x,2)*a3y*pow(c2y,2)*c3y + pow(a2y,2)*a3y*pow(c2y,2)*c3y);
  qanal[anal].qCB[bin][j]->Fill(0.,pow(b2x,2)*b3x*pow(c2x,2)*c3x - pow(b2y,2)*b3x*pow(c2x,2)*c3x - 2*b2x*b2y*b3y*pow(c2x,2)*c3x + 4*b2x*b2y*b3x*c2x*c2y*c3x + 2*pow(b2x,2)*b3y*c2x*c2y*c3x - 
   2*pow(b2y,2)*b3y*c2x*c2y*c3x - pow(b2x,2)*b3x*pow(c2y,2)*c3x + pow(b2y,2)*b3x*pow(c2y,2)*c3x + 2*b2x*b2y*b3y*pow(c2y,2)*c3x + 2*b2x*b2y*b3x*pow(c2x,2)*c3y + 
   pow(b2x,2)*b3y*pow(c2x,2)*c3y - pow(b2y,2)*b3y*pow(c2x,2)*c3y - 2*pow(b2x,2)*b3x*c2x*c2y*c3y + 2*pow(b2y,2)*b3x*c2x*c2y*c3y + 4*b2x*b2y*b3y*c2x*c2y*c3y - 
   2*b2x*b2y*b3x*pow(c2y,2)*c3y - pow(b2x,2)*b3y*pow(c2y,2)*c3y + pow(b2y,2)*b3y*pow(c2y,2)*c3y);
  qanal[anal].qBAcnt[bin][j]->Fill(0.,b2w*b2w*b3w*a2w*a2w*a3w);
  qanal[anal].qCAcnt[bin][j]->Fill(0.,c2w*c2w*c3w*a2w*a2w*a3w);
  qanal[anal].qCBcnt[bin][j]->Fill(0.,c2w*c2w*c3w*b2w*b2w*b3w);

}

void Fill_N723A(int anal, int bin, TH2D * qxtrk_, TH2D * qytrk_, TH2D * qcnt_, double * qx, double * qy, double * sumw){
  double a2x = qx[HFp2];
  double a2y = qy[HFp2];
  double a2w = sumw[HFp2];
  double a3x = qx[HFm3];
  double a3y = qy[HFm3];
  double a3w = sumw[HFm3];

  double b2x = qx[HFm2];
  double b2y = qy[HFm2];
  double b2w = sumw[HFm2];
  double b3x = qx[HFp3];
  double b3y = qy[HFp3];
  double b3w = sumw[HFp3];

  double c2x = qx[trackmid2];
  double c2y = qy[trackmid2];
  double c2w = sumw[trackmid2];
  double c3x = qx[trackmid3];
  double c3y = qy[trackmid3];
  double c3w = sumw[trackmid3];

  qanal[anal].qA[bin][0]->Add(qxtrk_,pow(a2x,2)*a3x - pow(a2y,2)*a3x- 2*a2x*a2y*a3y);
  qanal[anal].qA[bin][0]->Add(qytrk_,2*a2x*a2y*a3x + pow(a2x,2)*a3y- pow(a2y,2)*a3y );
  qanal[anal].qB[bin][0]->Add(qxtrk_,pow(b2x,2)*b3x - pow(b2y,2)*b3x - 2*b2x*b2y*b3y);
  qanal[anal].qB[bin][0]->Add(qytrk_, 2*b2x*b2y*b3x + pow(b2x,2)*b3y - pow(b2y,2)*b3y );
  qanal[anal].wnA[bin][0]->Add(qcnt_,a2w*a2w*a3w);
  qanal[anal].wnB[bin][0]->Add(qcnt_,b2w*b2w*b3w);
  qanal[anal].qBA[bin][0]->Fill(0.,pow(a2x,2)*a3x*pow(b2x,2)*b3x - pow(a2y,2)*a3x*pow(b2x,2)*b3x - 2*a2x*a2y*a3y*pow(b2x,2)*b3x + 4*a2x*a2y*a3x*b2x*b2y*b3x + 2*pow(a2x,2)*a3y*b2x*b2y*b3x - 
   2*pow(a2y,2)*a3y*b2x*b2y*b3x - pow(a2x,2)*a3x*pow(b2y,2)*b3x + pow(a2y,2)*a3x*pow(b2y,2)*b3x + 2*a2x*a2y*a3y*pow(b2y,2)*b3x + 2*a2x*a2y*a3x*pow(b2x,2)*b3y + 
   pow(a2x,2)*a3y*pow(b2x,2)*b3y - pow(a2y,2)*a3y*pow(b2x,2)*b3y - 2*pow(a2x,2)*a3x*b2x*b2y*b3y + 2*pow(a2y,2)*a3x*b2x*b2y*b3y + 4*a2x*a2y*a3y*b2x*b2y*b3y - 
   2*a2x*a2y*a3x*pow(b2y,2)*b3y - pow(a2x,2)*a3y*pow(b2y,2)*b3y + pow(a2y,2)*a3y*pow(b2y,2)*b3y);
  qanal[anal].qCA[bin][0]->Fill(0.,pow(a2x,2)*a3x*pow(c2x,2)*c3x - pow(a2y,2)*a3x*pow(c2x,2)*c3x - 2*a2x*a2y*a3y*pow(c2x,2)*c3x + 4*a2x*a2y*a3x*c2x*c2y*c3x + 2*pow(a2x,2)*a3y*c2x*c2y*c3x - 
   2*pow(a2y,2)*a3y*c2x*c2y*c3x - pow(a2x,2)*a3x*pow(c2y,2)*c3x + pow(a2y,2)*a3x*pow(c2y,2)*c3x + 2*a2x*a2y*a3y*pow(c2y,2)*c3x + 2*a2x*a2y*a3x*pow(c2x,2)*c3y + 
   pow(a2x,2)*a3y*pow(c2x,2)*c3y - pow(a2y,2)*a3y*pow(c2x,2)*c3y - 2*pow(a2x,2)*a3x*c2x*c2y*c3y + 2*pow(a2y,2)*a3x*c2x*c2y*c3y + 4*a2x*a2y*a3y*c2x*c2y*c3y - 
   2*a2x*a2y*a3x*pow(c2y,2)*c3y - pow(a2x,2)*a3y*pow(c2y,2)*c3y + pow(a2y,2)*a3y*pow(c2y,2)*c3y);
  qanal[anal].qCB[bin][0]->Fill(0.,pow(b2x,2)*b3x*pow(c2x,2)*c3x - pow(b2y,2)*b3x*pow(c2x,2)*c3x - 2*b2x*b2y*b3y*pow(c2x,2)*c3x + 4*b2x*b2y*b3x*c2x*c2y*c3x + 2*pow(b2x,2)*b3y*c2x*c2y*c3x - 
   2*pow(b2y,2)*b3y*c2x*c2y*c3x - pow(b2x,2)*b3x*pow(c2y,2)*c3x + pow(b2y,2)*b3x*pow(c2y,2)*c3x + 2*b2x*b2y*b3y*pow(c2y,2)*c3x + 2*b2x*b2y*b3x*pow(c2x,2)*c3y + 
   pow(b2x,2)*b3y*pow(c2x,2)*c3y - pow(b2y,2)*b3y*pow(c2x,2)*c3y - 2*pow(b2x,2)*b3x*c2x*c2y*c3y + 2*pow(b2y,2)*b3x*c2x*c2y*c3y + 4*b2x*b2y*b3y*c2x*c2y*c3y - 
   2*b2x*b2y*b3x*pow(c2y,2)*c3y - pow(b2x,2)*b3y*pow(c2y,2)*c3y + pow(b2y,2)*b3y*pow(c2y,2)*c3y);
  qanal[anal].qBAcnt[bin][0]->Fill(0.,b2w*b2w*b3w*a2w*a2w*a3w);
  qanal[anal].qCAcnt[bin][0]->Fill(0.,c2w*c2w*c3w*a2w*a2w*a3w);
  qanal[anal].qCBcnt[bin][0]->Fill(0.,c2w*c2w*c3w*b2w*b2w*b3w);
 
 int j=(int)(ran->Uniform(0,9.999))+1;
  qanal[anal].qA[bin][j]->Add(qxtrk_,pow(a2x,2)*a3x - pow(a2y,2)*a3x- 2*a2x*a2y*a3y);
  qanal[anal].qA[bin][j]->Add(qytrk_,2*a2x*a2y*a3x + pow(a2x,2)*a3y- pow(a2y,2)*a3y );
  qanal[anal].qB[bin][j]->Add(qxtrk_,pow(b2x,2)*b3x - pow(b2y,2)*b3x - 2*b2x*b2y*b3y);
  qanal[anal].qB[bin][j]->Add(qytrk_, 2*b2x*b2y*b3x + pow(b2x,2)*b3y - pow(b2y,2)*b3y );
  qanal[anal].wnA[bin][j]->Add(qcnt_,a2w*a2w*a3w);
  qanal[anal].wnB[bin][j]->Add(qcnt_,b2w*a2w*b3w);
  qanal[anal].qBA[bin][j]->Fill(0.,pow(a2x,2)*a3x*pow(b2x,2)*b3x - pow(a2y,2)*a3x*pow(b2x,2)*b3x - 2*a2x*a2y*a3y*pow(b2x,2)*b3x + 4*a2x*a2y*a3x*b2x*b2y*b3x + 2*pow(a2x,2)*a3y*b2x*b2y*b3x - 
   2*pow(a2y,2)*a3y*b2x*b2y*b3x - pow(a2x,2)*a3x*pow(b2y,2)*b3x + pow(a2y,2)*a3x*pow(b2y,2)*b3x + 2*a2x*a2y*a3y*pow(b2y,2)*b3x + 2*a2x*a2y*a3x*pow(b2x,2)*b3y + 
   pow(a2x,2)*a3y*pow(b2x,2)*b3y - pow(a2y,2)*a3y*pow(b2x,2)*b3y - 2*pow(a2x,2)*a3x*b2x*b2y*b3y + 2*pow(a2y,2)*a3x*b2x*b2y*b3y + 4*a2x*a2y*a3y*b2x*b2y*b3y - 
   2*a2x*a2y*a3x*pow(b2y,2)*b3y - pow(a2x,2)*a3y*pow(b2y,2)*b3y + pow(a2y,2)*a3y*pow(b2y,2)*b3y);
  qanal[anal].qCA[bin][j]->Fill(0.,pow(a2x,2)*a3x*pow(c2x,2)*c3x - pow(a2y,2)*a3x*pow(c2x,2)*c3x - 2*a2x*a2y*a3y*pow(c2x,2)*c3x + 4*a2x*a2y*a3x*c2x*c2y*c3x + 2*pow(a2x,2)*a3y*c2x*c2y*c3x - 
   2*pow(a2y,2)*a3y*c2x*c2y*c3x - pow(a2x,2)*a3x*pow(c2y,2)*c3x + pow(a2y,2)*a3x*pow(c2y,2)*c3x + 2*a2x*a2y*a3y*pow(c2y,2)*c3x + 2*a2x*a2y*a3x*pow(c2x,2)*c3y + 
   pow(a2x,2)*a3y*pow(c2x,2)*c3y - pow(a2y,2)*a3y*pow(c2x,2)*c3y - 2*pow(a2x,2)*a3x*c2x*c2y*c3y + 2*pow(a2y,2)*a3x*c2x*c2y*c3y + 4*a2x*a2y*a3y*c2x*c2y*c3y - 
   2*a2x*a2y*a3x*pow(c2y,2)*c3y - pow(a2x,2)*a3y*pow(c2y,2)*c3y + pow(a2y,2)*a3y*pow(c2y,2)*c3y);
  qanal[anal].qCB[bin][j]->Fill(0.,pow(b2x,2)*b3x*pow(c2x,2)*c3x - pow(b2y,2)*b3x*pow(c2x,2)*c3x - 2*b2x*b2y*b3y*pow(c2x,2)*c3x + 4*b2x*b2y*b3x*c2x*c2y*c3x + 2*pow(b2x,2)*b3y*c2x*c2y*c3x - 
   2*pow(b2y,2)*b3y*c2x*c2y*c3x - pow(b2x,2)*b3x*pow(c2y,2)*c3x + pow(b2y,2)*b3x*pow(c2y,2)*c3x + 2*b2x*b2y*b3y*pow(c2y,2)*c3x + 2*b2x*b2y*b3x*pow(c2x,2)*c3y + 
   pow(b2x,2)*b3y*pow(c2x,2)*c3y - pow(b2y,2)*b3y*pow(c2x,2)*c3y - 2*pow(b2x,2)*b3x*c2x*c2y*c3y + 2*pow(b2y,2)*b3x*c2x*c2y*c3y + 4*b2x*b2y*b3y*c2x*c2y*c3y - 
   2*b2x*b2y*b3x*pow(c2y,2)*c3y - pow(b2x,2)*b3y*pow(c2y,2)*c3y + pow(b2y,2)*b3y*pow(c2y,2)*c3y);
  qanal[anal].qBAcnt[bin][j]->Fill(0.,b2w*b2w*b3w*a2w*a2w*a3w);
  qanal[anal].qCAcnt[bin][j]->Fill(0.,c2w*c2w*c3w*a2w*a2w*a3w);
  qanal[anal].qCBcnt[bin][j]->Fill(0.,c2w*c2w*c3w*b2w*b2w*b3w);

}
void Fill_D24(int anal, int bin, TH2D * qxtrk_, TH2D * qytrk_, TH2D * qcnt_, double * qx, double * qy, double * sumw){
  double ax = qx[HFp2];
  double ay = qy[HFp2];
  double wa = sumw[HFp2];

  double bx = qx[HFm2];
  double by = qy[HFm2];
  double wb = sumw[HFm2];

  double cx = qx[trackmid2];
  double cy = qy[trackmid2];
  double wc = sumw[trackmid2];
  qxy->Reset();
  qxy->Add(qxtrk_,1.);
  qxy->Multiply(qytrk_);

  qxt->Reset();
  qxt->Add(qxtrk_,1.);
  qxt->Multiply(qxtrk_);
  qyt->Reset();
  qyt->Add(qytrk_,1.);
  qyt->Multiply(qytrk_);
  qct->Reset();
  qct->Add(qcnt_,1.);
  qct->Multiply(qcnt_);

  qanal[anal].qA[bin][0]->Add(qxt, pow(ax,2) - pow(ay,2));
  qanal[anal].qA[bin][0]->Add(qyt, pow(ay,2) - pow(ax,2));
  qanal[anal].qA[bin][0]->Add(qxy, 4*ax*ay);
  
  qanal[anal].qB[bin][0]->Add(qxt, pow(bx,2) - pow(by,2));
  qanal[anal].qB[bin][0]->Add(qyt, pow(by,2) - pow(bx,2));
  qanal[anal].qB[bin][0]->Add(qxy, 4*bx*by);
  
  qanal[anal].wnA[bin][0]->Add(qct,pow(wa,2));
  qanal[anal].wnB[bin][0]->Add(qct,pow(wb,2));
  qanal[anal].qBA[bin][0]->Fill(0.,pow(ax,2)*(pow(bx,2)-pow(by,2)) + pow(ay,2)*(pow(by,2)-pow(bx,2))+4*ax*ay*bx*by);
  qanal[anal].qCA[bin][0]->Fill(0.,pow(ax,2)*(pow(cx,2)-pow(cy,2)) + pow(ay,2)*(pow(cy,2)-pow(cx,2))+4*ax*ay*cx*cy);
  qanal[anal].qCB[bin][0]->Fill(0.,pow(bx,2)*(pow(cx,2)-pow(cy,2)) + pow(by,2)*(pow(cy,2)-pow(cx,2))+4*bx*by*cx*cy);
  qanal[anal].qBAcnt[bin][0]->Fill(0.,pow(wa*wb,2));
  qanal[anal].qCAcnt[bin][0]->Fill(0.,pow(wa*wc,2));
  qanal[anal].qCBcnt[bin][0]->Fill(0.,pow(wb*wc,2));
  
  int j=(int)(ran->Uniform(0,9.999))+1;
  qanal[anal].qA[bin][j]->Add(qxt, pow(ax,2) - pow(ay,2));
  qanal[anal].qA[bin][j]->Add(qyt, pow(ay,2) - pow(ax,2));
  qanal[anal].qA[bin][j]->Add(qxy, 4*ax*ay);
  
  qanal[anal].qB[bin][j]->Add(qxt, pow(bx,2) - pow(by,2));
  qanal[anal].qB[bin][j]->Add(qyt, pow(by,2) - pow(bx,2));
  qanal[anal].qB[bin][j]->Add(qxy, 4*bx*by);
  
  qanal[anal].wnA[bin][j]->Add(qct,pow(wa,2));
  qanal[anal].wnB[bin][j]->Add(qct,pow(wb,2));
  qanal[anal].qBA[bin][j]->Fill(0.,pow(ax,2)*(pow(bx,2)-pow(by,2)) + pow(ay,2)*(pow(by,2)-pow(bx,2))+4*ax*ay*bx*by);
  qanal[anal].qCA[bin][j]->Fill(0.,pow(ax,2)*(pow(cx,2)-pow(cy,2)) + pow(ay,2)*(pow(cy,2)-pow(cx,2))+4*ax*ay*cx*cy);
  qanal[anal].qCB[bin][j]->Fill(0.,pow(bx,2)*(pow(cx,2)-pow(cy,2)) + pow(by,2)*(pow(cy,2)-pow(cx,2))+4*bx*by*cx*cy);
  qanal[anal].qBAcnt[bin][j]->Fill(0.,pow(wa*wb,2));
  qanal[anal].qCAcnt[bin][j]->Fill(0.,pow(wa*wc,2));
  qanal[anal].qCBcnt[bin][j]->Fill(0.,pow(wb*wc,2));
  
}


void Fill_D26(int anal, int bin, TH2D * qxtrk_, TH2D * qytrk_, TH2D * qcnt_, double * qx, double * qy, double * sumw){
  double ax = qx[HFp2];
  double ay = qy[HFp2];
  double wa = sumw[HFp2];

  double bx = qx[HFm2];
  double by = qy[HFm2];
  double wb = sumw[HFm2];

  double cx = qx[trackmid2];
  double cy = qy[trackmid2];
  double wc = sumw[trackmid2];
  qxxy->Reset();
  qxxy->Add(qxtrk_,1.);
  qxxy->Multiply(qxtrk_);
  qxxy->Multiply(qytrk_);

  qxyy->Reset();
  qxyy->Add(qxtrk_,1.);
  qxyy->Multiply(qytrk_);
  qxyy->Multiply(qytrk_);

  qxt->Reset();
  qxt->Add(qxtrk_,1.);
  qxt->Multiply(qxtrk_);
  qxt->Multiply(qxtrk_);
  qyt->Reset();
  qyt->Add(qytrk_,1.);
  qyt->Multiply(qytrk_);
  qyt->Multiply(qytrk_);
  qct->Reset();
  qct->Add(qcnt_,1.);
  qct->Multiply(qcnt_);
  qct->Multiply(qcnt_);


  qanal[anal].qA[bin][0]->Add(qxt, pow(ax,3) - 3*ax*pow(ay,2));
  qanal[anal].qA[bin][0]->Add(qyt, pow(ay,3) - 3*ay*pow(ax,2));
  qanal[anal].qA[bin][0]->Add(qxxy, 9*pow(ax,2)*ay - 3*pow(ay,3));
  qanal[anal].qA[bin][0]->Add(qxyy, 9*pow(ay,2)*ax - 3*pow(ax,3));

  qanal[anal].qB[bin][0]->Add(qxt, pow(bx,3) - 3*bx*pow(by,2));
  qanal[anal].qB[bin][0]->Add(qyt, pow(by,3) - 3*by*pow(bx,2));
  qanal[anal].qB[bin][0]->Add(qxxy, 9*pow(bx,2)*by - 3*pow(by,3));
  qanal[anal].qB[bin][0]->Add(qxyy, 9*pow(by,2)*bx - 3*pow(bx,3));
  
  qanal[anal].wnA[bin][0]->Add(qct,pow(wa,3));
  qanal[anal].wnB[bin][0]->Add(qct,pow(wb,3));
  qanal[anal].qBA[bin][0]->Fill(0.,pow(ax,3)*pow(bx,3) - 2*pow(ax,2)*ay*pow(bx,3) - ax*pow(ay,2)*pow(bx,3) + 3*pow(ax,3)*pow(bx,2)*by + 6*pow(ax,2)*ay*pow(bx,2)*by - 
		    3*ax*pow(ay,2)*pow(bx,2)*by - 3*pow(ax,3)*bx*pow(by,2) + 6*pow(ax,2)*ay*bx*pow(by,2) + 3*ax*pow(ay,2)*bx*pow(by,2) - 
		    pow(ax,3)*pow(by,3) - 2*pow(ax,2)*ay*pow(by,3) + ax*pow(ay,2)*pow(by,3));
  qanal[anal].qCA[bin][0]->Fill(0.,pow(ax,3)*pow(cx,3) - 2*pow(ax,2)*ay*pow(cx,3) - ax*pow(ay,2)*pow(cx,3) + 3*pow(ax,3)*pow(cx,2)*cy + 6*pow(ax,2)*ay*pow(cx,2)*cy - 
		    3*ax*pow(ay,2)*pow(cx,2)*cy - 3*pow(ax,3)*cx*pow(cy,2) + 6*pow(ax,2)*ay*cx*pow(cy,2) + 3*ax*pow(ay,2)*cx*pow(cy,2) - 
		    pow(ax,3)*pow(cy,3) - 2*pow(ax,2)*ay*pow(cy,3) + ax*pow(ay,2)*pow(cy,3));
  qanal[anal].qCB[bin][0]->Fill(0.,pow(bx,3)*pow(cx,3) - 2*pow(bx,2)*by*pow(cx,3) - bx*pow(by,2)*pow(cx,3) + 3*pow(bx,3)*pow(cx,2)*cy + 6*pow(bx,2)*by*pow(cx,2)*cy - 
		    3*bx*pow(by,2)*pow(cx,2)*cy - 3*pow(bx,3)*cx*pow(cy,2) + 6*pow(bx,2)*by*cx*pow(cy,2) + 3*bx*pow(by,2)*cx*pow(cy,2) - 
		    pow(bx,3)*pow(cy,3) - 2*pow(bx,2)*by*pow(cy,3) + bx*pow(by,2)*pow(cy,3));
  qanal[anal].qBAcnt[bin][0]->Fill(0.,pow(wa*wb,3));
  qanal[anal].qCAcnt[bin][0]->Fill(0.,pow(wa*wc,3));
  qanal[anal].qCBcnt[bin][0]->Fill(0.,pow(wb*wc,3));
  
  int j=(int)(ran->Uniform(0,9.999))+1;
  qanal[anal].qA[bin][j]->Add(qxt, pow(ax,3) - 3*ax*pow(ay,2));
  qanal[anal].qA[bin][j]->Add(qyt, pow(ay,3) - 3*ay*pow(ax,2));
  qanal[anal].qA[bin][j]->Add(qxxy, 9*pow(ax,2)*ay - 3*pow(ay,3));
  qanal[anal].qA[bin][j]->Add(qxyy, 9*pow(ay,2)*ax - 3*pow(ax,3));
  
  qanal[anal].qB[bin][j]->Add(qxt, pow(bx,3) - 3*bx*pow(by,2));
  qanal[anal].qB[bin][j]->Add(qyt, pow(by,3) - 3*by*pow(bx,2));
  qanal[anal].qB[bin][j]->Add(qxxy, 9*pow(bx,2)*by - 3*pow(by,3));
  qanal[anal].qB[bin][j]->Add(qxyy, 9*pow(by,2)*bx - 3*pow(bx,3));
  
  qanal[anal].wnA[bin][j]->Add(qct,pow(wa,3));
  qanal[anal].wnB[bin][j]->Add(qct,pow(wb,3));
  qanal[anal].qBA[bin][j]->Fill(0.,pow(ax,3)*pow(bx,3) - 2*pow(ax,2)*ay*pow(bx,3) - ax*pow(ay,2)*pow(bx,3) + 3*pow(ax,3)*pow(bx,2)*by + 6*pow(ax,2)*ay*pow(bx,2)*by - 
		    3*ax*pow(ay,2)*pow(bx,2)*by - 3*pow(ax,3)*bx*pow(by,2) + 6*pow(ax,2)*ay*bx*pow(by,2) + 3*ax*pow(ay,2)*bx*pow(by,2) - 
		    pow(ax,3)*pow(by,3) - 2*pow(ax,2)*ay*pow(by,3) + ax*pow(ay,2)*pow(by,3));
  qanal[anal].qCA[bin][j]->Fill(0.,pow(ax,3)*pow(cx,3) - 2*pow(ax,2)*ay*pow(cx,3) - ax*pow(ay,2)*pow(cx,3) + 3*pow(ax,3)*pow(cx,2)*cy + 6*pow(ax,2)*ay*pow(cx,2)*cy - 
		    3*ax*pow(ay,2)*pow(cx,2)*cy - 3*pow(ax,3)*cx*pow(cy,2) + 6*pow(ax,2)*ay*cx*pow(cy,2) + 3*ax*pow(ay,2)*cx*pow(cy,2) - 
		    pow(ax,3)*pow(cy,3) - 2*pow(ax,2)*ay*pow(cy,3) + ax*pow(ay,2)*pow(cy,3));
  qanal[anal].qCB[bin][j]->Fill(0.,pow(bx,3)*pow(cx,3) - 2*pow(bx,2)*by*pow(cx,3) - bx*pow(by,2)*pow(cx,3) + 3*pow(bx,3)*pow(cx,2)*cy + 6*pow(bx,2)*by*pow(cx,2)*cy - 
		    3*bx*pow(by,2)*pow(cx,2)*cy - 3*pow(bx,3)*cx*pow(cy,2) + 6*pow(bx,2)*by*cx*pow(cy,2) + 3*bx*pow(by,2)*cx*pow(cy,2) - 
		    pow(bx,3)*pow(cy,3) - 2*pow(bx,2)*by*pow(cy,3) + bx*pow(by,2)*pow(cy,3));
  qanal[anal].qBAcnt[bin][j]->Fill(0.,pow(wa*wb,3));
  qanal[anal].qCAcnt[bin][j]->Fill(0.,pow(wa*wc,3));
  qanal[anal].qCBcnt[bin][j]->Fill(0.,pow(wb*wc,3));
  
}
void Fill_D34(int anal, int bin, TH2D * qxtrk_, TH2D * qytrk_, TH2D * qcnt_, double * qx, double * qy, double * sumw){
  double ax = qx[HFp3];
  double ay = qy[HFp3];
  double wa = sumw[HFp3];

  double bx = qx[HFm3];
  double by = qy[HFm3];
  double wb = sumw[HFm3];

  double cx = qx[trackmid3];
  double cy = qy[trackmid3];
  double wc = sumw[trackmid3];
  qxy->Reset();
  qxy->Add(qxtrk_,1.);
  qxy->Multiply(qytrk_);

  qxt->Reset();
  qxt->Add(qxtrk_,1.);
  qxt->Multiply(qxtrk_);
  qyt->Reset();
  qyt->Add(qytrk_,1.);
  qyt->Multiply(qytrk_);
  qct->Reset();
  qct->Add(qcnt_,1.);
  qct->Multiply(qcnt_);


  qanal[anal].qA[bin][0]->Add(qxt, pow(ax,2) - pow(ay,2));
  qanal[anal].qA[bin][0]->Add(qyt, pow(ay,2) - pow(ax,2));
  qanal[anal].qA[bin][0]->Add(qxy, 4*ax*ay);

  qanal[anal].qB[bin][0]->Add(qxt, pow(bx,2) - pow(by,2));
  qanal[anal].qB[bin][0]->Add(qyt, pow(by,2) - pow(bx,2));
  qanal[anal].qB[bin][0]->Add(qxy, 4*bx*by);

  qanal[anal].wnA[bin][0]->Add(qct,pow(wa,2));
  qanal[anal].wnB[bin][0]->Add(qct,pow(wb,2));
  qanal[anal].qBA[bin][0]->Fill(0.,pow(ax,2)*(pow(bx,2)-pow(by,2)) + pow(ay,2)*(pow(by,2)-pow(bx,2))+4*ax*ay*bx*by);
  qanal[anal].qCA[bin][0]->Fill(0.,pow(ax,2)*(pow(cx,2)-pow(cy,2)) + pow(ay,2)*(pow(cy,2)-pow(cx,2))+4*ax*ay*cx*cy);
  qanal[anal].qCB[bin][0]->Fill(0.,pow(bx,2)*(pow(cx,2)-pow(cy,2)) + pow(by,2)*(pow(cy,2)-pow(cx,2))+4*bx*by*cx*cy);
  qanal[anal].qBAcnt[bin][0]->Fill(0.,pow(wa*wb,2));
  qanal[anal].qCAcnt[bin][0]->Fill(0.,pow(wa*wc,2));
  qanal[anal].qCBcnt[bin][0]->Fill(0.,pow(wb*wc,2));

  int j=(int)(ran->Uniform(0,9.999))+1;
  qanal[anal].qA[bin][j]->Add(qxt, pow(ax,2) - pow(ay,2));
  qanal[anal].qA[bin][j]->Add(qyt, pow(ay,2) - pow(ax,2));
  qanal[anal].qA[bin][j]->Add(qxy, 4*ax*ay);
  
  qanal[anal].qB[bin][j]->Add(qxt, pow(bx,2) - pow(by,2));
  qanal[anal].qB[bin][j]->Add(qyt, pow(by,2) - pow(bx,2));
  qanal[anal].qB[bin][j]->Add(qxy, 4*bx*by);
  
  qanal[anal].wnA[bin][j]->Add(qct,pow(wa,2));
  qanal[anal].wnB[bin][j]->Add(qct,pow(wb,2));
  qanal[anal].qBA[bin][j]->Fill(0.,pow(ax,2)*(pow(bx,2)-pow(by,2)) + pow(ay,2)*(pow(by,2)-pow(bx,2))+4*ax*ay*bx*by);
  qanal[anal].qCA[bin][j]->Fill(0.,pow(ax,2)*(pow(cx,2)-pow(cy,2)) + pow(ay,2)*(pow(cy,2)-pow(cx,2))+4*ax*ay*cx*cy);
  qanal[anal].qCB[bin][j]->Fill(0.,pow(bx,2)*(pow(cx,2)-pow(cy,2)) + pow(by,2)*(pow(cy,2)-pow(cx,2))+4*bx*by*cx*cy);
  qanal[anal].qBAcnt[bin][j]->Fill(0.,pow(wa*wb,2));
  qanal[anal].qCAcnt[bin][j]->Fill(0.,pow(wa*wc,2));
  qanal[anal].qCBcnt[bin][j]->Fill(0.,pow(wb*wc,2));
  
  
}

void Fill_D2232(int anal, int bin, TH2D * qxtrk2_, TH2D * qytrk2_, TH2D * qxtrk3_, TH2D * qytrk3_, TH2D * qcnt_, double * qx, double * qy, double * sumw){

  double a2x = qx[HFp2];
  double a2y = qy[HFp2];
  double a2w = sumw[HFp2];
  double a3x = qx[HFp3];
  double a3y = qy[HFp3];
  double a3w = sumw[HFp3];

  double b2x = qx[HFm2];
  double b2y = qy[HFm2];
  double b2w = sumw[HFm2];
  double b3x = qx[HFm3];
  double b3y = qy[HFm3];
  double b3w = sumw[HFm3];

  double c2x = qx[trackmid2];
  double c2y = qy[trackmid2];
  double c2w = sumw[trackmid2];
  double c3x = qx[trackmid3];
  double c3y = qy[trackmid3];
  double c3w = sumw[trackmid3];

  qx2y3->Reset();
  qx2y3->Add(qxtrk2_,1.);
  qx2y3->Multiply(qytrk3_);

  qy2x3->Reset();
  qy2x3->Add(qytrk2_,1.);
  qy2x3->Multiply(qxtrk3_);

  qxt->Reset();
  qxt->Add(qxtrk2_,1.);
  qxt->Multiply(qxtrk3_);
  qyt->Reset();
  qyt->Add(qytrk2_,1.);
  qyt->Multiply(qytrk3_);
  qct->Reset();
  qct->Add(qcnt_,1.);
  qct->Multiply(qcnt_);


  //  qxtrk2_->Multiply(qxtrk3_);
  //  qytrk2_->Multiply(qytrk3_);
  //
  //qcnt_->Multiply(qcnt_);

  qanal[anal].qA[bin][0]->Add(qxt,a2x*a3x-a2y*a3y);
  qanal[anal].qA[bin][0]->Add(qyt,a2y*a3y-a2x*a3x);
  qanal[anal].qA[bin][0]->Add(qy2x3,  a2y*a3x+a2x*a3y);
  qanal[anal].qA[bin][0]->Add(qx2y3,  a2y*a3x+a2x*a3y);

  qanal[anal].qB[bin][0]->Add(qxt,b2x*b3x-b2y*b3y);
  qanal[anal].qB[bin][0]->Add(qyt,b2y*b3y-b2x*b3x);
  qanal[anal].qB[bin][0]->Add(qy2x3,  b2y*b3x+b2x*b3y);
  qanal[anal].qB[bin][0]->Add(qx2y3,  b2y*b3x+b2x*b3y);

  qanal[anal].wnA[bin][0]->Add(qct,a2w*a3w);
  qanal[anal].wnB[bin][0]->Add(qct,b2w*b3w);

  qanal[anal].qBA[bin][0]->Fill(0.,a2x*a3x*b2x*b3x - a2y*a3y*b2x*b3x + a2y*a3x*b2y*b3x + a2x*a3y*b2y*b3x + a2y*a3x*b2x*b3y + a2x*a3y*b2x*b3y - a2x*a3x*b2y*b3y + a2y*a3y*b2y*b3y);
  qanal[anal].qCA[bin][0]->Fill(0.,a2x*a3x*c2x*c3x - a2y*a3y*c2x*c3x + a2y*a3x*c2y*c3x + a2x*a3y*c2y*c3x + a2y*a3x*c2x*c3y + a2x*a3y*c2x*c3y - a2x*a3x*c2y*c3y + a2y*a3y*c2y*c3y);
  qanal[anal].qCB[bin][0]->Fill(0.,b2x*b3x*c2x*c3x - b2y*b3y*c2x*c3x + b2y*b3x*c2y*c3x + b2x*b3y*c2y*c3x + b2y*b3x*c2x*c3y + b2x*b3y*c2x*c3y - b2x*b3x*c2y*c3y + b2y*b3y*c2y*c3y);
  qanal[anal].qBAcnt[bin][0]->Fill(0.,b2w*b3w*a2w*a3w);
  qanal[anal].qCAcnt[bin][0]->Fill(0.,c2w*c3w*a2w*a3w);
  qanal[anal].qCBcnt[bin][0]->Fill(0.,c2w*c3w*b2w*b3w);
  
  int j=(int)(ran->Uniform(0,9.999))+1;


  qanal[anal].qA[bin][j]->Add(qxt,a2x*a3x-a2y*a3y);
  qanal[anal].qA[bin][j]->Add(qyt,a2y*a3y-a2x*a3x);
  qanal[anal].qA[bin][j]->Add(qy2x3,  a2y*a3x+a2x*a3y);
  qanal[anal].qA[bin][j]->Add(qx2y3,  a2y*a3x+a2x*a3y);

  qanal[anal].qB[bin][j]->Add(qxt,b2x*b3x-b2y*b3y);
  qanal[anal].qB[bin][j]->Add(qyt,b2y*b3y-b2x*b3x);
  qanal[anal].qB[bin][j]->Add(qy2x3,  b2y*b3x+b2x*b3y);
  qanal[anal].qB[bin][j]->Add(qx2y3,  b2y*b3x+b2x*b3y);

  qanal[anal].wnA[bin][j]->Add(qct,a2w*a3w);
  qanal[anal].wnB[bin][j]->Add(qct,b2w*b3w);

  qanal[anal].qBA[bin][j]->Fill(0.,a2x*a3x*b2x*b3x - a2y*a3y*b2x*b3x + a2y*a3x*b2y*b3x + a2x*a3y*b2y*b3x + a2y*a3x*b2x*b3y + a2x*a3y*b2x*b3y - a2x*a3x*b2y*b3y + a2y*a3y*b2y*b3y);
  qanal[anal].qCA[bin][j]->Fill(0.,a2x*a3x*c2x*c3x - a2y*a3y*c2x*c3x + a2y*a3x*c2y*c3x + a2x*a3y*c2y*c3x + a2y*a3x*c2x*c3y + a2x*a3y*c2x*c3y - a2x*a3x*c2y*c3y + a2y*a3y*c2y*c3y);
  qanal[anal].qCB[bin][j]->Fill(0.,b2x*b3x*c2x*c3x - b2y*b3y*c2x*c3x + b2y*b3x*c2y*c3x + b2x*b3y*c2y*c3x + b2y*b3x*c2x*c3y + b2x*b3y*c2x*c3y - b2x*b3x*c2y*c3y + b2y*b3y*c2y*c3y);
  qanal[anal].qBAcnt[bin][j]->Fill(0.,b2w*b3w*a2w*a3w);
  qanal[anal].qCAcnt[bin][j]->Fill(0.,c2w*c3w*a2w*a3w);
  qanal[anal].qCBcnt[bin][j]->Fill(0.,c2w*c3w*b2w*b3w);
  
  
}

void Fill_D2232A(int anal, int bin, TH2D * qxtrk2_, TH2D * qytrk2_, TH2D * qxtrk3_, TH2D * qytrk3_, TH2D * qcnt_, double * qx, double * qy, double * sumw){
  double a2x = qx[HFp2];
  double a2y = qy[HFp2];
  double a2w = sumw[HFp2];
  double a3x = qx[HFm3];
  double a3y = qy[HFm3];
  double a3w = sumw[HFm3];
  
  double b2x = qx[HFm2];
  double b2y = qy[HFm2];
  double b2w = sumw[HFm2];
  double b3x = qx[HFp3];
  double b3y = qy[HFp3];
  double b3w = sumw[HFp3];
  
  double c2x = qx[trackmid2];
  double c2y = qy[trackmid2];
  double c2w = sumw[trackmid2];
  double c3x = qx[trackmid3];
  double c3y = qy[trackmid3];
  double c3w = sumw[trackmid3];

  qx2y3->Reset();
  qx2y3->Add(qxtrk2_,1.);
  qx2y3->Multiply(qytrk3_);

  qy2x3->Reset();
  qy2x3->Add(qytrk2_,1.);
  qy2x3->Multiply(qxtrk3_);


  qxt->Reset();
  qxt->Add(qxtrk2_,1.);
  qxt->Multiply(qxtrk3_);
  qyt->Reset();
  qyt->Add(qytrk2_,1.);
  qyt->Multiply(qytrk3_);
  qct->Reset();
  qct->Add(qcnt_,1.);
  qct->Multiply(qcnt_);

  qanal[anal].qA[bin][0]->Add(qxt,a2x*a3x-a2y*a3y);
  qanal[anal].qA[bin][0]->Add(qyt,a2y*a3y-a2x*a3x);
  qanal[anal].qA[bin][0]->Add(qy2x3,  a2y*a3x+a2x*a3y);
  qanal[anal].qA[bin][0]->Add(qx2y3,  a2y*a3x+a2x*a3y);

  qanal[anal].qB[bin][0]->Add(qxt,b2x*b3x-b2y*b3y);
  qanal[anal].qB[bin][0]->Add(qyt,b2y*b3y-b2x*b3x);
  qanal[anal].qB[bin][0]->Add(qy2x3,  b2y*b3x+b2x*b3y);
  qanal[anal].qB[bin][0]->Add(qx2y3,  b2y*b3x+b2x*b3y);

  qanal[anal].wnA[bin][0]->Add(qct,a2w*a3w);
  qanal[anal].wnB[bin][0]->Add(qct,b2w*b3w);

  qanal[anal].qBA[bin][0]->Fill(0.,a2x*a3x*b2x*b3x - a2y*a3y*b2x*b3x + a2y*a3x*b2y*b3x + a2x*a3y*b2y*b3x + a2y*a3x*b2x*b3y + a2x*a3y*b2x*b3y - a2x*a3x*b2y*b3y + a2y*a3y*b2y*b3y);
  qanal[anal].qCA[bin][0]->Fill(0.,a2x*a3x*c2x*c3x - a2y*a3y*c2x*c3x + a2y*a3x*c2y*c3x + a2x*a3y*c2y*c3x + a2y*a3x*c2x*c3y + a2x*a3y*c2x*c3y - a2x*a3x*c2y*c3y + a2y*a3y*c2y*c3y);
  qanal[anal].qCB[bin][0]->Fill(0.,b2x*b3x*c2x*c3x - b2y*b3y*c2x*c3x + b2y*b3x*c2y*c3x + b2x*b3y*c2y*c3x + b2y*b3x*c2x*c3y + b2x*b3y*c2x*c3y - b2x*b3x*c2y*c3y + b2y*b3y*c2y*c3y);
  qanal[anal].qBAcnt[bin][0]->Fill(0.,b2w*b3w*a2w*a3w);
  qanal[anal].qCAcnt[bin][0]->Fill(0.,c2w*c3w*a2w*a3w);
  qanal[anal].qCBcnt[bin][0]->Fill(0.,c2w*c3w*b2w*b3w);
  
  int j=(int)(ran->Uniform(0,9.999))+1;

  qanal[anal].qA[bin][j]->Add(qxt,a2x*a3x-a2y*a3y);
  qanal[anal].qA[bin][j]->Add(qyt,a2y*a3y-a2x*a3x);
  qanal[anal].qA[bin][j]->Add(qy2x3,  a2y*a3x+a2x*a3y);
  qanal[anal].qA[bin][j]->Add(qx2y3,  a2y*a3x+a2x*a3y);

  qanal[anal].qB[bin][j]->Add(qxt,b2x*b3x-b2y*b3y);
  qanal[anal].qB[bin][j]->Add(qyt,b2y*b3y-b2x*b3x);
  qanal[anal].qB[bin][j]->Add(qy2x3,  b2y*b3x+b2x*b3y);
  qanal[anal].qB[bin][j]->Add(qx2y3,  b2y*b3x+b2x*b3y);

  qanal[anal].wnA[bin][j]->Add(qct,a2w*a3w);
  qanal[anal].wnB[bin][j]->Add(qct,b2w*b3w);

  qanal[anal].qBA[bin][j]->Fill(0.,a2x*a3x*b2x*b3x - a2y*a3y*b2x*b3x + a2y*a3x*b2y*b3x + a2x*a3y*b2y*b3x + a2y*a3x*b2x*b3y + a2x*a3y*b2x*b3y - a2x*a3x*b2y*b3y + a2y*a3y*b2y*b3y);
  qanal[anal].qCA[bin][j]->Fill(0.,a2x*a3x*c2x*c3x - a2y*a3y*c2x*c3x + a2y*a3x*c2y*c3x + a2x*a3y*c2y*c3x + a2y*a3x*c2x*c3y + a2x*a3y*c2x*c3y - a2x*a3x*c2y*c3y + a2y*a3y*c2y*c3y);
  qanal[anal].qCB[bin][j]->Fill(0.,b2x*b3x*c2x*c3x - b2y*b3y*c2x*c3x + b2y*b3x*c2y*c3x + b2x*b3y*c2y*c3x + b2y*b3x*c2x*c3y + b2x*b3y*c2x*c3y - b2x*b3x*c2y*c3y + b2y*b3y*c2y*c3y);
  qanal[anal].qBAcnt[bin][j]->Fill(0.,b2w*b3w*a2w*a3w);
  qanal[anal].qCAcnt[bin][j]->Fill(0.,c2w*c3w*a2w*a3w);
  qanal[anal].qCBcnt[bin][j]->Fill(0.,c2w*c3w*b2w*b3w);
  
  
}


void Fill_D2432(int anal, int bin, TH2D * qxtrk2_, TH2D * qytrk2_, TH2D * qxtrk3_, TH2D * qytrk3_, TH2D * qcnt_, double * qx, double * qy, double * sumw){
  double a2x = qx[HFp2];
  double a2y = qy[HFp2];
  double a2w = sumw[HFp2];
  double a3x = qx[HFp3];
  double a3y = qy[HFp3];
  double a3w = sumw[HFp3];
  
  double b2x = qx[HFm2];
  double b2y = qy[HFm2];
  double b2w = sumw[HFm2];
  double b3x = qx[HFm3];
  double b3y = qy[HFm3];
  double b3w = sumw[HFm3];
  
  double c2x = qx[trackmid2];
  double c2y = qy[trackmid2];
  double c2w = sumw[trackmid2];
  double c3x = qx[trackmid3];
  double c3y = qy[trackmid3];
  double c3w = sumw[trackmid3];

  int k=(int)(ran->Uniform(0,9.999))+1;
  for(int i = 1; i<=qxtrk2_->GetNbinsX(); i++) {
    for(int j = 1; j<=qxtrk2_->GetNbinsY(); j++) {
      double q2x = qxtrk2_->GetBinContent(i,j);
      double q2y = qytrk2_->GetBinContent(i,j);
      double q3x = qxtrk3_->GetBinContent(i,j);
      double q3y = qytrk3_->GetBinContent(i,j);
      double cnt = qcnt_->GetBinContent(i,j);

      double qAterm = pow(a2x,2)*a3x*pow(q2x,2)*q3x - pow(a2y,2)*a3x*pow(q2x,2)*q3x - 2*a2x*a2y*a3y*pow(q2x,2)*q3x + 4*a2x*a2y*a3x*q2x*q2y*q3x + 
	2*pow(a2x,2)*a3y*q2x*q2y*q3x - 2*pow(a2y,2)*a3y*q2x*q2y*q3x - pow(a2x,2)*a3x*pow(q2y,2)*q3x + pow(a2y,2)*a3x*pow(q2y,2)*q3x + 
	2*a2x*a2y*a3y*pow(q2y,2)*q3x + 2*a2x*a2y*a3x*pow(q2x,2)*q3y + pow(a2x,2)*a3y*pow(q2x,2)*q3y - pow(a2y,2)*a3y*pow(q2x,2)*q3y - 
	2*pow(a2x,2)*a3x*q2x*q2y*q3y + 2*pow(a2y,2)*a3x*q2x*q2y*q3y + 4*a2x*a2y*a3y*q2x*q2y*q3y - 2*a2x*a2y*a3x*pow(q2y,2)*q3y - 
	pow(a2x,2)*a3y*pow(q2y,2)*q3y + pow(a2y,2)*a3y*pow(q2y,2)*q3y;
      double qBterm = pow(b2x,2)*b3x*pow(q2x,2)*q3x - pow(b2y,2)*b3x*pow(q2x,2)*q3x - 2*b2x*b2y*b3y*pow(q2x,2)*q3x + 4*b2x*b2y*b3x*q2x*q2y*q3x + 
	2*pow(b2x,2)*b3y*q2x*q2y*q3x - 2*pow(b2y,2)*b3y*q2x*q2y*q3x - pow(b2x,2)*b3x*pow(q2y,2)*q3x + pow(b2y,2)*b3x*pow(q2y,2)*q3x + 
	2*b2x*b2y*b3y*pow(q2y,2)*q3x + 2*b2x*b2y*b3x*pow(q2x,2)*q3y + pow(b2x,2)*b3y*pow(q2x,2)*q3y - pow(b2y,2)*b3y*pow(q2x,2)*q3y - 
	2*pow(b2x,2)*b3x*q2x*q2y*q3y + 2*pow(b2y,2)*b3x*q2x*q2y*q3y + 4*b2x*b2y*b3y*q2x*q2y*q3y - 2*b2x*b2y*b3x*pow(q2y,2)*q3y - 
	pow(b2x,2)*b3y*pow(q2y,2)*q3y + pow(b2y,2)*b3y*pow(q2y,2)*q3y;
      qanal[anal].qA[bin][0]->SetBinContent(i,j,qanal[anal].qA[bin][0]->GetBinContent(i,j) + qAterm);
      qanal[anal].qB[bin][0]->SetBinContent(i,j,qanal[anal].qB[bin][0]->GetBinContent(i,j) + qBterm);
      qanal[anal].wnA[bin][0]->SetBinContent(i,j,qanal[anal].wnA[bin][0]->GetBinContent(i,j) + pow(cnt,3)*a2w*a2w*a3w);
      qanal[anal].wnB[bin][0]->SetBinContent(i,j,qanal[anal].wnB[bin][0]->GetBinContent(i,j) + pow(cnt,3)*b2w*b2w*b3w);
      qanal[anal].qA[bin][k]->SetBinContent(i,j,qanal[anal].qA[bin][k]->GetBinContent(i,j) + qAterm);
      qanal[anal].qB[bin][k]->SetBinContent(i,j,qanal[anal].qB[bin][k]->GetBinContent(i,j) + qBterm);
      qanal[anal].wnA[bin][k]->SetBinContent(i,j,qanal[anal].wnA[bin][k]->GetBinContent(i,j) + pow(cnt,3)*a2w*a2w*a3w);
      qanal[anal].wnB[bin][k]->SetBinContent(i,j,qanal[anal].wnB[bin][k]->GetBinContent(i,j) + pow(cnt,3)*b2w*b2w*b3w);
      
    }
  }

  qanal[anal].qBA[bin][0]->Fill(0.,pow(a2x,2)*a3x*pow(b2x,2)*b3x - pow(a2y,2)*a3x*pow(b2x,2)*b3x - 2*a2x*a2y*a3y*pow(b2x,2)*b3x + 4*a2x*a2y*a3x*b2x*b2y*b3x + 2*pow(a2x,2)*a3y*b2x*b2y*b3x - 
		    2*pow(a2y,2)*a3y*b2x*b2y*b3x - pow(a2x,2)*a3x*pow(b2y,2)*b3x + pow(a2y,2)*a3x*pow(b2y,2)*b3x + 2*a2x*a2y*a3y*pow(b2y,2)*b3x + 2*a2x*a2y*a3x*pow(b2x,2)*b3y + 
		    pow(a2x,2)*a3y*pow(b2x,2)*b3y - pow(a2y,2)*a3y*pow(b2x,2)*b3y - 2*pow(a2x,2)*a3x*b2x*b2y*b3y + 2*pow(a2y,2)*a3x*b2x*b2y*b3y + 4*a2x*a2y*a3y*b2x*b2y*b3y - 
		    2*a2x*a2y*a3x*pow(b2y,2)*b3y - pow(a2x,2)*a3y*pow(b2y,2)*b3y + pow(a2y,2)*a3y*pow(b2y,2)*b3y);
  qanal[anal].qCA[bin][0]->Fill(0.,pow(a2x,2)*a3x*pow(c2x,2)*c3x - pow(a2y,2)*a3x*pow(c2x,2)*c3x - 2*a2x*a2y*a3y*pow(c2x,2)*c3x + 4*a2x*a2y*a3x*c2x*c2y*c3x + 2*pow(a2x,2)*a3y*c2x*c2y*c3x - 
		    2*pow(a2y,2)*a3y*c2x*c2y*c3x - pow(a2x,2)*a3x*pow(c2y,2)*c3x + pow(a2y,2)*a3x*pow(c2y,2)*c3x + 2*a2x*a2y*a3y*pow(c2y,2)*c3x + 2*a2x*a2y*a3x*pow(c2x,2)*c3y + 
		    pow(a2x,2)*a3y*pow(c2x,2)*c3y - pow(a2y,2)*a3y*pow(c2x,2)*c3y - 2*pow(a2x,2)*a3x*c2x*c2y*c3y + 2*pow(a2y,2)*a3x*c2x*c2y*c3y + 4*a2x*a2y*a3y*c2x*c2y*c3y - 
		    2*a2x*a2y*a3x*pow(c2y,2)*c3y - pow(a2x,2)*a3y*pow(c2y,2)*c3y + pow(a2y,2)*a3y*pow(c2y,2)*c3y);
  qanal[anal].qCB[bin][0]->Fill(0.,pow(b2x,2)*b3x*pow(c2x,2)*c3x - pow(b2y,2)*b3x*pow(c2x,2)*c3x - 2*b2x*b2y*b3y*pow(c2x,2)*c3x + 4*b2x*b2y*b3x*c2x*c2y*c3x + 2*pow(b2x,2)*b3y*c2x*c2y*c3x - 
		    2*pow(b2y,2)*b3y*c2x*c2y*c3x - pow(b2x,2)*b3x*pow(c2y,2)*c3x + pow(b2y,2)*b3x*pow(c2y,2)*c3x + 2*b2x*b2y*b3y*pow(c2y,2)*c3x + 2*b2x*b2y*b3x*pow(c2x,2)*c3y + 
		    pow(b2x,2)*b3y*pow(c2x,2)*c3y - pow(b2y,2)*b3y*pow(c2x,2)*c3y - 2*pow(b2x,2)*b3x*c2x*c2y*c3y + 2*pow(b2y,2)*b3x*c2x*c2y*c3y + 4*b2x*b2y*b3y*c2x*c2y*c3y - 
		    2*b2x*b2y*b3x*pow(c2y,2)*c3y - pow(b2x,2)*b3y*pow(c2y,2)*c3y + pow(b2y,2)*b3y*pow(c2y,2)*c3y);
  qanal[anal].qBAcnt[bin][0]->Fill(0.,b2w*b2w*b3w*a2w*a2w*a3w);
  qanal[anal].qCAcnt[bin][0]->Fill(0.,c2w*c2w*c3w*a2w*a2w*a3w);
  qanal[anal].qCBcnt[bin][0]->Fill(0.,c2w*c2w*c3w*b2w*b2w*b3w);

  qanal[anal].qBA[bin][k]->Fill(0.,pow(a2x,2)*a3x*pow(b2x,2)*b3x - pow(a2y,2)*a3x*pow(b2x,2)*b3x - 2*a2x*a2y*a3y*pow(b2x,2)*b3x + 4*a2x*a2y*a3x*b2x*b2y*b3x + 2*pow(a2x,2)*a3y*b2x*b2y*b3x - 
		    2*pow(a2y,2)*a3y*b2x*b2y*b3x - pow(a2x,2)*a3x*pow(b2y,2)*b3x + pow(a2y,2)*a3x*pow(b2y,2)*b3x + 2*a2x*a2y*a3y*pow(b2y,2)*b3x + 2*a2x*a2y*a3x*pow(b2x,2)*b3y + 
		    pow(a2x,2)*a3y*pow(b2x,2)*b3y - pow(a2y,2)*a3y*pow(b2x,2)*b3y - 2*pow(a2x,2)*a3x*b2x*b2y*b3y + 2*pow(a2y,2)*a3x*b2x*b2y*b3y + 4*a2x*a2y*a3y*b2x*b2y*b3y - 
		    2*a2x*a2y*a3x*pow(b2y,2)*b3y - pow(a2x,2)*a3y*pow(b2y,2)*b3y + pow(a2y,2)*a3y*pow(b2y,2)*b3y);
  qanal[anal].qCA[bin][k]->Fill(0.,pow(a2x,2)*a3x*pow(c2x,2)*c3x - pow(a2y,2)*a3x*pow(c2x,2)*c3x - 2*a2x*a2y*a3y*pow(c2x,2)*c3x + 4*a2x*a2y*a3x*c2x*c2y*c3x + 2*pow(a2x,2)*a3y*c2x*c2y*c3x - 
		    2*pow(a2y,2)*a3y*c2x*c2y*c3x - pow(a2x,2)*a3x*pow(c2y,2)*c3x + pow(a2y,2)*a3x*pow(c2y,2)*c3x + 2*a2x*a2y*a3y*pow(c2y,2)*c3x + 2*a2x*a2y*a3x*pow(c2x,2)*c3y + 
		    pow(a2x,2)*a3y*pow(c2x,2)*c3y - pow(a2y,2)*a3y*pow(c2x,2)*c3y - 2*pow(a2x,2)*a3x*c2x*c2y*c3y + 2*pow(a2y,2)*a3x*c2x*c2y*c3y + 4*a2x*a2y*a3y*c2x*c2y*c3y - 
		    2*a2x*a2y*a3x*pow(c2y,2)*c3y - pow(a2x,2)*a3y*pow(c2y,2)*c3y + pow(a2y,2)*a3y*pow(c2y,2)*c3y);
  qanal[anal].qCB[bin][k]->Fill(0.,pow(b2x,2)*b3x*pow(c2x,2)*c3x - pow(b2y,2)*b3x*pow(c2x,2)*c3x - 2*b2x*b2y*b3y*pow(c2x,2)*c3x + 4*b2x*b2y*b3x*c2x*c2y*c3x + 2*pow(b2x,2)*b3y*c2x*c2y*c3x - 
		    2*pow(b2y,2)*b3y*c2x*c2y*c3x - pow(b2x,2)*b3x*pow(c2y,2)*c3x + pow(b2y,2)*b3x*pow(c2y,2)*c3x + 2*b2x*b2y*b3y*pow(c2y,2)*c3x + 2*b2x*b2y*b3x*pow(c2x,2)*c3y + 
		    pow(b2x,2)*b3y*pow(c2x,2)*c3y - pow(b2y,2)*b3y*pow(c2x,2)*c3y - 2*pow(b2x,2)*b3x*c2x*c2y*c3y + 2*pow(b2y,2)*b3x*c2x*c2y*c3y + 4*b2x*b2y*b3y*c2x*c2y*c3y - 
		    2*b2x*b2y*b3x*pow(c2y,2)*c3y - pow(b2x,2)*b3y*pow(c2y,2)*c3y + pow(b2y,2)*b3y*pow(c2y,2)*c3y);
  qanal[anal].qBAcnt[bin][k]->Fill(0.,b2w*b2w*b3w*a2w*a2w*a3w);
  qanal[anal].qCAcnt[bin][k]->Fill(0.,c2w*c2w*c3w*a2w*a2w*a3w);
  qanal[anal].qCBcnt[bin][k]->Fill(0.,c2w*c2w*c3w*b2w*b2w*b3w);


}

void Fill_D2432A(int anal, int bin, TH2D * qxtrk2_, TH2D * qytrk2_, TH2D * qxtrk3_, TH2D * qytrk3_, TH2D * qcnt_, double * qx, double * qy, double * sumw){
  double a2x = qx[HFp2];
  double a2y = qy[HFp2];
  double a2w = sumw[HFp2];
  double a3x = qx[HFm3];
  double a3y = qy[HFm3];
  double a3w = sumw[HFm3];
  
  double b2x = qx[HFm2];
  double b2y = qy[HFm2];
  double b2w = sumw[HFm2];
  double b3x = qx[HFp3];
  double b3y = qy[HFp3];
  double b3w = sumw[HFp3];
  
  double c2x = qx[trackmid2];
  double c2y = qy[trackmid2];
  double c2w = sumw[trackmid2];
  double c3x = qx[trackmid3];
  double c3y = qy[trackmid3];
  double c3w = sumw[trackmid3];

  int k=(int)(ran->Uniform(0,9.999))+1;
  for(int i = 1; i<=qxtrk2_->GetNbinsX(); i++) {
    for(int j = 1; j<=qxtrk2_->GetNbinsY(); j++) {
      double q2x = qxtrk2_->GetBinContent(i,j);
      double q2y = qytrk2_->GetBinContent(i,j);
      double q3x = qxtrk3_->GetBinContent(i,j);
      double q3y = qytrk3_->GetBinContent(i,j);
      double cnt = qcnt_->GetBinContent(i,j);

      double qAterm = pow(a2x,2)*a3x*pow(q2x,2)*q3x - pow(a2y,2)*a3x*pow(q2x,2)*q3x - 2*a2x*a2y*a3y*pow(q2x,2)*q3x + 4*a2x*a2y*a3x*q2x*q2y*q3x + 
	2*pow(a2x,2)*a3y*q2x*q2y*q3x - 2*pow(a2y,2)*a3y*q2x*q2y*q3x - pow(a2x,2)*a3x*pow(q2y,2)*q3x + pow(a2y,2)*a3x*pow(q2y,2)*q3x + 
	2*a2x*a2y*a3y*pow(q2y,2)*q3x + 2*a2x*a2y*a3x*pow(q2x,2)*q3y + pow(a2x,2)*a3y*pow(q2x,2)*q3y - pow(a2y,2)*a3y*pow(q2x,2)*q3y - 
	2*pow(a2x,2)*a3x*q2x*q2y*q3y + 2*pow(a2y,2)*a3x*q2x*q2y*q3y + 4*a2x*a2y*a3y*q2x*q2y*q3y - 2*a2x*a2y*a3x*pow(q2y,2)*q3y - 
	pow(a2x,2)*a3y*pow(q2y,2)*q3y + pow(a2y,2)*a3y*pow(q2y,2)*q3y;
      double qBterm = pow(b2x,2)*b3x*pow(q2x,2)*q3x - pow(b2y,2)*b3x*pow(q2x,2)*q3x - 2*b2x*b2y*b3y*pow(q2x,2)*q3x + 4*b2x*b2y*b3x*q2x*q2y*q3x + 
	2*pow(b2x,2)*b3y*q2x*q2y*q3x - 2*pow(b2y,2)*b3y*q2x*q2y*q3x - pow(b2x,2)*b3x*pow(q2y,2)*q3x + pow(b2y,2)*b3x*pow(q2y,2)*q3x + 
	2*b2x*b2y*b3y*pow(q2y,2)*q3x + 2*b2x*b2y*b3x*pow(q2x,2)*q3y + pow(b2x,2)*b3y*pow(q2x,2)*q3y - pow(b2y,2)*b3y*pow(q2x,2)*q3y - 
	2*pow(b2x,2)*b3x*q2x*q2y*q3y + 2*pow(b2y,2)*b3x*q2x*q2y*q3y + 4*b2x*b2y*b3y*q2x*q2y*q3y - 2*b2x*b2y*b3x*pow(q2y,2)*q3y - 
	pow(b2x,2)*b3y*pow(q2y,2)*q3y + pow(b2y,2)*b3y*pow(q2y,2)*q3y;
      qanal[anal].qA[bin][0]->SetBinContent(i,j,qanal[anal].qA[bin][0]->GetBinContent(i,j) + qAterm);
      qanal[anal].qB[bin][0]->SetBinContent(i,j,qanal[anal].qB[bin][0]->GetBinContent(i,j) + qBterm);
      qanal[anal].wnA[bin][0]->SetBinContent(i,j,qanal[anal].wnA[bin][0]->GetBinContent(i,j) + pow(cnt,3)*a2w*a2w*a3w);
      qanal[anal].wnB[bin][0]->SetBinContent(i,j,qanal[anal].wnB[bin][0]->GetBinContent(i,j) + pow(cnt,3)*b2w*b2w*b3w);
      qanal[anal].qA[bin][k]->SetBinContent(i,j,qanal[anal].qA[bin][k]->GetBinContent(i,j) + qAterm);
      qanal[anal].qB[bin][k]->SetBinContent(i,j,qanal[anal].qB[bin][k]->GetBinContent(i,j) + qBterm);
      qanal[anal].wnA[bin][k]->SetBinContent(i,j,qanal[anal].wnA[bin][k]->GetBinContent(i,j) + pow(cnt,3)*a2w*a2w*a3w);
      qanal[anal].wnB[bin][k]->SetBinContent(i,j,qanal[anal].wnB[bin][k]->GetBinContent(i,j) + pow(cnt,3)*b2w*b2w*b3w);
      
    }
  }

  qanal[anal].qBA[bin][0]->Fill(0.,pow(a2x,2)*a3x*pow(b2x,2)*b3x - pow(a2y,2)*a3x*pow(b2x,2)*b3x - 2*a2x*a2y*a3y*pow(b2x,2)*b3x + 4*a2x*a2y*a3x*b2x*b2y*b3x + 2*pow(a2x,2)*a3y*b2x*b2y*b3x - 
		    2*pow(a2y,2)*a3y*b2x*b2y*b3x - pow(a2x,2)*a3x*pow(b2y,2)*b3x + pow(a2y,2)*a3x*pow(b2y,2)*b3x + 2*a2x*a2y*a3y*pow(b2y,2)*b3x + 2*a2x*a2y*a3x*pow(b2x,2)*b3y + 
		    pow(a2x,2)*a3y*pow(b2x,2)*b3y - pow(a2y,2)*a3y*pow(b2x,2)*b3y - 2*pow(a2x,2)*a3x*b2x*b2y*b3y + 2*pow(a2y,2)*a3x*b2x*b2y*b3y + 4*a2x*a2y*a3y*b2x*b2y*b3y - 
		    2*a2x*a2y*a3x*pow(b2y,2)*b3y - pow(a2x,2)*a3y*pow(b2y,2)*b3y + pow(a2y,2)*a3y*pow(b2y,2)*b3y);
  qanal[anal].qCA[bin][0]->Fill(0.,pow(a2x,2)*a3x*pow(c2x,2)*c3x - pow(a2y,2)*a3x*pow(c2x,2)*c3x - 2*a2x*a2y*a3y*pow(c2x,2)*c3x + 4*a2x*a2y*a3x*c2x*c2y*c3x + 2*pow(a2x,2)*a3y*c2x*c2y*c3x - 
		    2*pow(a2y,2)*a3y*c2x*c2y*c3x - pow(a2x,2)*a3x*pow(c2y,2)*c3x + pow(a2y,2)*a3x*pow(c2y,2)*c3x + 2*a2x*a2y*a3y*pow(c2y,2)*c3x + 2*a2x*a2y*a3x*pow(c2x,2)*c3y + 
		    pow(a2x,2)*a3y*pow(c2x,2)*c3y - pow(a2y,2)*a3y*pow(c2x,2)*c3y - 2*pow(a2x,2)*a3x*c2x*c2y*c3y + 2*pow(a2y,2)*a3x*c2x*c2y*c3y + 4*a2x*a2y*a3y*c2x*c2y*c3y - 
		    2*a2x*a2y*a3x*pow(c2y,2)*c3y - pow(a2x,2)*a3y*pow(c2y,2)*c3y + pow(a2y,2)*a3y*pow(c2y,2)*c3y);
  qanal[anal].qCB[bin][0]->Fill(0.,pow(b2x,2)*b3x*pow(c2x,2)*c3x - pow(b2y,2)*b3x*pow(c2x,2)*c3x - 2*b2x*b2y*b3y*pow(c2x,2)*c3x + 4*b2x*b2y*b3x*c2x*c2y*c3x + 2*pow(b2x,2)*b3y*c2x*c2y*c3x - 
		    2*pow(b2y,2)*b3y*c2x*c2y*c3x - pow(b2x,2)*b3x*pow(c2y,2)*c3x + pow(b2y,2)*b3x*pow(c2y,2)*c3x + 2*b2x*b2y*b3y*pow(c2y,2)*c3x + 2*b2x*b2y*b3x*pow(c2x,2)*c3y + 
		    pow(b2x,2)*b3y*pow(c2x,2)*c3y - pow(b2y,2)*b3y*pow(c2x,2)*c3y - 2*pow(b2x,2)*b3x*c2x*c2y*c3y + 2*pow(b2y,2)*b3x*c2x*c2y*c3y + 4*b2x*b2y*b3y*c2x*c2y*c3y - 
		    2*b2x*b2y*b3x*pow(c2y,2)*c3y - pow(b2x,2)*b3y*pow(c2y,2)*c3y + pow(b2y,2)*b3y*pow(c2y,2)*c3y);
  qanal[anal].qBAcnt[bin][0]->Fill(0.,b2w*b2w*b3w*a2w*a2w*a3w);
  qanal[anal].qCAcnt[bin][0]->Fill(0.,c2w*c2w*c3w*a2w*a2w*a3w);
  qanal[anal].qCBcnt[bin][0]->Fill(0.,c2w*c2w*c3w*b2w*b2w*b3w);

  qanal[anal].qBA[bin][k]->Fill(0.,pow(a2x,2)*a3x*pow(b2x,2)*b3x - pow(a2y,2)*a3x*pow(b2x,2)*b3x - 2*a2x*a2y*a3y*pow(b2x,2)*b3x + 4*a2x*a2y*a3x*b2x*b2y*b3x + 2*pow(a2x,2)*a3y*b2x*b2y*b3x - 
		    2*pow(a2y,2)*a3y*b2x*b2y*b3x - pow(a2x,2)*a3x*pow(b2y,2)*b3x + pow(a2y,2)*a3x*pow(b2y,2)*b3x + 2*a2x*a2y*a3y*pow(b2y,2)*b3x + 2*a2x*a2y*a3x*pow(b2x,2)*b3y + 
		    pow(a2x,2)*a3y*pow(b2x,2)*b3y - pow(a2y,2)*a3y*pow(b2x,2)*b3y - 2*pow(a2x,2)*a3x*b2x*b2y*b3y + 2*pow(a2y,2)*a3x*b2x*b2y*b3y + 4*a2x*a2y*a3y*b2x*b2y*b3y - 
		    2*a2x*a2y*a3x*pow(b2y,2)*b3y - pow(a2x,2)*a3y*pow(b2y,2)*b3y + pow(a2y,2)*a3y*pow(b2y,2)*b3y);
  qanal[anal].qCA[bin][k]->Fill(0.,pow(a2x,2)*a3x*pow(c2x,2)*c3x - pow(a2y,2)*a3x*pow(c2x,2)*c3x - 2*a2x*a2y*a3y*pow(c2x,2)*c3x + 4*a2x*a2y*a3x*c2x*c2y*c3x + 2*pow(a2x,2)*a3y*c2x*c2y*c3x - 
		    2*pow(a2y,2)*a3y*c2x*c2y*c3x - pow(a2x,2)*a3x*pow(c2y,2)*c3x + pow(a2y,2)*a3x*pow(c2y,2)*c3x + 2*a2x*a2y*a3y*pow(c2y,2)*c3x + 2*a2x*a2y*a3x*pow(c2x,2)*c3y + 
		    pow(a2x,2)*a3y*pow(c2x,2)*c3y - pow(a2y,2)*a3y*pow(c2x,2)*c3y - 2*pow(a2x,2)*a3x*c2x*c2y*c3y + 2*pow(a2y,2)*a3x*c2x*c2y*c3y + 4*a2x*a2y*a3y*c2x*c2y*c3y - 
		    2*a2x*a2y*a3x*pow(c2y,2)*c3y - pow(a2x,2)*a3y*pow(c2y,2)*c3y + pow(a2y,2)*a3y*pow(c2y,2)*c3y);
  qanal[anal].qCB[bin][k]->Fill(0.,pow(b2x,2)*b3x*pow(c2x,2)*c3x - pow(b2y,2)*b3x*pow(c2x,2)*c3x - 2*b2x*b2y*b3y*pow(c2x,2)*c3x + 4*b2x*b2y*b3x*c2x*c2y*c3x + 2*pow(b2x,2)*b3y*c2x*c2y*c3x - 
		    2*pow(b2y,2)*b3y*c2x*c2y*c3x - pow(b2x,2)*b3x*pow(c2y,2)*c3x + pow(b2y,2)*b3x*pow(c2y,2)*c3x + 2*b2x*b2y*b3y*pow(c2y,2)*c3x + 2*b2x*b2y*b3x*pow(c2x,2)*c3y + 
		    pow(b2x,2)*b3y*pow(c2x,2)*c3y - pow(b2y,2)*b3y*pow(c2x,2)*c3y - 2*pow(b2x,2)*b3x*c2x*c2y*c3y + 2*pow(b2y,2)*b3x*c2x*c2y*c3y + 4*b2x*b2y*b3y*c2x*c2y*c3y - 
		    2*b2x*b2y*b3x*pow(c2y,2)*c3y - pow(b2x,2)*b3y*pow(c2y,2)*c3y + pow(b2y,2)*b3y*pow(c2y,2)*c3y);
  qanal[anal].qBAcnt[bin][k]->Fill(0.,b2w*b2w*b3w*a2w*a2w*a3w);
  qanal[anal].qCAcnt[bin][k]->Fill(0.,c2w*c2w*c3w*a2w*a2w*a3w);
  qanal[anal].qCBcnt[bin][k]->Fill(0.,c2w*c2w*c3w*b2w*b2w*b3w);


}
