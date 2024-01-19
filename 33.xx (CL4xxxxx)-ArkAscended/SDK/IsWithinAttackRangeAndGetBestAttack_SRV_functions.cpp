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
// class APrimalDinoAIController*     OwnerController                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ConstParm, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ConstParm, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              CallFunc_GetAttackRotationRangeDegrees_ReturnValue               (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              CallFunc_GetAttackInterval_ReturnValue                           (Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UIsWithinAttackRangeAndGetBestAttack_SRV_C::UpdateBlackboardKeys(class APrimalDinoAIController** OwnerController, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsWithinAttackRangeAndGetBestAttack_SRV_C", "UpdateBlackboardKeys");

	Params::UIsWithinAttackRangeAndGetBestAttack_SRV_C_UpdateBlackboardKeys_Params Parms{};

	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OwnerController != nullptr)
		*OwnerController = Parms.OwnerController;

	return Parms.ReturnValue;

}


// Function IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaSeconds                                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor                                          (BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_DeltaSeconds                                        (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_GetAttackInterval_ReturnValue                           (Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsWithinAttackRangeAndCalculateBestAttack_bAttackChanged(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsWithinAttackRangeAndCalculateBestAttack_ReturnValue   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// uint8                              CallFunc_GetCurrentAttackIndex_ReturnValue                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

int32 UIsWithinAttackRangeAndGetBestAttack_SRV_C::ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsWithinAttackRangeAndGetBestAttack_SRV_C", "ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV");

	Params::UIsWithinAttackRangeAndGetBestAttack_SRV_C_ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


