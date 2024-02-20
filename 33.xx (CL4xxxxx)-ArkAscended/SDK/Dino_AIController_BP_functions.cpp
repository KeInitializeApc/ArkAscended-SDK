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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_2                           (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_GetAttackInterval_ReturnValue                           (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_GetAttackRotationRangeDegrees_ReturnValue               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_RunBehaviorTree_ReturnValue                             (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool ADino_AIController_BP_C::ExecuteUbergraph_Dino_AIController_BP(class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_AIController_BP_C", "ExecuteUbergraph_Dino_AIController_BP");

	Params::ADino_AIController_BP_C_ExecuteUbergraph_Dino_AIController_BP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsPrimal_Dino_AIController != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_AIController = Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController;

	return Parms.ReturnValue;

}

}


