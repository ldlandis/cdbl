###
# $Locker$ $Source$
# $Header$
#

ENSURE	=\
	CLEAR.dbl\
	arrays.dbl\
	asg_aa.dbl\
	asg_an.dbl\
	asg_anf.dbl\
	asg_na.dbl\
	asg_nn.dbl\
	assign.dbl\
	block.dbl\
	for.dbl\
	labels.dbl\
	repeat.dbl\
	while.dbl

FAILURES=\
	label_dup.dbl

CDBLFLAGS = -g
CDBL	= ../../bin/cdbl

.SUFFIXES: .dbl
.dbl.c:
	$(CDBL) $(CDBLFLAGS) $<

what:
	@echo "make: what?"
	@echo "  clean - clear extraneous files"
	@echo "  qa    - do quality assurance tests"
	@echo "  test  - make clean qa"

test:
	make clean
	make qa

qa:	$(CDBL)
	@(\
	  for i in $(ENSURE);		\
	  do				\
	    tgt=`basename $$i .dbl`.c;	\
	    out=`basename $$i .dbl`.out;\
	    (make $$tgt 2>&1) > $$out;	\
	  done				\
	 )

clean:
	rm -f {.,}*.{bak,swp,o,c,h,out} mak.log

diffs:	Makefile *.[chgl]
	(Process 2>&1 rcsdiff) > diffs

$(CDBL):
	@echo "ERROR... Where is cdbl, expected it in $(CDBL)?"
	exit 1

# End of $Source$
