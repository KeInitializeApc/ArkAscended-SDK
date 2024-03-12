#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Deco_IsTargetSubmerged.Deco_IsTargetSubmerged_C
// (None)

class UClass* UDeco_IsTargetSubmerged_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Deco_IsTargetSubmerged_C");

	return Clss;
}


// Deco_IsTargetSubmerged_C Deco_IsTargetSubmerged.Default__Deco_IsTargetSubmerged_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDeco_IsTargetSubmerged_C* UDeco_IsTargetSubmerged_C::GetDefaultObj()
{
	static class UDeco_IsTargetSubmerged_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeco_IsTargetSubmerged_C*>(UDeco_IsTargetSubmerged_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Deco_IsTargetSubmerged.Deco_IsTargetSubmerged_C.ReceiveConditionCheck
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue                   (BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsSubmerged_ReturnValue                                 (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)

class AActor* UDeco_IsTargetSubmerged_C::ReceiveConditionCheck(class AActor** CallFunc_GetBlackboardValueAsActor_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsSubmerged_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Deco_IsTargetSubmerged_C", "ReceiveConditionCheck");

	Params::UDeco_IsTargetSubmerged_C_ReceiveConditionCheck_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetBlackboardValueAsActor_ReturnValue != nullptr)
		*CallFunc_GetBlackboardValueAsActor_ReturnValue = Parms.CallFunc_GetBlackboardValueAsActor_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_IsSubmerged_ReturnValue != nullptr)
		*CallFunc_IsSubmerged_ReturnValue = Parms.CallFunc_IsSubmerged_ReturnValue;

	return Parms.ReturnValue;

}

}


