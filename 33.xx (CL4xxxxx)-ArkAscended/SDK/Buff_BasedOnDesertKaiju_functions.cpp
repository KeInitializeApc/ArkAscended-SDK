#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_BasedOnDesertKaiju.Buff_BasedOnDesertKaiju_C
// (Actor)

class UClass* ABuff_BasedOnDesertKaiju_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_BasedOnDesertKaiju_C");

	return Clss;
}


// Buff_BasedOnDesertKaiju_C Buff_BasedOnDesertKaiju.Default__Buff_BasedOnDesertKaiju_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_BasedOnDesertKaiju_C* ABuff_BasedOnDesertKaiju_C::GetDefaultObj()
{
	static class ABuff_BasedOnDesertKaiju_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_BasedOnDesertKaiju_C*>(ABuff_BasedOnDesertKaiju_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Buff_BasedOnDesertKaiju.Buff_BasedOnDesertKaiju_C.BPDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPrimalCharacterStatusComponent*CallFunc_GetCharacterStatusComponent_ReturnValue                 (ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimalCharacterMovement*    CallFunc_CharacterMovementToPCM_ReturnValue                      (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

class UPrimalCharacterMovement* ABuff_BasedOnDesertKaiju_C::BPDeactivated(class UPrimalCharacterStatusComponent** CallFunc_GetCharacterStatusComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BasedOnDesertKaiju_C", "BPDeactivated");

	Params::ABuff_BasedOnDesertKaiju_C_BPDeactivated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetCharacterStatusComponent_ReturnValue != nullptr)
		*CallFunc_GetCharacterStatusComponent_ReturnValue = Parms.CallFunc_GetCharacterStatusComponent_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_BasedOnDesertKaiju.Buff_BasedOnDesertKaiju_C.BPSetupForInstigator
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPrimalCharacterStatusComponent*CallFunc_GetCharacterStatusComponent_ReturnValue                 (ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimalCharacterMovement*    CallFunc_CharacterMovementToPCM_ReturnValue                      (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

class UPrimalCharacterMovement* ABuff_BasedOnDesertKaiju_C::BPSetupForInstigator(class UPrimalCharacterStatusComponent** CallFunc_GetCharacterStatusComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BasedOnDesertKaiju_C", "BPSetupForInstigator");

	Params::ABuff_BasedOnDesertKaiju_C_BPSetupForInstigator_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetCharacterStatusComponent_ReturnValue != nullptr)
		*CallFunc_GetCharacterStatusComponent_ReturnValue = Parms.CallFunc_GetCharacterStatusComponent_ReturnValue;

	return Parms.ReturnValue;

}

}


