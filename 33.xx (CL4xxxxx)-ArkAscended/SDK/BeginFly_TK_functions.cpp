#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BeginFly_TK.BeginFly_TK_C
// (None)

class UClass* UBeginFly_TK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BeginFly_TK_C");

	return Clss;
}


// BeginFly_TK_C BeginFly_TK.Default__BeginFly_TK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBeginFly_TK_C* UBeginFly_TK_C::GetDefaultObj()
{
	static class UBeginFly_TK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBeginFly_TK_C*>(UBeginFly_TK_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BeginFly_TK.BeginFly_TK_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UBeginFly_TK_C::ReceiveExecute(class AActor** OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BeginFly_TK_C", "ReceiveExecute");

	Params::UBeginFly_TK_C_ReceiveExecute_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OwnerActor != nullptr)
		*OwnerActor = Parms.OwnerActor;

}


// Function BeginFly_TK.BeginFly_TK_C.ExecuteUbergraph_BeginFly_TK
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class UBehaviorTreeComponent*      CallFunc_GetBehaviorTree_ReturnValue                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UBTNode*                     CallFunc_FindService_ReturnValue                                 (ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UBTNode*                     CallFunc_FindService_ReturnValue_1                               (ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UBTService_BlueprintBase*    K2Node_DynamicCast_AsBTService_Blueprint_Base                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UBTService_BlueprintBase*    K2Node_DynamicCast_AsBTService_Blueprint_Base_1                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ConstParm, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)

bool UBeginFly_TK_C::ExecuteUbergraph_BeginFly_TK(class AActor** K2Node_Event_OwnerActor, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, class APawn** CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BeginFly_TK_C", "ExecuteUbergraph_BeginFly_TK");

	Params::UBeginFly_TK_C_ExecuteUbergraph_BeginFly_TK_Params Parms{};


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


