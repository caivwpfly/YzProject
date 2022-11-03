
set -e
function parse_xml() {
    ST=xmllint --xpath "//book[@id=2]/st/text()" ${HOME}/config.xml
}