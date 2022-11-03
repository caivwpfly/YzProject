set -e
HOME=$(cd "$(dirname "$0")";pwd)
BUILD_PATH=${HOME}/compile_out
OUTPUT_PATH=${HOME}/output/local
THIRD_PATH=${HOME}/output/third
ST=OFF
. ${HOME}/build/compile.sh
. ${HOME}/build/run.sh
. ${HOME}/build/parse_args.sh
. ${HOME}/build/parse_xml.sh
#=========parse_args=========
parse_args "$@"
#=========parse_xml=========
#parse_xml
#=========clean=========
if [[ ${CLEAN} = ON ]]
then
    clean
    exit
fi
#=========compile and output=========
if [[ ${RUN} != ON ]]
then
    compile
    outputfile
    run "$@"
else
    run "$@"
fi

