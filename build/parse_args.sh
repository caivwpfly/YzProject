set -e
function parse_args() {
    for args in "$@"
    do
        case "$args" in
            run)
                RUN=ON
            ;;
            st)
                ST=ON
            ;;
            ut)
                UT=ON
            ;;
            clean)
                CLEAN=ON
            ;;
        esac
    done
}