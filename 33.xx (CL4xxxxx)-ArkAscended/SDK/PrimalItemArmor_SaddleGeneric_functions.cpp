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
// float                              OutDurabilityPercentageValue                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_GetItemStatModifier_ReturnValue                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// float                              K2Node_FunctionResult_OutDurabilityPercentageValue_ImplicitCast  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)

float UPrimalItemArmor_SaddleGeneric_C::BPOverrideEquippedDurabilityPercentage(bool CallFunc_Greater_DoubleDouble_ReturnValue, double* CallFunc_Divide_DoubleFloat_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, float K2Node_FunctionResult_OutDurabilityPercentageValue_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_C", "BPOverrideEquippedDurabilityPercentage");

	Params::UPrimalItemArmor_SaddleGeneric_C_BPOverrideEquippedDurabilityPercentage_Params Parms{};

	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.K2Node_FunctionResult_OutDurabilityPercentageValue_ImplicitCast = K2Node_FunctionResult_OutDurabilityPercentageValue_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Divide_DoubleFloat_ReturnValue != nullptr)
		*CallFunc_Divide_DoubleFloat_ReturnValue = Parms.CallFunc_Divide_DoubleFloat_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.ResetSaddleDurabilityToSavedValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_ItemDurability_ImplicitCast                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

void UPrimalItemArmor_SaddleGeneric_C::ResetSaddleDurabilityToSavedValue(bool CallFunc_Greater_DoubleDouble_ReturnValue, float K2Node_VariableSet_ItemDurability_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_C", "ResetSaddleDurabilityToSavedValue");

	Params::UPrimalItemArmor_SaddleGeneric_C_ResetSaddleDurabilityToSavedValue_Params Parms{};

	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_VariableSet_ItemDurability_ImplicitCast = K2Node_VariableSet_ItemDurability_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.SaveSaddleDurability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             K2Node_VariableSet_SavedSaddleDurability_ImplicitCast            (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

void UPrimalItemArmor_SaddleGeneric_C::SaveSaddleDurability(double K2Node_VariableSet_SavedSaddleDurability_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_C", "SaveSaddleDurability");

	Params::UPrimalItemArmor_SaddleGeneric_C_SaveSaddleDurability_Params Parms{};

	Parms.K2Node_VariableSet_SavedSaddleDurability_ImplicitCast = K2Node_VariableSet_SavedSaddleDurability_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.BlueprintEquipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsFromSaveGame                                                  (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

double UPrimalItemArmor_SaddleGeneric_C::BlueprintEquipped(bool* bIsFromSaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_C", "BlueprintEquipped");

	Params::UPrimalItemArmor_SaddleGeneric_C_BlueprintEquipped_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsFromSaveGame != nullptr)
		*bIsFromSaveGame = Parms.bIsFromSaveGame;

	return Parms.ReturnValue;

}

}


