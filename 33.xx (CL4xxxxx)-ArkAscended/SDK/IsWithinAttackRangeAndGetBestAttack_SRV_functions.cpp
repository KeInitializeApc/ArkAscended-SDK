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
// class APrimalDinoAIController*     OwnerController                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (BlueprintVisible, ExportObject, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetAttackRotationRangeDegrees_ReturnValue               (ConstParm, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetAttackInterval_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, SubobjectReference)

bool UIsWithinAttackRangeAndGetBestAttack_SRV_C::UpdateBlackboardKeys(class APrimalDinoAIController* OwnerController, class FName CallFunc_MakeLiteralName_ReturnValue, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, class FName CallFunc_MakeLiteralName_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, float CallFunc_GetAttackRotationRangeDegrees_ReturnValue, float CallFunc_GetAttackInterval_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsWithinAttackRangeAndGetBestAttack_SRV_C", "UpdateBlackboardKeys");

	Params::UIsWithinAttackRangeAndGetBestAttack_SRV_C_UpdateBlackboardKeys_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_GetAttackRotationRangeDegrees_ReturnValue = CallFunc_GetAttackRotationRangeDegrees_ReturnValue;
	Parms.CallFunc_GetAttackInterval_ReturnValue = CallFunc_GetAttackInterval_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsPrimal_Dino_AIController != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_AIController = Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController;

	return Parms.ReturnValue;

}


// Function IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaSeconds                                                     (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UIsWithinAttackRangeAndGetBestAttack_SRV_C::ReceiveTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsWithinAttackRangeAndGetBestAttack_SRV_C", "ReceiveTick");

	Params::UIsWithinAttackRangeAndGetBestAttack_SRV_C_ReceiveTick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C.ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, BlueprintVisible, Net, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor                                          (EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_DeltaSeconds                                        (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_GetAttackInterval_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsWithinAttackRangeAndCalculateBestAttack_bAttackChanged(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsWithinAttackRangeAndCalculateBestAttack_ReturnValue   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// uint8                              CallFunc_GetCurrentAttackIndex_ReturnValue                       (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

bool UIsWithinAttackRangeAndGetBestAttack_SRV_C::ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV(int32 EntryPoint, class AActor** K2Node_Event_OwnerActor, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, float CallFunc_GetAttackInterval_ReturnValue, bool* CallFunc_IsWithinAttackRangeAndCalculateBestAttack_bAttackChanged, bool* CallFunc_IsWithinAttackRangeAndCalculateBestAttack_ReturnValue, uint8* CallFunc_GetCurrentAttackIndex_ReturnValue, int32* CallFunc_Conv_ByteToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsWithinAttackRangeAndGetBestAttack_SRV_C", "ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV");

	Params::UIsWithinAttackRangeAndGetBestAttack_SRV_C_ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAttackInterval_ReturnValue = CallFunc_GetAttackInterval_ReturnValue;

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


