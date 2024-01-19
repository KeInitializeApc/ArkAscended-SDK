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
// class AActor*                      OwnerActor                                                       (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

class AActor* UGetPointBehindParentAwayFromAttacker_TK_C::ReceiveExecute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetPointBehindParentAwayFromAttacker_TK_C", "ReceiveExecute");

	Params::UGetPointBehindParentAwayFromAttacker_TK_C_ReceiveExecute_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GetPointBehindParentAwayFromAttacker_TK.GetPointBehindParentAwayFromAttacker_TK_C.ExecuteUbergraph_GetPointBehindParentAwayFromAttacker_TK
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor                                          (BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (Edit, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetTarget_ReturnValue                                   (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class APrimalDinoCharacter*        CallFunc_GetFirstValidWildFollowingParentRef_ReturnValue         (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UGetPointBehindParentAwayFromAttacker_TK_C::ExecuteUbergraph_GetPointBehindParentAwayFromAttacker_TK(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, class APrimalDinoCharacter** CallFunc_GetFirstValidWildFollowingParentRef_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetPointBehindParentAwayFromAttacker_TK_C", "ExecuteUbergraph_GetPointBehindParentAwayFromAttacker_TK");

	Params::UGetPointBehindParentAwayFromAttacker_TK_C_ExecuteUbergraph_GetPointBehindParentAwayFromAttacker_TK_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetFirstValidWildFollowingParentRef_ReturnValue != nullptr)
		*CallFunc_GetFirstValidWildFollowingParentRef_ReturnValue = Parms.CallFunc_GetFirstValidWildFollowingParentRef_ReturnValue;

	return Parms.ReturnValue;

}

}


