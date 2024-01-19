#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_BasePants.PrimalItemArmor_BasePants_C
// (None)

class UClass* UPrimalItemArmor_BasePants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_BasePants_C");

	return Clss;
}


// PrimalItemArmor_BasePants_C PrimalItemArmor_BasePants.Default__PrimalItemArmor_BasePants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_BasePants_C* UPrimalItemArmor_BasePants_C::GetDefaultObj()
{
	static class UPrimalItemArmor_BasePants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_BasePants_C*>(UPrimalItemArmor_BasePants_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItemArmor_BasePants.PrimalItemArmor_BasePants_C.OverrideCrouchingSound
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  InSound                                                          (Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bIsProne                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              SoundState                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class USoundBase*                  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundBase*                  RetSound                                                         (Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable                                                (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class USoundBase*                  K2Node_Select_Default                                            (EditFixedSize, DisableEditOnInstance, SubobjectReference)
// class USoundBase*                  K2Node_Select_Default_1                                          (EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class USoundBase*                  K2Node_Select_Default_2                                          (EditFixedSize, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)

bool UPrimalItemArmor_BasePants_C::OverrideCrouchingSound(bool* bIsProne, class USoundBase* ReturnValue, class USoundBase* RetSound, bool Temp_bool_Variable, class USoundBase* K2Node_Select_Default, class USoundBase* K2Node_Select_Default_1, class USoundBase* K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_BasePants_C", "OverrideCrouchingSound");

	Params::UPrimalItemArmor_BasePants_C_OverrideCrouchingSound_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.RetSound = RetSound;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsProne != nullptr)
		*bIsProne = Parms.bIsProne;

	return Parms.ReturnValue;

}

}


