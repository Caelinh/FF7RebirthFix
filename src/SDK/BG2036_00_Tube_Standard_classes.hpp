#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BG2036_00_Tube_Standard

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BG2036_00_Tube_Standard.BG2036_00_Tube_Standard_C
// 0x0000 (0x0810 - 0x0810)
class ABG2036_00_Tube_Standard_C final : public AEndEnvironmentSkeletalMeshActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BG2036_00_Tube_Standard_C">();
	}
	static class ABG2036_00_Tube_Standard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABG2036_00_Tube_Standard_C>();
	}
};
static_assert(alignof(ABG2036_00_Tube_Standard_C) == 0x000008, "Wrong alignment on ABG2036_00_Tube_Standard_C");
static_assert(sizeof(ABG2036_00_Tube_Standard_C) == 0x000810, "Wrong size on ABG2036_00_Tube_Standard_C");

}

