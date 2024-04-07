#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_HazardSuit_Base.Buff_HazardSuit_Base_C
// (Actor)

class UClass* ABuff_HazardSuit_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_HazardSuit_Base_C");

	return Clss;
}


// Buff_HazardSuit_Base_C Buff_HazardSuit_Base.Default__Buff_HazardSuit_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_HazardSuit_Base_C* ABuff_HazardSuit_Base_C::GetDefaultObj()
{
	static class ABuff_HazardSuit_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_HazardSuit_Base_C*>(ABuff_HazardSuit_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Buff_HazardSuit_Base.Buff_HazardSuit_Base_C.BPPreventAddingOtherBuff
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      AnotherBuffClass                                                 (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               bRetVal                                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_IsChildOfClassesSoftRef_ReturnValue                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// float                              CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)

bool ABuff_HazardSuit_Base_C::BPPreventAddingOtherBuff(class UClass** AnotherBuffClass, int32* CallFunc_IsChildOfClassesSoftRef_ReturnValue, double CallFunc_Array_Get_Item, float* CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_HazardSuit_Base_C", "BPPreventAddingOtherBuff");

	Params::ABuff_HazardSuit_Base_C_BPPreventAddingOtherBuff_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (AnotherBuffClass != nullptr)
		*AnotherBuffClass = Parms.AnotherBuffClass;

	if (CallFunc_IsChildOfClassesSoftRef_ReturnValue != nullptr)
		*CallFunc_IsChildOfClassesSoftRef_ReturnValue = Parms.CallFunc_IsChildOfClassesSoftRef_ReturnValue;

	if (CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast != nullptr)
		*CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast = Parms.CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast;

	return Parms.ReturnValue;

}

}


