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
// class APrimalDinoAIController*     OwnerController                                                  (ExportObject, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_GetAttackRotationRangeDegrees_ReturnValue               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_GetAttackInterval_ReturnValue                           (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

float UIsWithinAttackRangeAndGetBestAttack_SRV_C::UpdateBlackboardKeys(class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsWithinAttackRangeAndGetBestAttack_SRV_C", "UpdateBlackboardKeys");

	Params::UIsWithinAttackRangeAndGetBestAttack_SRV_C_UpdateBlackboardKeys_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsPrimal_Dino_AIController != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_AIController = Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController;

	return Parms.ReturnValue;

}


// Function IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DeltaSeconds                                                     (ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UIsWithinAttackRangeAndGetBestAttack_SRV_C::ReceiveTick(class AActor** OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsWithinAttackRangeAndGetBestAttack_SRV_C", "ReceiveTick");

	Params::UIsWithinAttackRangeAndGetBestAttack_SRV_C_ReceiveTick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OwnerActor != nullptr)
		*OwnerActor = Parms.OwnerActor;

	return Parms.ReturnValue;

}


// Function IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C.ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ConstParm, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              K2Node_Event_DeltaSeconds                                        (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_GetAttackInterval_ReturnValue                           (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsWithinAttackRangeAndCalculateBestAttack_bAttackChanged(Edit, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsWithinAttackRangeAndCalculateBestAttack_ReturnValue   (Edit, ConstParm, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
// uint8                              CallFunc_GetCurrentAttackIndex_ReturnValue                       (Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

float UIsWithinAttackRangeAndGetBestAttack_SRV_C::ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV(class AActor** K2Node_Event_OwnerActor, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* CallFunc_IsWithinAttackRangeAndCalculateBestAttack_bAttackChanged, bool* CallFunc_IsWithinAttackRangeAndCalculateBestAttack_ReturnValue, uint8* CallFunc_GetCurrentAttackIndex_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32* CallFunc_Conv_ByteToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsWithinAttackRangeAndGetBestAttack_SRV_C", "ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV");

	Params::UIsWithinAttackRangeAndGetBestAttack_SRV_C_ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV_Params Parms{};

	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_OwnerActor != nullptr)
		*K2Node_Event_OwnerActor = Parms.K2Node_Event_OwnerActor;

	if (K2Node_DynamicCast_AsPrimal_Dino_AIController != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_AIController = Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController;

	if (CallFunc_IsWithinAttackRangeAndCalculateBestAttack_bAttackChanged != nullptr)
		*CallFunc_IsWithinAttackRangeAndCalculateBestAttack_bAttackChanged = Parms.CallFunc_IsWithinAttackRangeAndCalculateBestAttack_bAttackChanged;

	if (CallFunc_IsWithinAttackRangeAndCalculateBestAttack_ReturnValue != nullptr)
		*CallFunc_IsWithinAttackRangeAndCalculateBestAttack_ReturnValue = Parms.CallFunc_IsWithinAttackRangeAndCalculateBestAttack_ReturnValue;

	if (CallFunc_GetCurrentAttackIndex_ReturnValue != nullptr)
		*CallFunc_GetCurrentAttackIndex_ReturnValue = Parms.CallFunc_GetCurrentAttackIndex_ReturnValue;

	if (CallFunc_Conv_ByteToInt_ReturnValue != nullptr)
		*CallFunc_Conv_ByteToInt_ReturnValue = Parms.CallFunc_Conv_ByteToInt_ReturnValue;

	return Parms.ReturnValue;

}

}


