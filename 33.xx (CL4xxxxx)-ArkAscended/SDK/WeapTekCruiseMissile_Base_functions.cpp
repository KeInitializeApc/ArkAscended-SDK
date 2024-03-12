#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeapTekCruiseMissile_Base.WeapTekCruiseMissile_Base_C
// (Actor)

class UClass* AWeapTekCruiseMissile_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeapTekCruiseMissile_Base_C");

	return Clss;
}


// WeapTekCruiseMissile_Base_C WeapTekCruiseMissile_Base.Default__WeapTekCruiseMissile_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeapTekCruiseMissile_Base_C* AWeapTekCruiseMissile_Base_C::GetDefaultObj()
{
	static class AWeapTekCruiseMissile_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeapTekCruiseMissile_Base_C*>(AWeapTekCruiseMissile_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WeapTekCruiseMissile_Base.WeapTekCruiseMissile_Base_C.delay break and iron out
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Delay_for_zoom_out                                               (ConstParm, BlueprintVisible, Net, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void AWeapTekCruiseMissile_Base_C::Delay_break_and_iron_out(bool Delay_for_zoom_out)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapTekCruiseMissile_Base_C", "delay break and iron out");

	Params::AWeapTekCruiseMissile_Base_C_Delay_break_and_iron_out_Params Parms{};

	Parms.Delay_for_zoom_out = Delay_for_zoom_out;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeapTekCruiseMissile_Base.WeapTekCruiseMissile_Base_C.ExecuteUbergraph_WeapTekCruiseMissile_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_CustomEvent_delay_for_zoom_out                            (ConstParm, BlueprintReadOnly, EditFixedSize, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

void AWeapTekCruiseMissile_Base_C::ExecuteUbergraph_WeapTekCruiseMissile_Base(int32* EntryPoint, bool K2Node_CustomEvent_delay_for_zoom_out)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapTekCruiseMissile_Base_C", "ExecuteUbergraph_WeapTekCruiseMissile_Base");

	Params::AWeapTekCruiseMissile_Base_C_ExecuteUbergraph_WeapTekCruiseMissile_Base_Params Parms{};

	Parms.K2Node_CustomEvent_delay_for_zoom_out = K2Node_CustomEvent_delay_for_zoom_out;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

}

}


