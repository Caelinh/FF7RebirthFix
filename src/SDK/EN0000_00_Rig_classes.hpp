#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EN0000_00_Rig

#include "Basic.hpp"

#include "ControlRig_classes.hpp"


namespace SDK
{

// ControlRigBlueprintGeneratedClass EN0000_00_Rig.EN0000_00_Rig_C
// 0x0000 (0x0650 - 0x0650)
class UEN0000_00_Rig_C final : public UControlRig
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EN0000_00_Rig_C">();
	}
	static class UEN0000_00_Rig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEN0000_00_Rig_C>();
	}
};
static_assert(alignof(UEN0000_00_Rig_C) == 0x000008, "Wrong alignment on UEN0000_00_Rig_C");
static_assert(sizeof(UEN0000_00_Rig_C) == 0x000650, "Wrong size on UEN0000_00_Rig_C");

}

