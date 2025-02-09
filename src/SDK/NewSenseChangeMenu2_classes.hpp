#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewSenseChangeMenu2

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NewSenseChangeMenu2.NewSenseChangeMenu2_C
// 0x0010 (0x03E8 - 0x03D8)
class UNewSenseChangeMenu2_C final : public UEndNewSenseChangeMenu
{
public:
	class UEndImage*                              Icon_Left;                                         // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Icon_Right;                                        // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NewSenseChangeMenu2_C">();
	}
	static class UNewSenseChangeMenu2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNewSenseChangeMenu2_C>();
	}
};
static_assert(alignof(UNewSenseChangeMenu2_C) == 0x000008, "Wrong alignment on UNewSenseChangeMenu2_C");
static_assert(sizeof(UNewSenseChangeMenu2_C) == 0x0003E8, "Wrong size on UNewSenseChangeMenu2_C");
static_assert(offsetof(UNewSenseChangeMenu2_C, Icon_Left) == 0x0003D8, "Member 'UNewSenseChangeMenu2_C::Icon_Left' has a wrong offset!");
static_assert(offsetof(UNewSenseChangeMenu2_C, Icon_Right) == 0x0003E0, "Member 'UNewSenseChangeMenu2_C::Icon_Right' has a wrong offset!");

}

