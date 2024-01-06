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
// class AActor*                      OwnerActor                                                       (Edit, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue                   (ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsSubmerged_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, SubobjectReference)

bool UDeco_IsTargetSubmerged_C::ReceiveConditionCheck(class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool CallFunc_IsSubmerged_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Deco_IsTargetSubmerged_C", "ReceiveConditionCheck");

	Params::UDeco_IsTargetSubmerged_C_ReceiveConditionCheck_Params Parms{};

	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.CallFunc_IsSubmerged_ReturnValue = CallFunc_IsSubmerged_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


