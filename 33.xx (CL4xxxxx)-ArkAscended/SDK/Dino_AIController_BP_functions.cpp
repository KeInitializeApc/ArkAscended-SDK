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
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ConstParm, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ConstParm, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_2                           (ConstParm, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_GetAttackInterval_ReturnValue                           (Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              CallFunc_GetAttackRotationRangeDegrees_ReturnValue               (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_HasAuthority_ReturnValue                                (Edit, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_RunBehaviorTree_ReturnValue                             (Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ADino_AIController_BP_C::ExecuteUbergraph_Dino_AIController_BP(int32 EntryPoint, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_AIController_BP_C", "ExecuteUbergraph_Dino_AIController_BP");

	Params::ADino_AIController_BP_C_ExecuteUbergraph_Dino_AIController_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_MakeLiteralName_ReturnValue_2 = CallFunc_MakeLiteralName_ReturnValue_2;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


