#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Clip_LovelessPlayMiniGameControllerForceFeedback

#include "Basic.hpp"

#include "EndGame_structs.hpp"


namespace SDK
{

// UserDefinedStruct Clip_LovelessPlayMiniGameControllerForceFeedback.Clip_LovelessPlayMiniGameControllerForceFeedback
// 0x000C (0x000C - 0x0000)
struct FClip_LovelessPlayMiniGameControllerForceFeedback final
{
public:
	EEndLovelessPlayMiniGameControllerForceFeedbackEventType ForceFeedbackType_73_27129C4B449CD1FD68CEE1AB2ECE2C92; // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   MiniGameForceFeedbackID_74_C6B2ED9E46658F5DCB520C98721C4A88; // 0x0004(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(FClip_LovelessPlayMiniGameControllerForceFeedback) == 0x000004, "Wrong alignment on FClip_LovelessPlayMiniGameControllerForceFeedback");
static_assert(sizeof(FClip_LovelessPlayMiniGameControllerForceFeedback) == 0x00000C, "Wrong size on FClip_LovelessPlayMiniGameControllerForceFeedback");
static_assert(offsetof(FClip_LovelessPlayMiniGameControllerForceFeedback, ForceFeedbackType_73_27129C4B449CD1FD68CEE1AB2ECE2C92) == 0x000000, "Member 'FClip_LovelessPlayMiniGameControllerForceFeedback::ForceFeedbackType_73_27129C4B449CD1FD68CEE1AB2ECE2C92' has a wrong offset!");
static_assert(offsetof(FClip_LovelessPlayMiniGameControllerForceFeedback, MiniGameForceFeedbackID_74_C6B2ED9E46658F5DCB520C98721C4A88) == 0x000004, "Member 'FClip_LovelessPlayMiniGameControllerForceFeedback::MiniGameForceFeedbackID_74_C6B2ED9E46658F5DCB520C98721C4A88' has a wrong offset!");

}

