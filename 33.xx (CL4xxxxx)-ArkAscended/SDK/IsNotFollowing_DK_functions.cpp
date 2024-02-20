#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IsNotFollowing_DK.IsNotFollowing_DK_C
// (None)

class UClass* UIsNotFollowing_DK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IsNotFollowing_DK_C");

	return Clss;
}


// IsNotFollowing_DK_C IsNotFollowing_DK.Default__IsNotFollowing_DK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIsNotFollowing_DK_C* UIsNotFollowing_DK_C::GetDefaultObj()
{
	static class UIsNotFollowing_DK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIsNotFollowing_DK_C*>(UIsNotFollowing_DK_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IsNotFollowing_DK.IsNotFollowing_DK_C.ReceiveConditionCheck
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UIsNotFollowing_DK_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsNotFollowing_DK_C", "ReceiveConditionCheck");

	Params::UIsNotFollowing_DK_C_ReceiveConditionCheck_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OwnerActor != nullptr)
		*OwnerActor = Parms.OwnerActor;

}


// Function IsNotFollowing_DK.IsNotFollowing_DK_C.ExecuteUbergraph_IsNotFollowing_DK
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ConstParm, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class AActor*                      CallFunc_GetTamedFollowTarget_ReturnValue                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UIsNotFollowing_DK_C::ExecuteUbergraph_IsNotFollowing_DK(class AActor** K2Node_Event_OwnerActor, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, class APawn** CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, class AActor* CallFunc_GetTamedFollowTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsNotFollowing_DK_C", "ExecuteUbergraph_IsNotFollowing_DK");

	Params::UIsNotFollowing_DK_C_ExecuteUbergraph_IsNotFollowing_DK_Params Parms{};

	Parms.CallFunc_GetTamedFollowTarget_ReturnValue = CallFunc_GetTamedFollowTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_OwnerActor != nullptr)
		*K2Node_Event_OwnerActor = Parms.K2Node_Event_OwnerActor;

	if (K2Node_DynamicCast_AsPrimal_Dino_AIController != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_AIController = Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController;

	if (CallFunc_K2_GetPawn_ReturnValue != nullptr)
		*CallFunc_K2_GetPawn_ReturnValue = Parms.CallFunc_K2_GetPawn_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	return Parms.ReturnValue;

}

}


