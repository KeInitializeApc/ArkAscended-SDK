#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalBuff_UnequipOnOwnerDeath.PrimalBuff_UnequipOnOwnerDeath_C
// (Actor)

class UClass* APrimalBuff_UnequipOnOwnerDeath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalBuff_UnequipOnOwnerDeath_C");

	return Clss;
}


// PrimalBuff_UnequipOnOwnerDeath_C PrimalBuff_UnequipOnOwnerDeath.Default__PrimalBuff_UnequipOnOwnerDeath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimalBuff_UnequipOnOwnerDeath_C* APrimalBuff_UnequipOnOwnerDeath_C::GetDefaultObj()
{
	static class APrimalBuff_UnequipOnOwnerDeath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimalBuff_UnequipOnOwnerDeath_C*>(APrimalBuff_UnequipOnOwnerDeath_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalBuff_UnequipOnOwnerDeath.PrimalBuff_UnequipOnOwnerDeath_C.BPInstigatorDied
// (Event, Public, BlueprintEvent)
// Parameters:

void APrimalBuff_UnequipOnOwnerDeath_C::BPInstigatorDied()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalBuff_UnequipOnOwnerDeath_C", "BPInstigatorDied");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalBuff_UnequipOnOwnerDeath.PrimalBuff_UnequipOnOwnerDeath_C.ExecuteUbergraph_PrimalBuff_UnequipOnOwnerDeath
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ENetworkModeResult      CallFunc_IsRunningOnServer_OutNetworkMode                        (BlueprintVisible, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ConstParm, Net, Parm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_RemoveItem_ReturnValue                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)

bool APrimalBuff_UnequipOnOwnerDeath_C::ExecuteUbergraph_PrimalBuff_UnequipOnOwnerDeath(int32* EntryPoint, enum class ENetworkModeResult CallFunc_IsRunningOnServer_OutNetworkMode, class APawn* CallFunc_GetInstigator_ReturnValue, bool* K2Node_SwitchEnum_CmpSuccess, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalBuff_UnequipOnOwnerDeath_C", "ExecuteUbergraph_PrimalBuff_UnequipOnOwnerDeath");

	Params::APrimalBuff_UnequipOnOwnerDeath_C_ExecuteUbergraph_PrimalBuff_UnequipOnOwnerDeath_Params Parms{};

	Parms.CallFunc_IsRunningOnServer_OutNetworkMode = CallFunc_IsRunningOnServer_OutNetworkMode;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_SwitchEnum_CmpSuccess != nullptr)
		*K2Node_SwitchEnum_CmpSuccess = Parms.K2Node_SwitchEnum_CmpSuccess;

	return Parms.ReturnValue;

}

}


