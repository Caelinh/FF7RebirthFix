#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChocoboCatching_ActionCommand_00

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChocoboCatching_ActionCommand_00.ChocoboCatching_ActionCommand_00_C
// 0x0070 (0x0468 - 0x03F8)
class UChocoboCatching_ActionCommand_00_C final : public UEndCmdShortcutCell
{
public:
	class UWidgetAnimation*                       Gauge_Green;                                       // 0x03F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Gauge_Blue;                                        // 0x0400(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Gauge_Red;                                         // 0x0408(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Disabled;                                          // 0x0410(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       B_Pressed;                                         // 0x0418(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       A_Running_Loop;                                    // 0x0420(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       A_Switch_OnOff;                                    // 0x0428(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommand_BtnPressedEffect_C*            BtnPressedEffect;                                  // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndProgressBar*                        Gauge_00;                                          // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              GaugeCover_00;                                     // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_BtnArrow;                                      // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_BtnBase_Off;                                   // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           Img_Effect_00;                                     // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Effect_01;                                     // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChocoboCatching_ActionCommand_00_C">();
	}
	static class UChocoboCatching_ActionCommand_00_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChocoboCatching_ActionCommand_00_C>();
	}
};
static_assert(alignof(UChocoboCatching_ActionCommand_00_C) == 0x000008, "Wrong alignment on UChocoboCatching_ActionCommand_00_C");
static_assert(sizeof(UChocoboCatching_ActionCommand_00_C) == 0x000468, "Wrong size on UChocoboCatching_ActionCommand_00_C");
static_assert(offsetof(UChocoboCatching_ActionCommand_00_C, Gauge_Green) == 0x0003F8, "Member 'UChocoboCatching_ActionCommand_00_C::Gauge_Green' has a wrong offset!");
static_assert(offsetof(UChocoboCatching_ActionCommand_00_C, Gauge_Blue) == 0x000400, "Member 'UChocoboCatching_ActionCommand_00_C::Gauge_Blue' has a wrong offset!");
static_assert(offsetof(UChocoboCatching_ActionCommand_00_C, Gauge_Red) == 0x000408, "Member 'UChocoboCatching_ActionCommand_00_C::Gauge_Red' has a wrong offset!");
static_assert(offsetof(UChocoboCatching_ActionCommand_00_C, Disabled) == 0x000410, "Member 'UChocoboCatching_ActionCommand_00_C::Disabled' has a wrong offset!");
static_assert(offsetof(UChocoboCatching_ActionCommand_00_C, B_Pressed) == 0x000418, "Member 'UChocoboCatching_ActionCommand_00_C::B_Pressed' has a wrong offset!");
static_assert(offsetof(UChocoboCatching_ActionCommand_00_C, A_Running_Loop) == 0x000420, "Member 'UChocoboCatching_ActionCommand_00_C::A_Running_Loop' has a wrong offset!");
static_assert(offsetof(UChocoboCatching_ActionCommand_00_C, A_Switch_OnOff) == 0x000428, "Member 'UChocoboCatching_ActionCommand_00_C::A_Switch_OnOff' has a wrong offset!");
static_assert(offsetof(UChocoboCatching_ActionCommand_00_C, BtnPressedEffect) == 0x000430, "Member 'UChocoboCatching_ActionCommand_00_C::BtnPressedEffect' has a wrong offset!");
static_assert(offsetof(UChocoboCatching_ActionCommand_00_C, Gauge_00) == 0x000438, "Member 'UChocoboCatching_ActionCommand_00_C::Gauge_00' has a wrong offset!");
static_assert(offsetof(UChocoboCatching_ActionCommand_00_C, GaugeCover_00) == 0x000440, "Member 'UChocoboCatching_ActionCommand_00_C::GaugeCover_00' has a wrong offset!");
static_assert(offsetof(UChocoboCatching_ActionCommand_00_C, Img_BtnArrow) == 0x000448, "Member 'UChocoboCatching_ActionCommand_00_C::Img_BtnArrow' has a wrong offset!");
static_assert(offsetof(UChocoboCatching_ActionCommand_00_C, Img_BtnBase_Off) == 0x000450, "Member 'UChocoboCatching_ActionCommand_00_C::Img_BtnBase_Off' has a wrong offset!");
static_assert(offsetof(UChocoboCatching_ActionCommand_00_C, Img_Effect_00) == 0x000458, "Member 'UChocoboCatching_ActionCommand_00_C::Img_Effect_00' has a wrong offset!");
static_assert(offsetof(UChocoboCatching_ActionCommand_00_C, Img_Effect_01) == 0x000460, "Member 'UChocoboCatching_ActionCommand_00_C::Img_Effect_01' has a wrong offset!");

}

