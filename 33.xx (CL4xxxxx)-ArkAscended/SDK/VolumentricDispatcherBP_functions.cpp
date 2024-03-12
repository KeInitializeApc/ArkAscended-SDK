#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VolumentricDispatcherBP.VolumentricDispatcherBP_C
// (Actor)

class UClass* AVolumentricDispatcherBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VolumentricDispatcherBP_C");

	return Clss;
}


// VolumentricDispatcherBP_C VolumentricDispatcherBP.Default__VolumentricDispatcherBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVolumentricDispatcherBP_C* AVolumentricDispatcherBP_C::GetDefaultObj()
{
	static class AVolumentricDispatcherBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVolumentricDispatcherBP_C*>(AVolumentricDispatcherBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function VolumentricDispatcherBP.VolumentricDispatcherBP_C.FluidSpash
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// float                              Radius                                                           (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     Velocity                                                         (Config, EditConst, GlobalConfig)
// class UNiagaraSystem*              FluidSimSplashTemplateOverride                                   (Edit, ExportObject, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               PlaySplashSound                                                  (Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void AVolumentricDispatcherBP_C::FluidSpash(struct FVector* Location, float Radius, const struct FVector& Velocity, class UNiagaraSystem** FluidSimSplashTemplateOverride, bool* PlaySplashSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VolumentricDispatcherBP_C", "FluidSpash");

	Params::AVolumentricDispatcherBP_C_FluidSpash_Params Parms{};

	Parms.Radius = Radius;
	Parms.Velocity = Velocity;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (FluidSimSplashTemplateOverride != nullptr)
		*FluidSimSplashTemplateOverride = Parms.FluidSimSplashTemplateOverride;

	if (PlaySplashSound != nullptr)
		*PlaySplashSound = Parms.PlaySplashSound;

}


// Function VolumentricDispatcherBP.VolumentricDispatcherBP_C.ExecuteUbergraph_VolumentricDispatcherBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     K2Node_Event_Location                                            (Edit, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              K2Node_Event_Radius                                              (ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     K2Node_Event_Velocity                                            (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UNiagaraSystem*              K2Node_Event_FluidSimSplashTemplateOverride                      (BlueprintVisible, Net, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_Event_PlaySplashSound                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class USoundBase*                  Temp_object_Variable                                             (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class USoundBase*                  Temp_object_Variable_1                                           (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class USoundBase*                  K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_PlayFluidImpactEffect_Radius_ImplicitCast               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

double AVolumentricDispatcherBP_C::ExecuteUbergraph_VolumentricDispatcherBP(int32* EntryPoint, bool Temp_bool_Variable, struct FVector* K2Node_Event_Location, float K2Node_Event_Radius, const struct FVector& K2Node_Event_Velocity, class UNiagaraSystem* K2Node_Event_FluidSimSplashTemplateOverride, bool K2Node_Event_PlaySplashSound, class USoundBase** Temp_object_Variable, class USoundBase** Temp_object_Variable_1, class USoundBase* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VolumentricDispatcherBP_C", "ExecuteUbergraph_VolumentricDispatcherBP");

	Params::AVolumentricDispatcherBP_C_ExecuteUbergraph_VolumentricDispatcherBP_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_Radius = K2Node_Event_Radius;
	Parms.K2Node_Event_Velocity = K2Node_Event_Velocity;
	Parms.K2Node_Event_FluidSimSplashTemplateOverride = K2Node_Event_FluidSimSplashTemplateOverride;
	Parms.K2Node_Event_PlaySplashSound = K2Node_Event_PlaySplashSound;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_Event_Location != nullptr)
		*K2Node_Event_Location = std::move(Parms.K2Node_Event_Location);

	if (Temp_object_Variable != nullptr)
		*Temp_object_Variable = Parms.Temp_object_Variable;

	if (Temp_object_Variable_1 != nullptr)
		*Temp_object_Variable_1 = Parms.Temp_object_Variable_1;

	return Parms.ReturnValue;

}

}


