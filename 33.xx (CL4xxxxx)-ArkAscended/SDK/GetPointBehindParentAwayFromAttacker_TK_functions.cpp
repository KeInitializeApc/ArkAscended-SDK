#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GetPointBehindParentAwayFromAttacker_TK.GetPointBehindParentAwayFromAttacker_TK_C
// (None)

class UClass* UGetPointBehindParentAwayFromAttacker_TK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetPointBehindParentAwayFromAttacker_TK_C");

	return Clss;
}


// GetPointBehindParentAwayFromAttacker_TK_C GetPointBehindParentAwayFromAttacker_TK.Default__GetPointBehindParentAwayFromAttacker_TK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGetPointBehindParentAwayFromAttacker_TK_C* UGetPointBehindParentAwayFromAttacker_TK_C::GetDefaultObj()
{
	static class UGetPointBehindParentAwayFromAttacker_TK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetPointBehindParentAwayFromAttacker_TK_C*>(UGetPointBehindParentAwayFromAttacker_TK_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GetPointBehindParentAwayFromAttacker_TK.GetPointBehindParentAwayFromAttacker_TK_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void UGetPointBehindParentAwayFromAttacker_TK_C::ReceiveExecute(class AActor** OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetPointBehindParentAwayFromAttacker_TK_C", "ReceiveExecute");

	Params::UGetPointBehindParentAwayFromAttacker_TK_C_ReceiveExecute_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OwnerActor != nullptr)
		*OwnerActor = Parms.OwnerActor;

}


// Function GetPointBehindParentAwayFromAttacker_TK.GetPointBehindParentAwayFromAttacker_TK_C.ExecuteUbergraph_GetPointBehindParentAwayFromAttacker_TK
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AActor*                      CallFunc_GetTarget_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class APrimalDinoCharacter*        CallFunc_GetFirstValidWildFollowingParentRef_ReturnValue         (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class APrimalDinoCharacter* UGetPointBehindParentAwayFromAttacker_TK_C::ExecuteUbergraph_GetPointBehindParentAwayFromAttacker_TK(class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess, class AActor** CallFunc_GetTarget_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetPointBehindParentAwayFromAttacker_TK_C", "ExecuteUbergraph_GetPointBehindParentAwayFromAttacker_TK");

	Params::UGetPointBehindParentAwayFromAttacker_TK_C_ExecuteUbergraph_GetPointBehindParentAwayFromAttacker_TK_Params Parms{};

	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController = K2Node_DynamicCast_AsPrimal_Dino_AIController;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetTarget_ReturnValue != nullptr)
		*CallFunc_GetTarget_ReturnValue = Parms.CallFunc_GetTarget_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}

}


