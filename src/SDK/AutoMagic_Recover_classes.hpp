#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AutoMagic_Recover

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AutoMagic_Recover.AutoMagic_Recover_C
// 0x0000 (0x0060 - 0x0060)
class UAutoMagic_Recover_C final : public UEndAIBattlePlayerAutoMagicRule
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AutoMagic_Recover_C">();
	}
	static class UAutoMagic_Recover_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAutoMagic_Recover_C>();
	}
};
static_assert(alignof(UAutoMagic_Recover_C) == 0x000008, "Wrong alignment on UAutoMagic_Recover_C");
static_assert(sizeof(UAutoMagic_Recover_C) == 0x000060, "Wrong size on UAutoMagic_Recover_C");

}

