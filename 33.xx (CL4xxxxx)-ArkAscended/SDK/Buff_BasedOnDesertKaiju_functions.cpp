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
// class AActor*                      ForInstigator                                                    (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPrimalCharacterStatusComponent*CallFunc_GetCharacterStatusComponent_ReturnValue                 (Edit, ExportObject, Net, EditFixedSize, Transient, EditConst, SubobjectReference)
// class UPrimalCharacterMovement*    CallFunc_CharacterMovementToPCM_ReturnValue                      (BlueprintVisible, BlueprintReadOnly, OutParm, Config, GlobalConfig, SubobjectReference)

bool ABuff_BasedOnDesertKaiju_C::BPDeactivated(class AActor* ForInstigator, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, class UPrimalCharacterStatusComponent* CallFunc_GetCharacterStatusComponent_ReturnValue, class UPrimalCharacterMovement** CallFunc_CharacterMovementToPCM_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BasedOnDesertKaiju_C", "BPDeactivated");

	Params::ABuff_BasedOnDesertKaiju_C_BPDeactivated_Params Parms{};

	Parms.ForInstigator = ForInstigator;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_GetCharacterStatusComponent_ReturnValue = CallFunc_GetCharacterStatusComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_CharacterMovementToPCM_ReturnValue != nullptr)
		*CallFunc_CharacterMovementToPCM_ReturnValue = Parms.CallFunc_CharacterMovementToPCM_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_BasedOnDesertKaiju.Buff_BasedOnDesertKaiju_C.BPSetupForInstigator
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPrimalCharacterStatusComponent*CallFunc_GetCharacterStatusComponent_ReturnValue                 (Edit, ExportObject, Net, EditFixedSize, Transient, EditConst, SubobjectReference)
// class UPrimalCharacterMovement*    CallFunc_CharacterMovementToPCM_ReturnValue                      (BlueprintVisible, BlueprintReadOnly, OutParm, Config, GlobalConfig, SubobjectReference)

bool ABuff_BasedOnDesertKaiju_C::BPSetupForInstigator(class AActor* ForInstigator, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, class UPrimalCharacterStatusComponent* CallFunc_GetCharacterStatusComponent_ReturnValue, class UPrimalCharacterMovement** CallFunc_CharacterMovementToPCM_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BasedOnDesertKaiju_C", "BPSetupForInstigator");

	Params::ABuff_BasedOnDesertKaiju_C_BPSetupForInstigator_Params Parms{};

	Parms.ForInstigator = ForInstigator;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_GetCharacterStatusComponent_ReturnValue = CallFunc_GetCharacterStatusComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_CharacterMovementToPCM_ReturnValue != nullptr)
		*CallFunc_CharacterMovementToPCM_ReturnValue = Parms.CallFunc_CharacterMovementToPCM_ReturnValue;

	return Parms.ReturnValue;

}

}


