/*
 * @file unit_test_framework.cpp
 *
 *  Created on: Mar 4, 2018
 * @author Andrey Belomutskiy, (c) 2012-2020
 */

#include "pch.h"

#include <stdlib.h>

void assertEqualsM(const char *msg, float expected, float actual) {
	EXPECT_NEAR(expected, actual, 0.0001) << msg;
}

void chDbgAssert(int c, char *msg, void *arg) {
	if (!c) {
		printf("assert failed: %s\r\n", msg);
		exit(-1);
	}
}

uint32_t getTimeNowLowerNt(void) {
	return 0;
}
