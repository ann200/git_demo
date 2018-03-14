UNAME(1)                         User Commands                        UNAME(1)

NNAAMMEE
       uname - print system information

SSYYNNOOPPSSIISS
       uunnaammee [_O_P_T_I_O_N]...

DDEESSCCRRIIPPTTIIOONN
       Print certain system information.  With no OPTION, same as --ss.

       --aa, ----aallll
              print  all  information,  in the following order, except omit --pp
              and --ii if unknown:

       --ss, ----kkeerrnneell--nnaammee
              print the kernel name

       --nn, ----nnooddeennaammee
              print the network node hostname

       --rr, ----kkeerrnneell--rreelleeaassee
              print the kernel release

       --vv, ----kkeerrnneell--vveerrssiioonn
              print the kernel version

       --mm, ----mmaacchhiinnee
              print the machine hardware name

       --pp, ----pprroocceessssoorr
              print the processor type (non-portable)

       --ii, ----hhaarrddwwaarree--ppllaattffoorrmm
              print the hardware platform (non-portable)

       --oo, ----ooppeerraattiinngg--ssyysstteemm
              print the operating system

       ----hheellpp display this help and exit

       ----vveerrssiioonn
              output version information and exit

AAUUTTHHOORR
       Written by David MacKenzie.

RREEPPOORRTTIINNGG BBUUGGSS
       GNU coreutils online help: <http://www.gnu.org/software/coreutils/>
       Report uname translation bugs to <http://translationproject.org/team/>

CCOOPPYYRRIIGGHHTT
       Copyright © 2016 Free Software Foundation, Inc.   License  GPLv3+:  GNU
       GPL version 3 or later <http://gnu.org/licenses/gpl.html>.
       This  is  free  software:  you  are free to change and redistribute it.
       There is NO WARRANTY, to the extent permitted by law.

SSEEEE AALLSSOO
       arch(1), uname(2)

       Full documentation at: <http://www.gnu.org/software/coreutils/uname>
       or available locally via: info '(coreutils) uname invocation'

GNU coreutils 8.25               February 2016                        UNAME(1)
