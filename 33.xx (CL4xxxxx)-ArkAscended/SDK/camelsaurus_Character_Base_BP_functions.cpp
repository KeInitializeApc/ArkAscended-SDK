#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass camelsaurus_Character_Base_BP.camelsaurus_Character_Base_BP_C
// (Actor, Pawn)

class UClass* ACamelsaurus_Character_Base_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("camelsaurus_Character_Base_BP_C");

	return Clss;
}


// camelsaurus_Character_Base_BP_C camelsaurus_Character_Base_BP.Default__camelsaurus_Character_Base_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACamelsaurus_Character_Base_BP_C* ACamelsaurus_Character_Base_BP_C::GetDefaultObj()
{
	static class ACamelsaurus_Character_Base_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACamelsaurus_Character_Base_BP_C*>(ACamelsaurus_Character_Base_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function camelsaurus_Character_Base_BP.camelsaurus_Character_Base_BP_C.AddWater
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Amount                                                           (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             NewWaterAmount                                                   (ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             OldWaterAmount                                                   (BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

double ACamelsaurus_Character_Base_BP_C::AddWater(double* Amount, double* CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("camelsaurus_Character_Base_BP_C", "AddWater");

	Params::ACamelsaurus_Character_Base_BP_C_AddWater_Params Parms{};

	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Amount != nullptr)
		*Amount = Parms.Amount;

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	return Parms.ReturnValue;

}

}


