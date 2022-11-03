# if shell is error exit
set -e
function compile() {
    export CPLUS_INCLUDE_PATH=${CPLUS_INCLUDE_PATH}:/home/cai/sdk
    mkdir -p ${BUILD_PATH}
    cd ${BUILD_PATH}
    cmake ../
    #make VERBOSE=1 -j8
    make -j8
}

function outputfile() {
    mkdir -p ${OUTPUT_PATH}/bin
    #cp ${BUILD_PATH}/src/installer_mgr/installer_mgr ${OUTPUT_PATH}/bin/
    mkdir -p ${OUTPUT_PATH}/lib
    #cp ${BUILD_PATH}/src/fileparse/*.so ${OUTPUT_PATH}/lib/
    mkdir -p ${THIRD_PATH}/lib
    cp ${BUILD_PATH}/third_part/alm/*.so ${THIRD_PATH}/lib/
    
}

function clean() {
    echo "========clean compile and output======"
    rm -rf ${BUILD_PATH}
    rm -rf ${OUTPUT_PATH}
    rm -rf ${THIRD_PATH}
}

