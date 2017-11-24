ifeq ($(strip $(PyHeavyIonsAnalysisQWNtrkOfflineProducer)),)
PyHeavyIonsAnalysisQWNtrkOfflineProducer := self/src/HeavyIonsAnalysis/QWNtrkOfflineProducer/python
src_HeavyIonsAnalysis_QWNtrkOfflineProducer_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HeavyIonsAnalysis/QWNtrkOfflineProducer/python)
PyHeavyIonsAnalysisQWNtrkOfflineProducer_files := $(patsubst src/HeavyIonsAnalysis/QWNtrkOfflineProducer/python/%,%,$(wildcard $(foreach dir,src/HeavyIonsAnalysis/QWNtrkOfflineProducer/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHeavyIonsAnalysisQWNtrkOfflineProducer_LOC_USE := self  
PyHeavyIonsAnalysisQWNtrkOfflineProducer_PACKAGE := self/src/HeavyIonsAnalysis/QWNtrkOfflineProducer/python
ALL_PRODS += PyHeavyIonsAnalysisQWNtrkOfflineProducer
PyHeavyIonsAnalysisQWNtrkOfflineProducer_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHeavyIonsAnalysisQWNtrkOfflineProducer,src/HeavyIonsAnalysis/QWNtrkOfflineProducer/python,src_HeavyIonsAnalysis_QWNtrkOfflineProducer_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHeavyIonsAnalysisQWNtrkOfflineProducer,src/HeavyIonsAnalysis/QWNtrkOfflineProducer/python))
endif
ALL_COMMONRULES += src_HeavyIonsAnalysis_QWNtrkOfflineProducer_python
src_HeavyIonsAnalysis_QWNtrkOfflineProducer_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HeavyIonsAnalysis_QWNtrkOfflineProducer_python,src/HeavyIonsAnalysis/QWNtrkOfflineProducer/python,PYTHON))
