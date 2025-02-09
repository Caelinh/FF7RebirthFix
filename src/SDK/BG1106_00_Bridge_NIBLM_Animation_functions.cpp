#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BG1106_00_Bridge_NIBLM_Animation

#include "Basic.hpp"

#include "BG1106_00_Bridge_NIBLM_Animation_classes.hpp"
#include "BG1106_00_Bridge_NIBLM_Animation_parameters.hpp"


namespace SDK
{

// Function BG1106_00_Bridge_NIBLM_Animation.BG1106_00_Bridge_NIBLM_Animation_C.ExecuteUbergraph_BG1106_00_Bridge_NIBLM_Animation
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBG1106_00_Bridge_NIBLM_Animation_C::ExecuteUbergraph_BG1106_00_Bridge_NIBLM_Animation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BG1106_00_Bridge_NIBLM_Animation_C", "ExecuteUbergraph_BG1106_00_Bridge_NIBLM_Animation");

	Params::BG1106_00_Bridge_NIBLM_Animation_C_ExecuteUbergraph_BG1106_00_Bridge_NIBLM_Animation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BG1106_00_Bridge_NIBLM_Animation.BG1106_00_Bridge_NIBLM_Animation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UBG1106_00_Bridge_NIBLM_Animation_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BG1106_00_Bridge_NIBLM_Animation_C", "AnimGraph");

	Params::BG1106_00_Bridge_NIBLM_Animation_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}

