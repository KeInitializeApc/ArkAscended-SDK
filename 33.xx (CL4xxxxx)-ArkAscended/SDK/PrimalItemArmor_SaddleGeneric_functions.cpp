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
// float                              OutDurabilityPercentageValue                                     (ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_GetItemStatModifier_ReturnValue                         (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// float                              K2Node_FunctionResult_OutDurabilityPercentageValue_ImplicitCast  (Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

float UPrimalItemArmor_SaddleGeneric_C::BPOverrideEquippedDurabilityPercentage(float OutDurabilityPercentageValue, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_C", "BPOverrideEquippedDurabilityPercentage");

	Params::UPrimalItemArmor_SaddleGeneric_C_BPOverrideEquippedDurabilityPercentage_Params Parms{};

	Parms.OutDurabilityPercentageValue = OutDurabilityPercentageValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Greater_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Greater_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.ResetSaddleDurabilityToSavedValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_ItemDurability_ImplicitCast                   (BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

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
// double                             K2Node_VariableSet_SavedSaddleDurability_ImplicitCast            (BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

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
// bool                               bIsFromSaveGame                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

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


