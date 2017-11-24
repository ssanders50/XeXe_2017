ALL_COMMONRULES += src_HeavyIonsAnalysis_QWNtrkOfflineProducer_test
src_HeavyIonsAnalysis_QWNtrkOfflineProducer_test_parent := HeavyIonsAnalysis/QWNtrkOfflineProducer
src_HeavyIonsAnalysis_QWNtrkOfflineProducer_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HeavyIonsAnalysis_QWNtrkOfflineProducer_test,src/HeavyIonsAnalysis/QWNtrkOfflineProducer/test,TEST))
ALL_SUBSYSTEMS+=RecoHI
subdirs_src_RecoHI = src_RecoHI_HiEvtPlaneAlgos
ALL_PACKAGES += HeavyIonsAnalysis/EventAnalysis
subdirs_src_HeavyIonsAnalysis_EventAnalysis := src_HeavyIonsAnalysis_EventAnalysis_python src_HeavyIonsAnalysis_EventAnalysis_test src_HeavyIonsAnalysis_EventAnalysis_src
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
ALL_COMMONRULES += src_HeavyIonsAnalysis_Configuration_test
src_HeavyIonsAnalysis_Configuration_test_parent := HeavyIonsAnalysis/Configuration
src_HeavyIonsAnalysis_Configuration_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HeavyIonsAnalysis_Configuration_test,src/HeavyIonsAnalysis/Configuration/test,TEST))
ALL_PACKAGES += HeavyIonsAnalysis/QWNtrkOfflineProducer
subdirs_src_HeavyIonsAnalysis_QWNtrkOfflineProducer := src_HeavyIonsAnalysis_QWNtrkOfflineProducer_python src_HeavyIonsAnalysis_QWNtrkOfflineProducer_test src_HeavyIonsAnalysis_QWNtrkOfflineProducer_src
ALL_PACKAGES += HeavyIonsAnalysis/HiEvtPlaneCalib
subdirs_src_HeavyIonsAnalysis_HiEvtPlaneCalib := src_HeavyIonsAnalysis_HiEvtPlaneCalib_python src_HeavyIonsAnalysis_HiEvtPlaneCalib_test src_HeavyIonsAnalysis_HiEvtPlaneCalib_src
ALL_PACKAGES += RecoHI/HiEvtPlaneAlgos
subdirs_src_RecoHI_HiEvtPlaneAlgos := src_RecoHI_HiEvtPlaneAlgos_python src_RecoHI_HiEvtPlaneAlgos_test src_RecoHI_HiEvtPlaneAlgos_src
ifeq ($(strip $(PyRecoHIHiEvtPlaneAlgos)),)
PyRecoHIHiEvtPlaneAlgos := self/src/RecoHI/HiEvtPlaneAlgos/python
src_RecoHI_HiEvtPlaneAlgos_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/RecoHI/HiEvtPlaneAlgos/python)
PyRecoHIHiEvtPlaneAlgos_files := $(patsubst src/RecoHI/HiEvtPlaneAlgos/python/%,%,$(wildcard $(foreach dir,src/RecoHI/HiEvtPlaneAlgos/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyRecoHIHiEvtPlaneAlgos_LOC_USE := self  
PyRecoHIHiEvtPlaneAlgos_PACKAGE := self/src/RecoHI/HiEvtPlaneAlgos/python
ALL_PRODS += PyRecoHIHiEvtPlaneAlgos
PyRecoHIHiEvtPlaneAlgos_INIT_FUNC        += $$(eval $$(call PythonProduct,PyRecoHIHiEvtPlaneAlgos,src/RecoHI/HiEvtPlaneAlgos/python,src_RecoHI_HiEvtPlaneAlgos_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyRecoHIHiEvtPlaneAlgos,src/RecoHI/HiEvtPlaneAlgos/python))
endif
ALL_COMMONRULES += src_RecoHI_HiEvtPlaneAlgos_python
src_RecoHI_HiEvtPlaneAlgos_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoHI_HiEvtPlaneAlgos_python,src/RecoHI/HiEvtPlaneAlgos/python,PYTHON))
ifeq ($(strip $(testSerializationHIObjects)),)
testSerializationHIObjects := self/src/CondFormats/HIObjects/test
testSerializationHIObjects_files := $(patsubst src/CondFormats/HIObjects/test/%,%,$(foreach file,testSerializationHIObjects.cpp,$(eval xfile:=$(wildcard src/CondFormats/HIObjects/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondFormats/HIObjects/test/$(file). Please fix src/CondFormats/HIObjects/test/BuildFile.))))
testSerializationHIObjects_TEST_RUNNER_CMD :=  testSerializationHIObjects 
testSerializationHIObjects_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondFormats/HIObjects/test/BuildFile
testSerializationHIObjects_LOC_USE := self  CondFormats/HIObjects
testSerializationHIObjects_PACKAGE := self/src/CondFormats/HIObjects/test
ALL_PRODS += testSerializationHIObjects
testSerializationHIObjects_INIT_FUNC        += $$(eval $$(call Binary,testSerializationHIObjects,src/CondFormats/HIObjects/test,src_CondFormats_HIObjects_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testSerializationHIObjects_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testSerializationHIObjects,src/CondFormats/HIObjects/test))
endif
ALL_COMMONRULES += src_CondFormats_HIObjects_test
src_CondFormats_HIObjects_test_parent := CondFormats/HIObjects
src_CondFormats_HIObjects_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CondFormats_HIObjects_test,src/CondFormats/HIObjects/test,TEST))
ifeq ($(strip $(PyHeavyIonsAnalysisEventAnalysis)),)
PyHeavyIonsAnalysisEventAnalysis := self/src/HeavyIonsAnalysis/EventAnalysis/python
src_HeavyIonsAnalysis_EventAnalysis_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HeavyIonsAnalysis/EventAnalysis/python)
PyHeavyIonsAnalysisEventAnalysis_files := $(patsubst src/HeavyIonsAnalysis/EventAnalysis/python/%,%,$(wildcard $(foreach dir,src/HeavyIonsAnalysis/EventAnalysis/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHeavyIonsAnalysisEventAnalysis_LOC_USE := self  
PyHeavyIonsAnalysisEventAnalysis_PACKAGE := self/src/HeavyIonsAnalysis/EventAnalysis/python
ALL_PRODS += PyHeavyIonsAnalysisEventAnalysis
PyHeavyIonsAnalysisEventAnalysis_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHeavyIonsAnalysisEventAnalysis,src/HeavyIonsAnalysis/EventAnalysis/python,src_HeavyIonsAnalysis_EventAnalysis_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHeavyIonsAnalysisEventAnalysis,src/HeavyIonsAnalysis/EventAnalysis/python))
endif
ALL_COMMONRULES += src_HeavyIonsAnalysis_EventAnalysis_python
src_HeavyIonsAnalysis_EventAnalysis_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HeavyIonsAnalysis_EventAnalysis_python,src/HeavyIonsAnalysis/EventAnalysis/python,PYTHON))
ALL_SUBSYSTEMS+=CondFormats
subdirs_src_CondFormats = src_CondFormats_HIObjects
ifeq ($(strip $(PyHeavyIonsAnalysisConfiguration)),)
PyHeavyIonsAnalysisConfiguration := self/src/HeavyIonsAnalysis/Configuration/python
src_HeavyIonsAnalysis_Configuration_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HeavyIonsAnalysis/Configuration/python)
PyHeavyIonsAnalysisConfiguration_files := $(patsubst src/HeavyIonsAnalysis/Configuration/python/%,%,$(wildcard $(foreach dir,src/HeavyIonsAnalysis/Configuration/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHeavyIonsAnalysisConfiguration_LOC_USE := self  
PyHeavyIonsAnalysisConfiguration_PACKAGE := self/src/HeavyIonsAnalysis/Configuration/python
ALL_PRODS += PyHeavyIonsAnalysisConfiguration
PyHeavyIonsAnalysisConfiguration_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHeavyIonsAnalysisConfiguration,src/HeavyIonsAnalysis/Configuration/python,src_HeavyIonsAnalysis_Configuration_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHeavyIonsAnalysisConfiguration,src/HeavyIonsAnalysis/Configuration/python))
endif
ALL_COMMONRULES += src_HeavyIonsAnalysis_Configuration_python
src_HeavyIonsAnalysis_Configuration_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HeavyIonsAnalysis_Configuration_python,src/HeavyIonsAnalysis/Configuration/python,PYTHON))
ALL_COMMONRULES += src_RecoHI_HiEvtPlaneAlgos_test
src_RecoHI_HiEvtPlaneAlgos_test_parent := RecoHI/HiEvtPlaneAlgos
src_RecoHI_HiEvtPlaneAlgos_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoHI_HiEvtPlaneAlgos_test,src/RecoHI/HiEvtPlaneAlgos/test,TEST))
ALL_PACKAGES += HeavyIonsAnalysis/Configuration
subdirs_src_HeavyIonsAnalysis_Configuration := src_HeavyIonsAnalysis_Configuration_python src_HeavyIonsAnalysis_Configuration_test src_HeavyIonsAnalysis_Configuration_data
ifeq ($(strip $(PyHeavyIonsAnalysisVNAnalysis)),)
PyHeavyIonsAnalysisVNAnalysis := self/src/HeavyIonsAnalysis/VNAnalysis/python
src_HeavyIonsAnalysis_VNAnalysis_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HeavyIonsAnalysis/VNAnalysis/python)
PyHeavyIonsAnalysisVNAnalysis_files := $(patsubst src/HeavyIonsAnalysis/VNAnalysis/python/%,%,$(wildcard $(foreach dir,src/HeavyIonsAnalysis/VNAnalysis/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHeavyIonsAnalysisVNAnalysis_LOC_USE := self  
PyHeavyIonsAnalysisVNAnalysis_PACKAGE := self/src/HeavyIonsAnalysis/VNAnalysis/python
ALL_PRODS += PyHeavyIonsAnalysisVNAnalysis
PyHeavyIonsAnalysisVNAnalysis_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHeavyIonsAnalysisVNAnalysis,src/HeavyIonsAnalysis/VNAnalysis/python,src_HeavyIonsAnalysis_VNAnalysis_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHeavyIonsAnalysisVNAnalysis,src/HeavyIonsAnalysis/VNAnalysis/python))
endif
ALL_COMMONRULES += src_HeavyIonsAnalysis_VNAnalysis_python
src_HeavyIonsAnalysis_VNAnalysis_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HeavyIonsAnalysis_VNAnalysis_python,src/HeavyIonsAnalysis/VNAnalysis/python,PYTHON))
ALL_PACKAGES += CondFormats/HIObjects
subdirs_src_CondFormats_HIObjects := src_CondFormats_HIObjects_test src_CondFormats_HIObjects_interface src_CondFormats_HIObjects_src
ALL_COMMONRULES += src_HeavyIonsAnalysis_HiEvtPlaneCalib_test
src_HeavyIonsAnalysis_HiEvtPlaneCalib_test_parent := HeavyIonsAnalysis/HiEvtPlaneCalib
src_HeavyIonsAnalysis_HiEvtPlaneCalib_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HeavyIonsAnalysis_HiEvtPlaneCalib_test,src/HeavyIonsAnalysis/HiEvtPlaneCalib/test,TEST))
ALL_SUBSYSTEMS+=HeavyIonsAnalysis
subdirs_src_HeavyIonsAnalysis = src_HeavyIonsAnalysis_Configuration src_HeavyIonsAnalysis_EventAnalysis src_HeavyIonsAnalysis_QWNtrkOfflineProducer src_HeavyIonsAnalysis_VNAnalysis src_HeavyIonsAnalysis_HiEvtPlaneCalib
ALL_PACKAGES += HeavyIonsAnalysis/VNAnalysis
subdirs_src_HeavyIonsAnalysis_VNAnalysis := src_HeavyIonsAnalysis_VNAnalysis_doc src_HeavyIonsAnalysis_VNAnalysis_python src_HeavyIonsAnalysis_VNAnalysis_test src_HeavyIonsAnalysis_VNAnalysis_interface src_HeavyIonsAnalysis_VNAnalysis_src
ALL_COMMONRULES += src_HeavyIonsAnalysis_EventAnalysis_test
src_HeavyIonsAnalysis_EventAnalysis_test_parent := HeavyIonsAnalysis/EventAnalysis
src_HeavyIonsAnalysis_EventAnalysis_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HeavyIonsAnalysis_EventAnalysis_test,src/HeavyIonsAnalysis/EventAnalysis/test,TEST))
ifeq ($(strip $(PyHeavyIonsAnalysisHiEvtPlaneCalib)),)
PyHeavyIonsAnalysisHiEvtPlaneCalib := self/src/HeavyIonsAnalysis/HiEvtPlaneCalib/python
src_HeavyIonsAnalysis_HiEvtPlaneCalib_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HeavyIonsAnalysis/HiEvtPlaneCalib/python)
PyHeavyIonsAnalysisHiEvtPlaneCalib_files := $(patsubst src/HeavyIonsAnalysis/HiEvtPlaneCalib/python/%,%,$(wildcard $(foreach dir,src/HeavyIonsAnalysis/HiEvtPlaneCalib/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHeavyIonsAnalysisHiEvtPlaneCalib_LOC_USE := self  
PyHeavyIonsAnalysisHiEvtPlaneCalib_PACKAGE := self/src/HeavyIonsAnalysis/HiEvtPlaneCalib/python
ALL_PRODS += PyHeavyIonsAnalysisHiEvtPlaneCalib
PyHeavyIonsAnalysisHiEvtPlaneCalib_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHeavyIonsAnalysisHiEvtPlaneCalib,src/HeavyIonsAnalysis/HiEvtPlaneCalib/python,src_HeavyIonsAnalysis_HiEvtPlaneCalib_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHeavyIonsAnalysisHiEvtPlaneCalib,src/HeavyIonsAnalysis/HiEvtPlaneCalib/python))
endif
ALL_COMMONRULES += src_HeavyIonsAnalysis_HiEvtPlaneCalib_python
src_HeavyIonsAnalysis_HiEvtPlaneCalib_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HeavyIonsAnalysis_HiEvtPlaneCalib_python,src/HeavyIonsAnalysis/HiEvtPlaneCalib/python,PYTHON))
ALL_COMMONRULES += src_HeavyIonsAnalysis_VNAnalysis_test
src_HeavyIonsAnalysis_VNAnalysis_test_parent := HeavyIonsAnalysis/VNAnalysis
src_HeavyIonsAnalysis_VNAnalysis_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HeavyIonsAnalysis_VNAnalysis_test,src/HeavyIonsAnalysis/VNAnalysis/test,TEST))
