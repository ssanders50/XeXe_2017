ALL_TOOLS      += qtbase
qtbase_EX_INCLUDE := /opt/cmssw/slc6_amd64_gcc530/external/qt/4.8.7/include /opt/cmssw/slc6_amd64_gcc530/external/qt/4.8.7/include/Qt /opt/cmssw/slc6_amd64_gcc530/external/qt/4.8.7/include/QtCore /opt/cmssw/slc6_amd64_gcc530/external/qt/4.8.7/include/QtXml
qtbase_EX_LIB := QtCore QtXml
qtbase_EX_USE := root_cxxdefaults zlib
qtbase_EX_FLAGS_CPPDEFINES  := -DQT_ALTERNATE_QTSMANIP -DQT_CLEAN_NAMESPACE -DQT_THREAD_SUPPORT

