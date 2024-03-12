#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_Desert_GogglesHelmet.Buff_Desert_GogglesHelmet_C
// (Actor)

class UClass* ABuff_Desert_GogglesHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_Desert_GogglesHelmet_C");

	return Clss;
}


// Buff_Desert_GogglesHelmet_C Buff_Desert_GogglesHelmet.Default__Buff_Desert_GogglesHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_Desert_GogglesHelmet_C* ABuff_Desert_GogglesHelmet_C::GetDefaultObj()
{
	static class ABuff_Desert_GogglesHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_Desert_GogglesHelmet_C*>(ABuff_Desert_GogglesHelmet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Buff_Desert_GogglesHelmet.Buff_Desert_GogglesHelmet_C.AllowPostProcessEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_HasBuff_ReturnValue                                     (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

bool ABuff_Desert_GogglesHelmet_C::AllowPostProcessEffect(class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_Desert_GogglesHelmet_C", "AllowPostProcessEffect");

	Params::ABuff_Desert_GogglesHelmet_C_AllowPostProcessEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}

}


