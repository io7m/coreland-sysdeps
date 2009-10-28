#!/bin/sh

fatal()
{
  echo "fatal: $1" 1>&2
  exit 112
}

info()
{
  echo "info: $1" 1>&2
}

#----------------------------------------------------------------------
# generate conf-ccfflist

info "conf-ccfflist"
(cd SYSDEPS && ./sd-creates | grep '^flags-') > conf-ccfflist.tmp ||
  fatal "could not generate conf-ccfflist.tmp"
mv conf-ccfflist.tmp conf-ccfflist ||
  fatal "could not rename conf-ccfflist.tmp"

#----------------------------------------------------------------------
# generate depchklist.c

info "depchklist.c"
./depchklist.sh > depchklist.c.tmp ||
  fatal "could not generate depchklist.c.tmp"
mv depchklist.c.tmp depchklist.c ||
  fatal "could not rename depchklist.c.tmp"

#----------------------------------------------------------------------
# regen makefile

GENERATION/gen-local.sh > Mkf-local.tmp ||
  fatal "could not generate Mkf-local"
mv Mkf-local.tmp Mkf-local ||
  fatal "could not rename Mkf-local.tmp"

info "Makefile" 
make clean-all regen
