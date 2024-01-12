#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C
// (None)

class UClass* UIsWithinAttackRangeAndGetBestAttack_SRV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IsWithinAttackRangeAndGetBestAttack_SRV_C");

	return Clss;
}


// IsWithinAttackRangeAndGetBestAttack_SRV_C IsWithinAttackRangeAndGetBestAttack_SRV.Default__IsWithinAttackRangeAndGetBestAttack_SRV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIsWithinAttackRangeAndGetBestAttack_SRV_C* UIsWithinAttackRangeAndGetBestAttack_SRV_C::GetDefaultObj()
{
	static class UIsWithinAttackRangeAndGetBestAttack_SRV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIsWithinAttackRangeAndGetBestAttack_SRV_C*>(UIsWithinAttackRangeAndGetBestAttack_SRV_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C.UpdateBlackboardKeys
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalDinoAIController*     OwnerController                                                  (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetAttackRotationRangeDegrees_ReturnValue               (BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetAttackInterval_ReturnValue                           (BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

float UIsWithinAttackRangeAndGetBestAttack_SRV_C::UpdateBlackboardKeys(class APrimalDinoAIController** OwnerController, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsWithinAttackRangeAndGetBestAttack_SRV_C", "UpdateBlackboardKeys");

	Params::UIsWithinAttackRangeAndGetBestAttack_SRV_C_UpdateBlackboardKeys_Params Parms{};

	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController = K2Node_DynamicCast_AsPrimal_Dino_AIController;

	UObject::ProcessEvent(Func, &Parms);

	if (OwnerController != nullptr)
		*OwnerController = Parms.OwnerController;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaSeconds                                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

void UIsWithinAttackRangeAndGetBestAttack_SRV_C::ReceiveTick(class AActor** OwnerActor, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsWithinAttackRangeAndGetBestAttack_SRV_C", "ReceiveTick");

	Params::UIsWithinAttackRangeAndGetBestAttack_SRV_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

	if (OwnerActor != nullptr)
		*OwnerActor = Parms.OwnerActor;

}


// Function IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C.ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_DeltaSeconds                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_GetAttackInterval_ReturnValue                           (BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsWithinAttackRangeAndCalculateBestAttack_bAttackChanged(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsWithinAttackRangeAndCalculateBestAttack_ReturnValue   (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
// uint8                              CallFunc_GetCurrentAttackIndex_ReturnValue                       (EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)

int32 UIsWithinAttackRangeAndGetBestAttack_SRV_C::ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV(class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsWithinAttackRangeAndGetBestAttack_SRV_C", "ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV");

	Params::UIsWithinAttackRangeAndGetBestAttack_SRV_C_ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV_Params Parms{};

	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController = K2Node_DynamicCast_AsPrimal_Dino_AIController;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}

}


