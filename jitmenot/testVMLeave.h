#ifndef _TEST_VMLEAVE_H
#define _TEST_VMLEAVE_H

#include "jitmenot.h"

int register_test_vmleave(struct test_chain *);

#define VMLEAVE_SIZE 60

#define TEST_ID_VMLEAVE 10
#define TEST_NAME_VMLEAVE "vmleave"
#define TEST_DESC_VMLEAVE "Checks for known code patterns (VMLeave)."

#endif
