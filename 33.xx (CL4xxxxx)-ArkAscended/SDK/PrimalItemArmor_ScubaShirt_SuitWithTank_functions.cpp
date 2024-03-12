#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_ScubaShirt_SuitWithTank.PrimalItemArmor_ScubaShirt_SuitWithTank_C
// (None)

class UClass* UPrimalItemArmor_ScubaShirt_SuitWithTank_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_ScubaShirt_SuitWithTank_C");

	return Clss;
}


// PrimalItemArmor_ScubaShirt_SuitWithTank_C PrimalItemArmor_ScubaShirt_SuitWithTank.Default__PrimalItemArmor_ScubaShirt_SuitWithTank_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_ScubaShirt_SuitWithTank_C* UPrimalItemArmor_ScubaShirt_SuitWithTank_C::GetDefaultObj()
{
	static class UPrimalItemArmor_ScubaShirt_SuitWithTank_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_ScubaShirt_SuitWithTank_C*>(UPrimalItemArmor_ScubaShirt_SuitWithTank_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItemArmor_ScubaShirt_SuitWithTank.PrimalItemArmor_ScubaShirt_SuitWithTank_C.BlueprintEquipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsFromSaveGame                                                  (Edit, ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

bool UPrimalItemArmor_ScubaShirt_SuitWithTank_C::BlueprintEquipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_ScubaShirt_SuitWithTank_C", "BlueprintEquipped");

	Params::UPrimalItemArmor_ScubaShirt_SuitWithTank_C_BlueprintEquipped_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_ScubaShirt_SuitWithTank.PrimalItemArmor_ScubaShirt_SuitWithTank_C.BlueprintUnequipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPrimalItemArmor_ScubaShirt_SuitWithTank_C::BlueprintUnequipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_ScubaShirt_SuitWithTank_C", "BlueprintUnequipped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalItemArmor_ScubaShirt_SuitWithTank.PrimalItemArmor_ScubaShirt_SuitWithTank_C.ExecuteUbergraph_PrimalItemArmor_ScubaShirt_SuitWithTank
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_Event_bIsFromSaveGame                                     (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character_1                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BPServerHandleNetExecCommand_ReturnValue                (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)

bool UPrimalItemArmor_ScubaShirt_SuitWithTank_C::ExecuteUbergraph_PrimalItemArmor_ScubaShirt_SuitWithTank(int32* EntryPoint, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character_1, bool* K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_ScubaShirt_SuitWithTank_C", "ExecuteUbergraph_PrimalItemArmor_ScubaShirt_SuitWithTank");

	Params::UPrimalItemArmor_ScubaShirt_SuitWithTank_C_ExecuteUbergraph_PrimalItemArmor_ScubaShirt_SuitWithTank_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_MakeStruct_BPNetExecParams != nullptr)
		*K2Node_MakeStruct_BPNetExecParams = std::move(Parms.K2Node_MakeStruct_BPNetExecParams);

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_AsPrimal_Character_1 != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character_1 = Parms.K2Node_DynamicCast_AsPrimal_Character_1;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	return Parms.ReturnValue;

}

}


