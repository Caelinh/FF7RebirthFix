#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RopeTest_AnimInstance

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EndGame_structs.hpp"
#include "EndGame_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass RopeTest_AnimInstance.RopeTest_AnimInstance_C
// 0x0530 (0x0D30 - 0x0800)
class URopeTest_AnimInstance_C final : public UEndRopeAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0800(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0808(0x0030)()
	uint8                                         Pad_838[0x8];                                      // 0x0838(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_EndRope                      AnimGraphNode_EndRope;                             // 0x0840(0x0390)(ContainsInstancedReference)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0BD0(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0BF0(0x0020)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose;                        // 0x0C10(0x0018)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0C28(0x0108)()

public:
	void ExecuteUbergraph_RopeTest_AnimInstance(int32 EntryPoint);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RopeTest_AnimInstance_C">();
	}
	static class URopeTest_AnimInstance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URopeTest_AnimInstance_C>();
	}
};
static_assert(alignof(URopeTest_AnimInstance_C) == 0x000010, "Wrong alignment on URopeTest_AnimInstance_C");
static_assert(sizeof(URopeTest_AnimInstance_C) == 0x000D30, "Wrong size on URopeTest_AnimInstance_C");
static_assert(offsetof(URopeTest_AnimInstance_C, UberGraphFrame) == 0x000800, "Member 'URopeTest_AnimInstance_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URopeTest_AnimInstance_C, AnimGraphNode_Root) == 0x000808, "Member 'URopeTest_AnimInstance_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(URopeTest_AnimInstance_C, AnimGraphNode_EndRope) == 0x000840, "Member 'URopeTest_AnimInstance_C::AnimGraphNode_EndRope' has a wrong offset!");
static_assert(offsetof(URopeTest_AnimInstance_C, AnimGraphNode_ComponentToLocalSpace) == 0x000BD0, "Member 'URopeTest_AnimInstance_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(URopeTest_AnimInstance_C, AnimGraphNode_LocalToComponentSpace) == 0x000BF0, "Member 'URopeTest_AnimInstance_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(URopeTest_AnimInstance_C, AnimGraphNode_LocalRefPose) == 0x000C10, "Member 'URopeTest_AnimInstance_C::AnimGraphNode_LocalRefPose' has a wrong offset!");
static_assert(offsetof(URopeTest_AnimInstance_C, AnimGraphNode_ModifyBone) == 0x000C28, "Member 'URopeTest_AnimInstance_C::AnimGraphNode_ModifyBone' has a wrong offset!");

}

