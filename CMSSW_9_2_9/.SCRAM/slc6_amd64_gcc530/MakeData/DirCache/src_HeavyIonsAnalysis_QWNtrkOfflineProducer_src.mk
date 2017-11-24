ifeq ($(strip $(HeavyIonsAnalysis/QWNtrkOfflineProducer)),)
ALL_COMMONRULES += src_HeavyIonsAnalysis_QWNtrkOfflineProducer_src
src_HeavyIonsAnalysis_QWNtrkOfflineProducer_src_parent := HeavyIonsAnalysis/QWNtrkOfflineProducer
src_HeavyIonsAnalysis_QWNtrkOfflineProducer_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HeavyIonsAnalysis_QWNtrkOfflineProducer_src,src/HeavyIonsAnalysis/QWNtrkOfflineProducer/src,LIBRARY))
HeavyIonsAnalysisQWNtrkOfflineProducer := self/HeavyIonsAnalysis/QWNtrkOfflineProducer
HeavyIonsAnalysis/QWNtrkOfflineProducer := HeavyIonsAnalysisQWNtrkOfflineProducer
HeavyIonsAnalysisQWNtrkOfflineProducer_files := $(patsubst src/HeavyIonsAnalysis/QWNtrkOfflineProducer/src/%,%,$(wildcard $(foreach dir,src/HeavyIonsAnalysis/QWNtrkOfflineProducer/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HeavyIonsAnalysisQWNtrkOfflineProducer_BuildFile    := $(WORKINGDIR)/cache/bf/src/HeavyIonsAnalysis/QWNtrkOfflineProducer/BuildFile
HeavyIonsAnalysisQWNtrkOfflineProducer_LOC_USE := self  root FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/Common DataFormats/Candidate DataFormats/VertexReco DataFormats/TrackReco DataFormats/ParticleFlowCandidate DataFormats/HepMCCandidate DataFormats/HcalDigi CommonTools/UtilAlgos TrackingTools/TransientTrack MagneticField/Records TrackingTools/IPTools
HeavyIonsAnalysisQWNtrkOfflineProducer_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HeavyIonsAnalysisQWNtrkOfflineProducer,HeavyIonsAnalysisQWNtrkOfflineProducer,$(SCRAMSTORENAME_LIB),src/HeavyIonsAnalysis/QWNtrkOfflineProducer/src))
HeavyIonsAnalysisQWNtrkOfflineProducer_PACKAGE := self/src/HeavyIonsAnalysis/QWNtrkOfflineProducer/src
ALL_PRODS += HeavyIonsAnalysisQWNtrkOfflineProducer
HeavyIonsAnalysisQWNtrkOfflineProducer_CLASS := LIBRARY
HeavyIonsAnalysis/QWNtrkOfflineProducer_forbigobj+=HeavyIonsAnalysisQWNtrkOfflineProducer
HeavyIonsAnalysisQWNtrkOfflineProducer_INIT_FUNC        += $$(eval $$(call Library,HeavyIonsAnalysisQWNtrkOfflineProducer,src/HeavyIonsAnalysis/QWNtrkOfflineProducer/src,src_HeavyIonsAnalysis_QWNtrkOfflineProducer_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
