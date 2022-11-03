set -e

function run() {
    export LD_LIBRARY_PATH=${THIRD_PATH}/lib
    #${OUTPUT_PATH}/bin/installer_mgr
    if [[ ${ST} = ON ]];then
        ${BUILD_PATH}/test/st/test_design_model/test_design_model "$@"
        ${BUILD_PATH}/test/st/test_lic/test_lic "$@"
    fi

    if [[ ${UT} = ON ]];then
        ${BUILD_PATH}/test/st/st_test "$@"
    fi
}