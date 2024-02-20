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
// class AActor*                      OwnerActor                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ConstParm, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_GetTarget_ReturnValue                                   (ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class APrimalDinoCharacter*        CallFunc_GetFirstValidWildFollowingParentRef_ReturnValue         (BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

class APrimalDinoCharacter* UGetPointBehindParentAwayFromAttacker_TK_C::ExecuteUbergraph_GetPointBehindParentAwayFromAttacker_TK(class AActor** K2Node_Event_OwnerActor, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, class APawn** CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetPointBehindParentAwayFromAttacker_TK_C", "ExecuteUbergraph_GetPointBehindParentAwayFromAttacker_TK");

	Params::UGetPointBehindParentAwayFromAttacker_TK_C_ExecuteUbergraph_GetPointBehindParentAwayFromAttacker_TK_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_OwnerActor != nullptr)
		*K2Node_Event_OwnerActor = Parms.K2Node_Event_OwnerActor;

	if (K2Node_DynamicCast_AsPrimal_Dino_AIController != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_AIController = Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController;

	if (CallFunc_K2_GetPawn_ReturnValue != nullptr)
		*CallFunc_K2_GetPawn_ReturnValue = Parms.CallFunc_K2_GetPawn_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}

}


