#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenu_Craft_Cell

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenu_Craft_Cell.MainMenu_Craft_Cell_C
// 0x00E0 (0x04A8 - 0x03C8)
class UMainMenu_Craft_Cell_C final : public UEndUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                       BtnHover_Lock;                                     // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Shortage_Clear;                                    // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Shortage;                                          // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Clear;                                             // 0x03E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Normal;                                            // 0x03F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Lock;                                              // 0x03F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       BtnHover;                                          // 0x0400(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndImage*                              Base_Hover;                                        // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Base_Level;                                        // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Btn_Base;                                          // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage;                                          // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_74;                                       // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Frame_Level;                                       // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           Icon_Clear;                                        // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Icon_CraftRecipe;                                  // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIcon_Item_C*                           Icon_Item_new;                                     // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Icon_Lock;                                         // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIcon_Member_C*                         Icon_Member;                                       // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Icon_New;                                          // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Icon_Shortage;                                     // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Icon_WishList;                                     // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              LockCover;                                         // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndButton*                             MainMenu_Btn;                                      // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMateria_ListNew_C*                     Materia_ListNew2;                                  // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              ShortageCover;                                     // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Num;                                           // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Title;                                         // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MainMenu_Craft_Cell(int32 EntryPoint);
	void BndEvt__MainMenu_Btn_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MainMenu_Btn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenu_Craft_Cell_C">();
	}
	static class UMainMenu_Craft_Cell_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainMenu_Craft_Cell_C>();
	}
};
static_assert(alignof(UMainMenu_Craft_Cell_C) == 0x000008, "Wrong alignment on UMainMenu_Craft_Cell_C");
static_assert(sizeof(UMainMenu_Craft_Cell_C) == 0x0004A8, "Wrong size on UMainMenu_Craft_Cell_C");
static_assert(offsetof(UMainMenu_Craft_Cell_C, UberGraphFrame) == 0x0003C8, "Member 'UMainMenu_Craft_Cell_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_Cell_C, BtnHover_Lock) == 0x0003D0, "Member 'UMainMenu_Craft_Cell_C::BtnHover_Lock' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_Cell_C, Shortage_Clear) == 0x0003D8, "Member 'UMainMenu_Craft_Cell_C::Shortage_Clear' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_Cell_C, Shortage) == 0x0003E0, "Member 'UMainMenu_Craft_Cell_C::Shortage' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_Cell_C, Clear) == 0x0003E8, "Member 'UMainMenu_Craft_Cell_C::Clear' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_Cell_C, Normal) == 0x0003F0, "Member 'UMainMenu_Craft_Cell_C::Normal' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_Cell_C, Lock) == 0x0003F8, "Member 'UMainMenu_Craft_Cell_C::Lock' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_Cell_C, BtnHover) == 0x000400, "Member 'UMainMenu_Craft_Cell_C::BtnHover' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_Cell_C, Base_Hover) == 0x000408, "Member 'UMainMenu_Craft_Cell_C::Base_Hover' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_Cell_C, Base_Level) == 0x000410, "Member 'UMainMenu_Craft_Cell_C::Base_Level' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_Cell_C, Btn_Base) == 0x000418, "Member 'UMainMenu_Craft_Cell_C::Btn_Base' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_Cell_C, EndImage) == 0x000420, "Member 'UMainMenu_Craft_Cell_C::EndImage' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_Cell_C, EndImage_74) == 0x000428, "Member 'UMainMenu_Craft_Cell_C::EndImage_74' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_Cell_C, Frame_Level) == 0x000430, "Member 'UMainMenu_Craft_Cell_C::Frame_Level' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_Cell_C, Icon_Clear) == 0x000438, "Member 'UMainMenu_Craft_Cell_C::Icon_Clear' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_Cell_C, Icon_CraftRecipe) == 0x000440, "Member 'UMainMenu_Craft_Cell_C::Icon_CraftRecipe' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_Cell_C, Icon_Item_new) == 0x000448, "Member 'UMainMenu_Craft_Cell_C::Icon_Item_new' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_Cell_C, Icon_Lock) == 0x000450, "Member 'UMainMenu_Craft_Cell_C::Icon_Lock' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_Cell_C, Icon_Member) == 0x000458, "Member 'UMainMenu_Craft_Cell_C::Icon_Member' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_Cell_C, Icon_New) == 0x000460, "Member 'UMainMenu_Craft_Cell_C::Icon_New' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_Cell_C, Icon_Shortage) == 0x000468, "Member 'UMainMenu_Craft_Cell_C::Icon_Shortage' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_Cell_C, Icon_WishList) == 0x000470, "Member 'UMainMenu_Craft_Cell_C::Icon_WishList' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_Cell_C, LockCover) == 0x000478, "Member 'UMainMenu_Craft_Cell_C::LockCover' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_Cell_C, MainMenu_Btn) == 0x000480, "Member 'UMainMenu_Craft_Cell_C::MainMenu_Btn' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_Cell_C, Materia_ListNew2) == 0x000488, "Member 'UMainMenu_Craft_Cell_C::Materia_ListNew2' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_Cell_C, ShortageCover) == 0x000490, "Member 'UMainMenu_Craft_Cell_C::ShortageCover' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_Cell_C, Txt_Num) == 0x000498, "Member 'UMainMenu_Craft_Cell_C::Txt_Num' has a wrong offset!");
static_assert(offsetof(UMainMenu_Craft_Cell_C, Txt_Title) == 0x0004A0, "Member 'UMainMenu_Craft_Cell_C::Txt_Title' has a wrong offset!");

}

