#!/bin/sh
# shell script goes here

python "${TITANIUM_SDK}/titanium.py" run --dir="${PROJECT_DIR}"
exit $?

