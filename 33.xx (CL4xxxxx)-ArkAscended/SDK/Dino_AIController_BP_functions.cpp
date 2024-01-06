#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Dino_AIController_BP.Dino_AIController_BP_C
// (Actor)

class UClass* ADino_AIController_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dino_AIController_BP_C");

	return Clss;
}


// Dino_AIController_BP_C Dino_AIController_BP.Default__Dino_AIController_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADino_AIController_BP_C* ADino_AIController_BP_C::GetDefaultObj()
{
	static class ADino_AIController_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADino_AIController_BP_C*>(ADino_AIController_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Dino_AIController_BP.Dino_AIController_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADino_AIController_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_AIController_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dino_AIController_BP.Dino_AIController_BP_C.ExecuteUbergraph_Dino_AIController_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, BlueprintVisible, Net, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_2                           (BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_GetAttackInterval_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetAttackRotationRangeDegrees_ReturnValue               (ConstParm, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (BlueprintVisible, ExportObject, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_RunBehaviorTree_ReturnValue                             (Edit, ConstParm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)

bool ADino_AIController_BP_C::ExecuteUbergraph_Dino_AIController_BP(int32 EntryPoint, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, class FName CallFunc_MakeLiteralName_ReturnValue_2, float CallFunc_GetAttackInterval_ReturnValue, float CallFunc_GetAttackRotationRangeDegrees_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool* CallFunc_RunBehaviorTree_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_AIController_BP_C", "ExecuteUbergraph_Dino_AIController_BP");

	Params::ADino_AIController_BP_C_ExecuteUbergraph_Dino_AIController_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_MakeLiteralName_ReturnValue_2 = CallFunc_MakeLiteralName_ReturnValue_2;
	Parms.CallFunc_GetAttackInterval_ReturnValue = CallFunc_GetAttackInterval_ReturnValue;
	Parms.CallFunc_GetAttackRotationRangeDegrees_ReturnValue = CallFunc_GetAttackRotationRangeDegrees_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsPrimal_Dino_AIController != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_AIController = Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController;

	if (CallFunc_RunBehaviorTree_ReturnValue != nullptr)
		*CallFunc_RunBehaviorTree_ReturnValue = Parms.CallFunc_RunBehaviorTree_ReturnValue;

	return Parms.ReturnValue;

}

}


