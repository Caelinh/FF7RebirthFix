#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NIBLT_Single_Move_Wait01_NP0114

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "MobPrefabBase01_Single_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NIBLT_Single_Move_Wait01_NP0114.NIBLT_Single_Move_Wait01_NP0114_C
// 0x0010 (0x0510 - 0x0500)
class ANIBLT_Single_Move_Wait01_NP0114_C final : public AMobPrefabBase01_Single_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0500(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)

public:
	void ExecuteUbergraph_NIBLT_Single_Move_Wait01_NP0114(int32 EntryPoint);
	void CreateMobCommand();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NIBLT_Single_Move_Wait01_NP0114_C">();
	}
	static class ANIBLT_Single_Move_Wait01_NP0114_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANIBLT_Single_Move_Wait01_NP0114_C>();
	}
};
static_assert(alignof(ANIBLT_Single_Move_Wait01_NP0114_C) == 0x000010, "Wrong alignment on ANIBLT_Single_Move_Wait01_NP0114_C");
static_assert(sizeof(ANIBLT_Single_Move_Wait01_NP0114_C) == 0x000510, "Wrong size on ANIBLT_Single_Move_Wait01_NP0114_C");
static_assert(offsetof(ANIBLT_Single_Move_Wait01_NP0114_C, UberGraphFrame) == 0x000500, "Member 'ANIBLT_Single_Move_Wait01_NP0114_C::UberGraphFrame' has a wrong offset!");

}

