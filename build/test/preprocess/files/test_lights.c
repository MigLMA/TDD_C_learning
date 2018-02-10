#include "build/temp/_test_lights.c"
#include "lights.h"
#include "unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void test_lights_NeedToImplement(void)

{

    UnityIgnore( (("Need to Implement lights")), (UNITY_UINT)(14));

}



void test_WhenTheHeadlightSwitchIsOff_ThenTheHeadLightsAreOff(void)

{



  lights_SetHeadlightSwitchOff();



  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((lights_AreHeadlightsOn())), (((void *)0)), (UNITY_UINT)(22), UNITY_DISPLAY_STYLE_INT);

}



void test_WhenTheHeadlightSwitchIsOn_ThenTheHeadLightsAreOn(void)

{



  lights_SetHeadlightSwitchOn();



  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((lights_AreHeadlightsOn())), (((void *)0)), (UNITY_UINT)(30), UNITY_DISPLAY_STYLE_INT);

}
