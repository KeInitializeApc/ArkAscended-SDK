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
// class USoundBase*                  InSound                                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bIsProne                                                         (Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              SoundState                                                       (Edit, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class USoundBase*                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundBase*                  RetSound                                                         (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class USoundBase*                  K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class USoundBase*                  K2Node_Select_Default_1                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class USoundBase*                  K2Node_Select_Default_2                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)

class USoundBase* UPrimalItemArmor_BasePants_C::OverrideCrouchingSound(class USoundBase* InSound, int32 SoundState, class USoundBase** RetSound, bool Temp_bool_Variable, int32* Temp_int_Variable, int32* Temp_int_Variable_1, class USoundBase** K2Node_Select_Default, class USoundBase** K2Node_Select_Default_1, bool* CallFunc_IsValid_ReturnValue, class USoundBase** K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_BasePants_C", "OverrideCrouchingSound");

	Params::UPrimalItemArmor_BasePants_C_OverrideCrouchingSound_Params Parms{};

	Parms.InSound = InSound;
	Parms.SoundState = SoundState;
	Parms.Temp_bool_Variable = Temp_bool_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (RetSound != nullptr)
		*RetSound = Parms.RetSound;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_Select_Default_2 != nullptr)
		*K2Node_Select_Default_2 = Parms.K2Node_Select_Default_2;

	return Parms.ReturnValue;

}

}


