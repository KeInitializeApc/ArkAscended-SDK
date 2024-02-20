#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C
// (None)

class UClass* UPrimalItemArmor_SaddleGeneric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_SaddleGeneric_C");

	return Clss;
}


// PrimalItemArmor_SaddleGeneric_C PrimalItemArmor_SaddleGeneric.Default__PrimalItemArmor_SaddleGeneric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_SaddleGeneric_C* UPrimalItemArmor_SaddleGeneric_C::GetDefaultObj()
{
	static class UPrimalItemArmor_SaddleGeneric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_SaddleGeneric_C*>(UPrimalItemArmor_SaddleGeneric_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.BPOverrideEquippedDurabilityPercentage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OutDurabilityPercentageValue                                     (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_GetItemStatModifier_ReturnValue                         (ExportObject, Net, Parm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// float                              K2Node_FunctionResult_OutDurabilityPercentageValue_ImplicitCast  (Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

double UPrimalItemArmor_SaddleGeneric_C::BPOverrideEquippedDurabilityPercentage(float OutDurabilityPercentageValue, float CallFunc_GetItemStatModifier_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_C", "BPOverrideEquippedDurabilityPercentage");

	Params::UPrimalItemArmor_SaddleGeneric_C_BPOverrideEquippedDurabilityPercentage_Params Parms{};

	Parms.OutDurabilityPercentageValue = OutDurabilityPercentageValue;
	Parms.CallFunc_GetItemStatModifier_ReturnValue = CallFunc_GetItemStatModifier_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.ResetSaddleDurabilityToSavedValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              K2Node_VariableSet_ItemDurability_ImplicitCast                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, SubobjectReference)

float UPrimalItemArmor_SaddleGeneric_C::ResetSaddleDurabilityToSavedValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_C", "ResetSaddleDurabilityToSavedValue");

	Params::UPrimalItemArmor_SaddleGeneric_C_ResetSaddleDurabilityToSavedValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.SaveSaddleDurability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             K2Node_VariableSet_SavedSaddleDurability_ImplicitCast            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, SubobjectReference)

double UPrimalItemArmor_SaddleGeneric_C::SaveSaddleDurability()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_C", "SaveSaddleDurability");

	Params::UPrimalItemArmor_SaddleGeneric_C_SaveSaddleDurability_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.BlueprintEquipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsFromSaveGame                                                  (ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, Net, Parm, ReturnParm, Config, SubobjectReference)

double UPrimalItemArmor_SaddleGeneric_C::BlueprintEquipped(bool bIsFromSaveGame, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_C", "BlueprintEquipped");

	Params::UPrimalItemArmor_SaddleGeneric_C_BlueprintEquipped_Params Parms{};

	Parms.bIsFromSaveGame = bIsFromSaveGame;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}

}


