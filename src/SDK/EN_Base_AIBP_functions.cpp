#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EN_Base_AIBP

#include "Basic.hpp"

#include "EN_Base_AIBP_classes.hpp"
#include "EN_Base_AIBP_parameters.hpp"


namespace SDK
{

// Function EN_Base_AIBP.EN_Base_AIBP_C.ExecuteUbergraph_EN_Base_AIBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEN_Base_AIBP_C::ExecuteUbergraph_EN_Base_AIBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN_Base_AIBP_C", "ExecuteUbergraph_EN_Base_AIBP");

	Params::EN_Base_AIBP_C_ExecuteUbergraph_EN_Base_AIBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN_Base_AIBP.EN_Base_AIBP_C.OnPrepareAsset
// (Event, Public, BlueprintEvent)

void AEN_Base_AIBP_C::OnPrepareAsset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN_Base_AIBP_C", "OnPrepareAsset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EN_Base_AIBP.EN_Base_AIBP_C.OnEndBattleInvoke
// (Event, Public, BlueprintEvent)

void AEN_Base_AIBP_C::OnEndBattleInvoke()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN_Base_AIBP_C", "OnEndBattleInvoke");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EN_Base_AIBP.EN_Base_AIBP_C.OnStartBattleInvoke
// (Event, Public, BlueprintEvent)

void AEN_Base_AIBP_C::OnStartBattleInvoke()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN_Base_AIBP_C", "OnStartBattleInvoke");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EN_Base_AIBP.EN_Base_AIBP_C.InpActEvt_Home_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AEN_Base_AIBP_C::InpActEvt_Home_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN_Base_AIBP_C", "InpActEvt_Home_K2Node_InputKeyEvent_0");

	Params::EN_Base_AIBP_C_InpActEvt_Home_K2Node_InputKeyEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}

}

