#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Materia_SelectTabCell

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Materia_SelectTabCell.Materia_SelectTabCell_C
// 0x0040 (0x0430 - 0x03F0)
class UMateria_SelectTabCell_C final : public UEndMateriaSelectTabCell
{
public:
	class UWidgetAnimation*                       Selected;                                          // 0x03F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       TxtAll;                                            // 0x03F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       MateriaIcon;                                       // 0x0400(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Normal;                                            // 0x0408(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndImage*                              Base;                                              // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Base_1;                                            // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Frame;                                             // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Frame_1;                                           // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Materia_SelectTabCell_C">();
	}
	static class UMateria_SelectTabCell_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMateria_SelectTabCell_C>();
	}
};
static_assert(alignof(UMateria_SelectTabCell_C) == 0x000008, "Wrong alignment on UMateria_SelectTabCell_C");
static_assert(sizeof(UMateria_SelectTabCell_C) == 0x000430, "Wrong size on UMateria_SelectTabCell_C");
static_assert(offsetof(UMateria_SelectTabCell_C, Selected) == 0x0003F0, "Member 'UMateria_SelectTabCell_C::Selected' has a wrong offset!");
static_assert(offsetof(UMateria_SelectTabCell_C, TxtAll) == 0x0003F8, "Member 'UMateria_SelectTabCell_C::TxtAll' has a wrong offset!");
static_assert(offsetof(UMateria_SelectTabCell_C, MateriaIcon) == 0x000400, "Member 'UMateria_SelectTabCell_C::MateriaIcon' has a wrong offset!");
static_assert(offsetof(UMateria_SelectTabCell_C, Normal) == 0x000408, "Member 'UMateria_SelectTabCell_C::Normal' has a wrong offset!");
static_assert(offsetof(UMateria_SelectTabCell_C, Base) == 0x000410, "Member 'UMateria_SelectTabCell_C::Base' has a wrong offset!");
static_assert(offsetof(UMateria_SelectTabCell_C, Base_1) == 0x000418, "Member 'UMateria_SelectTabCell_C::Base_1' has a wrong offset!");
static_assert(offsetof(UMateria_SelectTabCell_C, Frame) == 0x000420, "Member 'UMateria_SelectTabCell_C::Frame' has a wrong offset!");
static_assert(offsetof(UMateria_SelectTabCell_C, Frame_1) == 0x000428, "Member 'UMateria_SelectTabCell_C::Frame_1' has a wrong offset!");

}

