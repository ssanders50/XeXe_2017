ALL_TOOLS      += self
self_EX_INCLUDE := /home/sanders/XeXe_2017/CMSSW_9_2_9/src /home/sanders/XeXe_2017/CMSSW_9_2_9/include/LCG /opt/cmssw/slc6_amd64_gcc530/cms/cmssw/CMSSW_9_2_9/src /opt/cmssw/slc6_amd64_gcc530/cms/cmssw/CMSSW_9_2_9/include/LCG
self_EX_LIBDIR := /home/sanders/XeXe_2017/CMSSW_9_2_9/lib/slc6_amd64_gcc530 /home/sanders/XeXe_2017/CMSSW_9_2_9/external/slc6_amd64_gcc530/lib /opt/cmssw/slc6_amd64_gcc530/cms/cmssw/CMSSW_9_2_9/lib/slc6_amd64_gcc530 /opt/cmssw/slc6_amd64_gcc530/cms/cmssw/CMSSW_9_2_9/external/slc6_amd64_gcc530/lib
self_EX_FLAGS_SYMLINK_DEPTH_CMSSW_SEARCH_PATH  := 2
self_EX_FLAGS_LLVM_ANALYZER  := llvm-analyzer
self_EX_FLAGS_SKIP_TOOLS_SYMLINK  := cxxcompiler ccompiler f77compiler gcc-cxxcompiler gcc-ccompiler gcc-f77compiler llvm-cxxcompiler llvm-ccompiler llvm-f77compiler llvm-analyzer-cxxcompiler llvm-analyzer-ccompiler icc-cxxcompiler icc-ccompiler icc-f77compiler x11 dpm
self_EX_FLAGS_DEFAULT_COMPILER  := gcc
self_EX_FLAGS_EXTERNAL_SYMLINK  := PATH LIBDIR CMSSW_SEARCH_PATH
self_EX_FLAGS_NO_EXTERNAL_RUNTIME  := LD_LIBRARY_PATH PATH CMSSW_SEARCH_PATH
self_EX_FLAGS_OVERRIDABLE_FLAGS  := CPPDEFINES CXXFLAGS FFLAGS CFLAGS CPPFLAGS LDFLAGS
self_ORDER := 20000
IS_PATCH:=

