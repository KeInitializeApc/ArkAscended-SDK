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
// class USoundBase*                  InSound                                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               bIsProne                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              SoundState                                                       (Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class USoundBase*                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class USoundBase*                  RetSound                                                         (Edit, ConstParm, BlueprintVisible, ReturnParm, Config, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
// class USoundBase*                  K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// class USoundBase*                  K2Node_Select_Default_1                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class USoundBase*                  K2Node_Select_Default_2                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)

int32 UPrimalItemArmor_BasePants_C::OverrideCrouchingSound(class USoundBase* ReturnValue, bool* Temp_bool_Variable, class USoundBase** K2Node_Select_Default, class USoundBase** K2Node_Select_Default_1, bool* CallFunc_IsValid_ReturnValue, class USoundBase** K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_BasePants_C", "OverrideCrouchingSound");

	Params::UPrimalItemArmor_BasePants_C_OverrideCrouchingSound_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

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


