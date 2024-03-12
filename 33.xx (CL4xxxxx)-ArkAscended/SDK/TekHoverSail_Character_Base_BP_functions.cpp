#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TekHoverSail_Character_Base_BP.TekHoverSail_Character_Base_BP_C
// (Actor, Pawn)

class UClass* ATekHoverSail_Character_Base_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TekHoverSail_Character_Base_BP_C");

	return Clss;
}


// TekHoverSail_Character_Base_BP_C TekHoverSail_Character_Base_BP.Default__TekHoverSail_Character_Base_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATekHoverSail_Character_Base_BP_C* ATekHoverSail_Character_Base_BP_C::GetDefaultObj()
{
	static class ATekHoverSail_Character_Base_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATekHoverSail_Character_Base_BP_C*>(ATekHoverSail_Character_Base_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TekHoverSail_Character_Base_BP.TekHoverSail_Character_Base_BP_C.destroy itself
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Conv_FloatToDouble_ReturnValue                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Conv_FloatToDouble_InFloat_ImplicitCast                 (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

bool ATekHoverSail_Character_Base_BP_C::Destroy_itself(double CallFunc_Conv_FloatToDouble_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_Conv_FloatToDouble_InFloat_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TekHoverSail_Character_Base_BP_C", "destroy itself");

	Params::ATekHoverSail_Character_Base_BP_C_Destroy_itself_Params Parms{};

	Parms.CallFunc_Conv_FloatToDouble_ReturnValue = CallFunc_Conv_FloatToDouble_ReturnValue;
	Parms.CallFunc_Conv_FloatToDouble_InFloat_ImplicitCast = CallFunc_Conv_FloatToDouble_InFloat_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	return Parms.ReturnValue;

}

}


