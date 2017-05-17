#include "progect.h"
#include "ctest.h"

CTEST(ProgTest,plyer){
	const int result = player_turn(3,90);
	const int expected = 87;
	ASSERT_EQUAL(expected, result);
}