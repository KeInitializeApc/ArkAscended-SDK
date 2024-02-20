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
// double                             Amount                                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             NewWaterAmount                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             OldWaterAmount                                                   (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)

double ACamelsaurus_Character_Base_BP_C::AddWater(double* NewWaterAmount, double* OldWaterAmount, double* CallFunc_Add_DoubleDouble_ReturnValue, double* CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("camelsaurus_Character_Base_BP_C", "AddWater");

	Params::ACamelsaurus_Character_Base_BP_C_AddWater_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewWaterAmount != nullptr)
		*NewWaterAmount = Parms.NewWaterAmount;

	if (OldWaterAmount != nullptr)
		*OldWaterAmount = Parms.OldWaterAmount;

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	return Parms.ReturnValue;

}

}


