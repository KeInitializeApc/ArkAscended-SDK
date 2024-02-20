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
// class AActor*                      OwnerActor                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsSubmerged_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)

bool UDeco_IsTargetSubmerged_C::ReceiveConditionCheck(class AActor** OwnerActor, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Deco_IsTargetSubmerged_C", "ReceiveConditionCheck");

	Params::UDeco_IsTargetSubmerged_C_ReceiveConditionCheck_Params Parms{};

	Parms.CallFunc_GetBlackboardValueAsActor_ReturnValue = CallFunc_GetBlackboardValueAsActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (OwnerActor != nullptr)
		*OwnerActor = Parms.OwnerActor;

	return Parms.ReturnValue;

}

}


