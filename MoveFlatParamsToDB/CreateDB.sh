#!/bin/bash
cd EPCalib
rm *.so
rm *.d
rm *.pcm
rm -rf HiEvtPlaneList.h
rm -rf HiEvtPlaneFlatten.h
ln -s $CMSSW_BASE/src/RecoHI/HiEvtPlaneAlgos/interface/HiEvtPlaneList.h
ln -s $CMSSW_BASE/src/RecoHI/HiEvtPlaneAlgos/interface/HiEvtPlaneFlatten.h
cd ..
rm -rf data/*.root
rm -rf RescorTables
rm *.db
rm /rfs/sanders/tmpEPCalib
rm /rfs/sanders/EP.root
rm tmp.lis

ls -1 /rfs/sanders/crab_projects/crab_XeXe2017_MB0/calib*.root > tmp.lis
mkdir RescorTables
root -l  "EPCalib/EPCalib.C+(1,400000)"
rm offsets/offset_XeXe2017_1_400000.root
mv foff.root offsets/offset_XeXe2017_1_400000.root
cd data
rm rpflat_combined.root
ln -s /rfs/sanders/EP.root rpflat_combined.root
cd ..
cmsRun moveflatparamstodb_cfg.py print outputFile=HeavyIonRPRcd_XeXe2017_1_400000.db outputTag=HeavyIonRPRcd begin=1 end=400000
rm /rfs/sanders/tmpEPCalib
rm save/EP_XeXe2017_1_400000.root
mv /rfs/sanders/EP.root save/EP_XeXe2017_1_400000.root
rm  -rf RescorSave/RescorTables_XeXe2017_1_400000
mv RescorTables RescorSave/RescorTables_XeXe2017_1_400000

conddb_import -f sqlite_file:HeavyIonRPRcd_XeXe2017_1_400000.db -c sqlite_file:HeavyIonRPRcd_XeXe2017_offline.db -i HeavyIonRPRcd -t HeavyIonRPRcd_XeXe2017_offline -b 1 -e 400000
