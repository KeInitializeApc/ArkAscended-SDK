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
// class AActor*                      OwnerActor                                                       (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class AActor* UBeginFly_TK_C::ReceiveExecute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BeginFly_TK_C", "ReceiveExecute");

	Params::UBeginFly_TK_C_ReceiveExecute_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BeginFly_TK.BeginFly_TK_C.ExecuteUbergraph_BeginFly_TK
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UBehaviorTreeComponent*      CallFunc_GetBehaviorTree_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// class UBTNode*                     CallFunc_FindService_ReturnValue                                 (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// class UBTNode*                     CallFunc_FindService_ReturnValue_1                               (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// class UBTService_BlueprintBase*    K2Node_DynamicCast_AsBTService_Blueprint_Base                    (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class UBTService_BlueprintBase*    K2Node_DynamicCast_AsBTService_Blueprint_Base_1                  (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, NonTransactional)

class UBTService_BlueprintBase* UBeginFly_TK_C::ExecuteUbergraph_BeginFly_TK(int32* EntryPoint, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1, class AActor** K2Node_Event_OwnerActor, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BeginFly_TK_C", "ExecuteUbergraph_BeginFly_TK");

	Params::UBeginFly_TK_C_ExecuteUbergraph_BeginFly_TK_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_Event_OwnerActor != nullptr)
		*K2Node_Event_OwnerActor = Parms.K2Node_Event_OwnerActor;

	if (K2Node_DynamicCast_AsPrimal_Dino_AIController != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_AIController = Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (K2Node_DynamicCast_bSuccess_3 != nullptr)
		*K2Node_DynamicCast_bSuccess_3 = Parms.K2Node_DynamicCast_bSuccess_3;

	return Parms.ReturnValue;

}

}


