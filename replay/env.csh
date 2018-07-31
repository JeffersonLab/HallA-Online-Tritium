#!/bin/tcsh                                                                                                                                                 # Analyzer                                                                                                                                                                       


setenv ANALYZER /work/halla/triton/mnycz/analyzer/
setenv LD_LIBRARY_PATH ${ANALYZER}:${LD_LIBRARY_PATH}
setenv PATH ${ANALYZER}:${PATH}

#setenv DB_DIR /work/halla/triton/mnycz/analyzer/DB
setenv DB_DIR /work/halla/triton/mnycz/a-onl_analyzer/HallA-Online-Tritium/replay/DB
#setenv LD_LIBRARY_PATH ${ANALYZER}:${DB_DIR}:${LD_LIBRARY_PATH}
