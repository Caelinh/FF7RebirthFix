#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerConfig_Yuffie

#include "Basic.hpp"

#include "PlayerConfigBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerConfig_Yuffie.PlayerConfig_Yuffie_C
// 0x0000 (0x02F8 - 0x02F8)
class UPlayerConfig_Yuffie_C final : public UPlayerConfigBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerConfig_Yuffie_C">();
	}
	static class UPlayerConfig_Yuffie_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerConfig_Yuffie_C>();
	}
};
static_assert(alignof(UPlayerConfig_Yuffie_C) == 0x000008, "Wrong alignment on UPlayerConfig_Yuffie_C");
static_assert(sizeof(UPlayerConfig_Yuffie_C) == 0x0002F8, "Wrong size on UPlayerConfig_Yuffie_C");

}

