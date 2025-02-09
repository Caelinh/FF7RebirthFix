#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NaviMap

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NaviMap.NaviMap_C
// 0x00B8 (0x0480 - 0x03C8)
class UNaviMap_C final : public UEndUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                       RangeReport_Loop;                                  // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       RangeReport_Out;                                   // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       RangeReport_In;                                    // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       RangeSub_Loop;                                     // 0x03E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       RangeSub_In;                                       // 0x03F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       RangeSub_Out;                                      // 0x03F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Range_Loop;                                        // 0x0400(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Range_Out;                                         // 0x0408(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Range_In;                                          // 0x0410(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Warning;                                           // 0x0418(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Battle_Out;                                        // 0x0420(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Battle_In;                                         // 0x0428(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Out;                                               // 0x0430(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x0438(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndImage*                              BlackBg;                                           // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Icon_Player;                                       // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           Img_Base_00;                                       // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Base_Light;                                    // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           Img_Frame;                                         // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_FrameEff;                                      // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_FrameEff3;                                     // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_FrameEff4;                                     // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_NaviMap(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NaviMap_C">();
	}
	static class UNaviMap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNaviMap_C>();
	}
};
static_assert(alignof(UNaviMap_C) == 0x000008, "Wrong alignment on UNaviMap_C");
static_assert(sizeof(UNaviMap_C) == 0x000480, "Wrong size on UNaviMap_C");
static_assert(offsetof(UNaviMap_C, UberGraphFrame) == 0x0003C8, "Member 'UNaviMap_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNaviMap_C, RangeReport_Loop) == 0x0003D0, "Member 'UNaviMap_C::RangeReport_Loop' has a wrong offset!");
static_assert(offsetof(UNaviMap_C, RangeReport_Out) == 0x0003D8, "Member 'UNaviMap_C::RangeReport_Out' has a wrong offset!");
static_assert(offsetof(UNaviMap_C, RangeReport_In) == 0x0003E0, "Member 'UNaviMap_C::RangeReport_In' has a wrong offset!");
static_assert(offsetof(UNaviMap_C, RangeSub_Loop) == 0x0003E8, "Member 'UNaviMap_C::RangeSub_Loop' has a wrong offset!");
static_assert(offsetof(UNaviMap_C, RangeSub_In) == 0x0003F0, "Member 'UNaviMap_C::RangeSub_In' has a wrong offset!");
static_assert(offsetof(UNaviMap_C, RangeSub_Out) == 0x0003F8, "Member 'UNaviMap_C::RangeSub_Out' has a wrong offset!");
static_assert(offsetof(UNaviMap_C, Range_Loop) == 0x000400, "Member 'UNaviMap_C::Range_Loop' has a wrong offset!");
static_assert(offsetof(UNaviMap_C, Range_Out) == 0x000408, "Member 'UNaviMap_C::Range_Out' has a wrong offset!");
static_assert(offsetof(UNaviMap_C, Range_In) == 0x000410, "Member 'UNaviMap_C::Range_In' has a wrong offset!");
static_assert(offsetof(UNaviMap_C, Warning) == 0x000418, "Member 'UNaviMap_C::Warning' has a wrong offset!");
static_assert(offsetof(UNaviMap_C, Battle_Out) == 0x000420, "Member 'UNaviMap_C::Battle_Out' has a wrong offset!");
static_assert(offsetof(UNaviMap_C, Battle_In) == 0x000428, "Member 'UNaviMap_C::Battle_In' has a wrong offset!");
static_assert(offsetof(UNaviMap_C, Out) == 0x000430, "Member 'UNaviMap_C::Out' has a wrong offset!");
static_assert(offsetof(UNaviMap_C, In) == 0x000438, "Member 'UNaviMap_C::In' has a wrong offset!");
static_assert(offsetof(UNaviMap_C, BlackBg) == 0x000440, "Member 'UNaviMap_C::BlackBg' has a wrong offset!");
static_assert(offsetof(UNaviMap_C, Icon_Player) == 0x000448, "Member 'UNaviMap_C::Icon_Player' has a wrong offset!");
static_assert(offsetof(UNaviMap_C, Img_Base_00) == 0x000450, "Member 'UNaviMap_C::Img_Base_00' has a wrong offset!");
static_assert(offsetof(UNaviMap_C, Img_Base_Light) == 0x000458, "Member 'UNaviMap_C::Img_Base_Light' has a wrong offset!");
static_assert(offsetof(UNaviMap_C, Img_Frame) == 0x000460, "Member 'UNaviMap_C::Img_Frame' has a wrong offset!");
static_assert(offsetof(UNaviMap_C, Img_FrameEff) == 0x000468, "Member 'UNaviMap_C::Img_FrameEff' has a wrong offset!");
static_assert(offsetof(UNaviMap_C, Img_FrameEff3) == 0x000470, "Member 'UNaviMap_C::Img_FrameEff3' has a wrong offset!");
static_assert(offsetof(UNaviMap_C, Img_FrameEff4) == 0x000478, "Member 'UNaviMap_C::Img_FrameEff4' has a wrong offset!");

}

