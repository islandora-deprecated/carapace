#!/bin/bash

# Common checks to get run during the 'script' section in Travis.
OUTPUT=0

# Make OUTPUT equal return code if return code is not 0
function checkReturn {
  if [ $1 -ne 0 ]; then
    OUTPUT=$1
  fi
}

phpcpd --suffix *.theme,*.module,*.inc,*.test,*.php $GITHUB_WORKSPACE/build_dir
checkReturn $?

exit $OUTPUT
