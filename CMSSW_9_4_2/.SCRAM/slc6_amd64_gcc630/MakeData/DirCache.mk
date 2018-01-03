ifeq ($(strip $(CondFormats/HIObjects)),)
ALL_COMMONRULES += src_CondFormats_HIObjects_src
src_CondFormats_HIObjects_src_parent := CondFormats/HIObjects
src_CondFormats_HIObjects_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_CondFormats_HIObjects_src,src/CondFormats/HIObjects/src,LIBRARY))
CondFormatsHIObjects := self/CondFormats/HIObjects
CondFormats/HIObjects := CondFormatsHIObjects
CondFormatsHIObjects_files := $(patsubst src/CondFormats/HIObjects/src/%,%,$(wildcard $(foreach dir,src/CondFormats/HIObjects/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
CondFormatsHIObjects_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondFormats/HIObjects/BuildFile
CondFormatsHIObjects_LOC_USE := self  CondFormats/Common CondFormats/Serialization FWCore/Framework boost_serialization
CondFormatsHIObjects_LCGDICTS  := x 
CondFormatsHIObjects_PRE_INIT_FUNC += $$(eval $$(call LCGDict,CondFormatsHIObjects,src/CondFormats/HIObjects/src/classes.h,src/CondFormats/HIObjects/src/classes_def.xml,$(SCRAMSTORENAME_LIB), --fail_on_warnings,))
CondFormatsHIObjects_PRE_INIT_FUNC += $$(eval $$(call CondSerialization,CondFormatsHIObjects,src/CondFormats/HIObjects/src,src/CondFormats/HIObjects/src/headers.h))
CondFormatsHIObjects_EX_LIB   := CondFormatsHIObjects
CondFormatsHIObjects_EX_USE   := $(foreach d,$(CondFormatsHIObjects_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
CondFormatsHIObjects_PACKAGE := self/src/CondFormats/HIObjects/src
ALL_PRODS += CondFormatsHIObjects
CondFormatsHIObjects_CLASS := LIBRARY
CondFormats/HIObjects_forbigobj+=CondFormatsHIObjects
CondFormatsHIObjects_INIT_FUNC        += $$(eval $$(call Library,CondFormatsHIObjects,src/CondFormats/HIObjects/src,src_CondFormats_HIObjects_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(HeavyIonsAnalysis/HiEvtPlaneCalib)),)
ALL_COMMONRULES += src_HeavyIonsAnalysis_HiEvtPlaneCalib_src
src_HeavyIonsAnalysis_HiEvtPlaneCalib_src_parent := HeavyIonsAnalysis/HiEvtPlaneCalib
src_HeavyIonsAnalysis_HiEvtPlaneCalib_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HeavyIonsAnalysis_HiEvtPlaneCalib_src,src/HeavyIonsAnalysis/HiEvtPlaneCalib/src,LIBRARY))
HeavyIonsAnalysisHiEvtPlaneCalib := self/HeavyIonsAnalysis/HiEvtPlaneCalib
HeavyIonsAnalysis/HiEvtPlaneCalib := HeavyIonsAnalysisHiEvtPlaneCalib
HeavyIonsAnalysisHiEvtPlaneCalib_files := $(patsubst src/HeavyIonsAnalysis/HiEvtPlaneCalib/src/%,%,$(wildcard $(foreach dir,src/HeavyIonsAnalysis/HiEvtPlaneCalib/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HeavyIonsAnalysisHiEvtPlaneCalib_BuildFile    := $(WORKINGDIR)/cache/bf/src/HeavyIonsAnalysis/HiEvtPlaneCalib/BuildFile
HeavyIonsAnalysisHiEvtPlaneCalib_LOC_USE := self  root rootrflx FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/Utilities PhysicsTools/UtilAlgos DataFormats/Candidate DataFormats/HcalRecHit DataFormats/WrappedStdDictionaries Geometry/Records DataFormats/HepMCCandidate DataFormats/TrackReco DataFormats/VertexReco DataFormats/Common DataFormats/HeavyIonEvent DataFormats/CaloTowers DataFormats/Provenance CondCore/DBOutputService CondFormats/DataRecord RecoHI/HiCentralityAlgos clhep
HeavyIonsAnalysisHiEvtPlaneCalib_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HeavyIonsAnalysisHiEvtPlaneCalib,HeavyIonsAnalysisHiEvtPlaneCalib,$(SCRAMSTORENAME_LIB),src/HeavyIonsAnalysis/HiEvtPlaneCalib/src))
HeavyIonsAnalysisHiEvtPlaneCalib_PACKAGE := self/src/HeavyIonsAnalysis/HiEvtPlaneCalib/src
ALL_PRODS += HeavyIonsAnalysisHiEvtPlaneCalib
HeavyIonsAnalysisHiEvtPlaneCalib_CLASS := LIBRARY
HeavyIonsAnalysis/HiEvtPlaneCalib_forbigobj+=HeavyIonsAnalysisHiEvtPlaneCalib
HeavyIonsAnalysisHiEvtPlaneCalib_INIT_FUNC        += $$(eval $$(call Library,HeavyIonsAnalysisHiEvtPlaneCalib,src/HeavyIonsAnalysis/HiEvtPlaneCalib/src,src_HeavyIonsAnalysis_HiEvtPlaneCalib_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(HeavyIonsAnalysis/QWNtrkOfflineProducer)),)
ALL_COMMONRULES += src_HeavyIonsAnalysis_QWNtrkOfflineProducer_src
src_HeavyIonsAnalysis_QWNtrkOfflineProducer_src_parent := HeavyIonsAnalysis/QWNtrkOfflineProducer
src_HeavyIonsAnalysis_QWNtrkOfflineProducer_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HeavyIonsAnalysis_QWNtrkOfflineProducer_src,src/HeavyIonsAnalysis/QWNtrkOfflineProducer/src,LIBRARY))
HeavyIonsAnalysisQWNtrkOfflineProducer := self/HeavyIonsAnalysis/QWNtrkOfflineProducer
HeavyIonsAnalysis/QWNtrkOfflineProducer := HeavyIonsAnalysisQWNtrkOfflineProducer
HeavyIonsAnalysisQWNtrkOfflineProducer_files := $(patsubst src/HeavyIonsAnalysis/QWNtrkOfflineProducer/src/%,%,$(wildcard $(foreach dir,src/HeavyIonsAnalysis/QWNtrkOfflineProducer/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HeavyIonsAnalysisQWNtrkOfflineProducer_BuildFile    := $(WORKINGDIR)/cache/bf/src/HeavyIonsAnalysis/QWNtrkOfflineProducer/BuildFile
HeavyIonsAnalysisQWNtrkOfflineProducer_LOC_USE := self  root hepmc FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/Common DataFormats/Candidate DataFormats/VertexReco DataFormats/TrackReco DataFormats/ParticleFlowCandidate DataFormats/HepMCCandidate DataFormats/CaloTowers DataFormats/HcalDigi DataFormats/HeavyIonEvent CommonTools/UtilAlgos TrackingTools/TransientTrack MagneticField/Records SimDataFormats/GeneratorProducts TrackingTools/IPTools CalibFormats/HcalObjects
HeavyIonsAnalysisQWNtrkOfflineProducer_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HeavyIonsAnalysisQWNtrkOfflineProducer,HeavyIonsAnalysisQWNtrkOfflineProducer,$(SCRAMSTORENAME_LIB),src/HeavyIonsAnalysis/QWNtrkOfflineProducer/src))
HeavyIonsAnalysisQWNtrkOfflineProducer_PACKAGE := self/src/HeavyIonsAnalysis/QWNtrkOfflineProducer/src
ALL_PRODS += HeavyIonsAnalysisQWNtrkOfflineProducer
HeavyIonsAnalysisQWNtrkOfflineProducer_CLASS := LIBRARY
HeavyIonsAnalysis/QWNtrkOfflineProducer_forbigobj+=HeavyIonsAnalysisQWNtrkOfflineProducer
HeavyIonsAnalysisQWNtrkOfflineProducer_INIT_FUNC        += $$(eval $$(call Library,HeavyIonsAnalysisQWNtrkOfflineProducer,src/HeavyIonsAnalysis/QWNtrkOfflineProducer/src,src_HeavyIonsAnalysis_QWNtrkOfflineProducer_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(HeavyIonsAnalysis/VNAnalysis)),)
ALL_COMMONRULES += src_HeavyIonsAnalysis_VNAnalysis_src
src_HeavyIonsAnalysis_VNAnalysis_src_parent := HeavyIonsAnalysis/VNAnalysis
src_HeavyIonsAnalysis_VNAnalysis_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HeavyIonsAnalysis_VNAnalysis_src,src/HeavyIonsAnalysis/VNAnalysis/src,LIBRARY))
HeavyIonsAnalysisVNAnalysis := self/HeavyIonsAnalysis/VNAnalysis
HeavyIonsAnalysis/VNAnalysis := HeavyIonsAnalysisVNAnalysis
HeavyIonsAnalysisVNAnalysis_files := $(patsubst src/HeavyIonsAnalysis/VNAnalysis/src/%,%,$(wildcard $(foreach dir,src/HeavyIonsAnalysis/VNAnalysis/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HeavyIonsAnalysisVNAnalysis_BuildFile    := $(WORKINGDIR)/cache/bf/src/HeavyIonsAnalysis/VNAnalysis/BuildFile
HeavyIonsAnalysisVNAnalysis_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/ServiceRegistry FWCore/Utilities PhysicsTools/UtilAlgos PhysicsTools/JetMCUtils SimGeneral/HepPDTRecord SimDataFormats/CaloHit SimDataFormats/Track SimDataFormats/TrackingHit SimDataFormats/Vertex SimDataFormats/GeneratorProducts SimDataFormats/CrossingFrame SimDataFormats/HiGenData DataFormats/HepMCCandidate DataFormats/JetReco DataFormats/HeavyIonEvent CondFormats/HIObjects CondFormats/DataRecord DataFormats/WrappedStdDictionaries DataFormats/Common DataFormats/Provenance DataFormats/EgammaReco Geometry/Records RecoHI/HiCentralityAlgos root clhep
HeavyIonsAnalysisVNAnalysis_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HeavyIonsAnalysisVNAnalysis,HeavyIonsAnalysisVNAnalysis,$(SCRAMSTORENAME_LIB),src/HeavyIonsAnalysis/VNAnalysis/src))
HeavyIonsAnalysisVNAnalysis_PACKAGE := self/src/HeavyIonsAnalysis/VNAnalysis/src
ALL_PRODS += HeavyIonsAnalysisVNAnalysis
HeavyIonsAnalysisVNAnalysis_CLASS := LIBRARY
HeavyIonsAnalysis/VNAnalysis_forbigobj+=HeavyIonsAnalysisVNAnalysis
HeavyIonsAnalysisVNAnalysis_INIT_FUNC        += $$(eval $$(call Library,HeavyIonsAnalysisVNAnalysis,src/HeavyIonsAnalysis/VNAnalysis/src,src_HeavyIonsAnalysis_VNAnalysis_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(RecoHI/HiEvtPlaneAlgos)),)
ALL_COMMONRULES += src_RecoHI_HiEvtPlaneAlgos_src
src_RecoHI_HiEvtPlaneAlgos_src_parent := RecoHI/HiEvtPlaneAlgos
src_RecoHI_HiEvtPlaneAlgos_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_RecoHI_HiEvtPlaneAlgos_src,src/RecoHI/HiEvtPlaneAlgos/src,LIBRARY))
RecoHIHiEvtPlaneAlgos := self/RecoHI/HiEvtPlaneAlgos
RecoHI/HiEvtPlaneAlgos := RecoHIHiEvtPlaneAlgos
RecoHIHiEvtPlaneAlgos_files := $(patsubst src/RecoHI/HiEvtPlaneAlgos/src/%,%,$(wildcard $(foreach dir,src/RecoHI/HiEvtPlaneAlgos/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
RecoHIHiEvtPlaneAlgos_BuildFile    := $(WORKINGDIR)/cache/bf/src/RecoHI/HiEvtPlaneAlgos/BuildFile
RecoHIHiEvtPlaneAlgos_LOC_USE := self  root FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/Utilities PhysicsTools/UtilAlgos DataFormats/Candidate DataFormats/HcalRecHit DataFormats/WrappedStdDictionaries Geometry/Records DataFormats/HepMCCandidate DataFormats/TrackReco DataFormats/VertexReco DataFormats/Common DataFormats/HeavyIonEvent DataFormats/CaloTowers DataFormats/Provenance CondCore/DBOutputService CondFormats/DataRecord RecoHI/HiCentralityAlgos clhep
RecoHIHiEvtPlaneAlgos_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,RecoHIHiEvtPlaneAlgos,RecoHIHiEvtPlaneAlgos,$(SCRAMSTORENAME_LIB),src/RecoHI/HiEvtPlaneAlgos/src))
RecoHIHiEvtPlaneAlgos_PACKAGE := self/src/RecoHI/HiEvtPlaneAlgos/src
ALL_PRODS += RecoHIHiEvtPlaneAlgos
RecoHIHiEvtPlaneAlgos_CLASS := LIBRARY
RecoHI/HiEvtPlaneAlgos_forbigobj+=RecoHIHiEvtPlaneAlgos
RecoHIHiEvtPlaneAlgos_INIT_FUNC        += $$(eval $$(call Library,RecoHIHiEvtPlaneAlgos,src/RecoHI/HiEvtPlaneAlgos/src,src_RecoHI_HiEvtPlaneAlgos_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(HeavyIonsAnalysis/EventAnalysis)),)
ALL_COMMONRULES += src_HeavyIonsAnalysis_EventAnalysis_src
src_HeavyIonsAnalysis_EventAnalysis_src_parent := HeavyIonsAnalysis/EventAnalysis
src_HeavyIonsAnalysis_EventAnalysis_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HeavyIonsAnalysis_EventAnalysis_src,src/HeavyIonsAnalysis/EventAnalysis/src,LIBRARY))
HeavyIonsAnalysisEventAnalysis := self/HeavyIonsAnalysis/EventAnalysis
HeavyIonsAnalysis/EventAnalysis := HeavyIonsAnalysisEventAnalysis
HeavyIonsAnalysisEventAnalysis_files := $(patsubst src/HeavyIonsAnalysis/EventAnalysis/src/%,%,$(wildcard $(foreach dir,src/HeavyIonsAnalysis/EventAnalysis/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HeavyIonsAnalysisEventAnalysis_BuildFile    := $(WORKINGDIR)/cache/bf/src/HeavyIonsAnalysis/EventAnalysis/BuildFile
HeavyIonsAnalysisEventAnalysis_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet CommonTools/UtilAlgos FWCore/ServiceRegistry DataFormats/HeavyIonEvent DataFormats/VertexReco RecoHI/HiCentralityAlgos DataFormats/HepMCCandidate DataFormats/JetReco DataFormats/Common SimDataFormats/HiGenData SimDataFormats/GeneratorProducts FWCore/Common DataFormats/HLTReco HLTrigger/HLTcore CondFormats/HLTObjects CondFormats/DataRecord
HeavyIonsAnalysisEventAnalysis_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HeavyIonsAnalysisEventAnalysis,HeavyIonsAnalysisEventAnalysis,$(SCRAMSTORENAME_LIB),src/HeavyIonsAnalysis/EventAnalysis/src))
HeavyIonsAnalysisEventAnalysis_PACKAGE := self/src/HeavyIonsAnalysis/EventAnalysis/src
ALL_PRODS += HeavyIonsAnalysisEventAnalysis
HeavyIonsAnalysisEventAnalysis_CLASS := LIBRARY
HeavyIonsAnalysis/EventAnalysis_forbigobj+=HeavyIonsAnalysisEventAnalysis
HeavyIonsAnalysisEventAnalysis_INIT_FUNC        += $$(eval $$(call Library,HeavyIonsAnalysisEventAnalysis,src/HeavyIonsAnalysis/EventAnalysis/src,src_HeavyIonsAnalysis_EventAnalysis_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
