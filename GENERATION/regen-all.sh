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
# generate depchklist.iff

info "depchklist.iff"
(./sysdeps-creates | grep '^flags-') > depchklist.iff.tmp ||
  fatal "could not generate depchklist.iff.tmp"
mv depchklist.iff.tmp depchklist.iff ||
  fatal "could not rename depchklist.iff.tmp"

#----------------------------------------------------------------------
# generate depchklist.c

info "depchklist.c"
./depchklist.sh > depchklist.c.tmp ||
  fatal "could not generate depchklist.c.tmp"
mv depchklist.c.tmp depchklist.c ||
  fatal "could not rename depchklist.c.tmp"

#----------------------------------------------------------------------
# generate insthier.c

info "insthier.c"
./make-insthier-c > insthier.c.tmp ||
  fatal "could not generate insthier.c.tmp"
mv insthier.c.tmp insthier.c ||
  fatal "could not rename insthier.c"

#----------------------------------------------------------------------
# regen makefile

GENERATION/gen-local.sh > Mkf-local.tmp ||
  fatal "could not generate Mkf-local"
mv Mkf-local.tmp Mkf-local ||
  fatal "could not rename Mkf-local.tmp"

info "Makefile" 
make clean-all regen
