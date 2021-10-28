#ifndef STHREAD_STATS_MSG_GEN_H
#define STHREAD_STATS_MSG_GEN_H

/* DO NOT EDIT --- GENERATED from sthread_stats.dat by stats.pl
           on Mon Jan  2 14:58:10 2012

<std-header orig-src='shore' genfile='true'>

SHORE -- Scalable Heterogeneous Object REpository

Copyright (c) 1994-99 Computer Sciences Department, University of
                      Wisconsin -- Madison
All Rights Reserved.

Permission to use, copy, modify and distribute this software and its
documentation is hereby granted, provided that both the copyright
notice and this permission notice appear in all copies of the
software, derivative works or modified versions, and any portions
thereof, and that both notices appear in supporting documentation.

THE AUTHORS AND THE COMPUTER SCIENCES DEPARTMENT OF THE UNIVERSITY
OF WISCONSIN - MADISON ALLOW FREE USE OF THIS SOFTWARE IN ITS
"AS IS" CONDITION, AND THEY DISCLAIM ANY LIABILITY OF ANY KIND
FOR ANY DAMAGES WHATSOEVER RESULTING FROM THE USE OF THIS SOFTWARE.

This software was developed with support by the Advanced Research
Project Agency, ARPA order number 018 (formerly 8230), monitored by
the U.S. Army Research Laboratory under contract DAAB07-91-C-Q518.
Further funding for this work was provided by DARPA through
Rome Research Laboratory Contract No. F30602-97-2-0247.

*/
/*  -- do not edit anything above this line --   </std-header>*/


/* STHREAD_rwlock_r_wait      */ "Number waits for read lock on srwlock",
/* STHREAD_rwlock_w_wait      */ "Number waits for write lock on srwlock",
/* STHREAD_needs_latch_condl  */ "Conditional latch requests",
/* STHREAD_needs_latch_uncondl */ "Unconditional latch requests",
/* STHREAD_latch_condl_nowait */ "Conditional requests satisfied immediately",
/* STHREAD_latch_uncondl_nowait */ "Unconditional requests satisfied immediately",

#endif /* STHREAD_STATS_MSG_GEN_H */
