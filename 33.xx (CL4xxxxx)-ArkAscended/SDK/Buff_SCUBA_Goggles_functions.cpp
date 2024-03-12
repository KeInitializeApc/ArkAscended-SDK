#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_SCUBA_Goggles.Buff_SCUBA_Goggles_C
// (Actor)

class UClass* ABuff_SCUBA_Goggles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_SCUBA_Goggles_C");

	return Clss;
}


// Buff_SCUBA_Goggles_C Buff_SCUBA_Goggles.Default__Buff_SCUBA_Goggles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_SCUBA_Goggles_C* ABuff_SCUBA_Goggles_C::GetDefaultObj()
{
	static class ABuff_SCUBA_Goggles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_SCUBA_Goggles_C*>(ABuff_SCUBA_Goggles_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Buff_SCUBA_Goggles.Buff_SCUBA_Goggles_C.AllowPostProcessEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_AllowPostProcessEffect_ReturnValue                      (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsFirstPersonCamera_ReturnValue                         (BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool ABuff_SCUBA_Goggles_C::AllowPostProcessEffect(class APawn* CallFunc_GetInstigator_ReturnValue, bool* CallFunc_IsFirstPersonCamera_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_SCUBA_Goggles_C", "AllowPostProcessEffect");

	Params::ABuff_SCUBA_Goggles_C_AllowPostProcessEffect_Params Parms{};

	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsFirstPersonCamera_ReturnValue != nullptr)
		*CallFunc_IsFirstPersonCamera_ReturnValue = Parms.CallFunc_IsFirstPersonCamera_ReturnValue;

	return Parms.ReturnValue;

}

}


