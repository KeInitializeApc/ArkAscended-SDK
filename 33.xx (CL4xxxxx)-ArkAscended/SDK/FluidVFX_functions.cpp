#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FluidVFX.FluidVFX_C
// (None)

class UClass* UFluidVFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FluidVFX_C");

	return Clss;
}


// FluidVFX_C FluidVFX.Default__FluidVFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFluidVFX_C* UFluidVFX_C::GetDefaultObj()
{
	static class UFluidVFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFluidVFX_C*>(UFluidVFX_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FluidVFX.FluidVFX_C.PlayFluidImpactEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ImpactLocation                                                   (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Radius                                                           (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     Velocity                                                         (Config, EditConst, GlobalConfig)
// class UNiagaraSystem*              SystemTemplate                                                   (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class USoundBase*                  Sound                                                            (ConstParm, ExportObject, Net, Parm, OutParm, EditConst, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UNiagaraSystem*              Temp_object_Variable                                             (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UNiagaraSystem*              K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (Edit, ConstParm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UFluidVFX_C::PlayFluidImpactEffect(const struct FVector& ImpactLocation, double Radius, const struct FVector& Velocity, class UNiagaraSystem** SystemTemplate, class USoundBase** Sound, class UObject* __WorldContext, class UNiagaraSystem** Temp_object_Variable, bool Temp_bool_Variable, class UNiagaraSystem* K2Node_Select_Default, class UNiagaraComponent** CallFunc_SpawnSystemAtLocation_ReturnValue, float* CallFunc_SetVariableFloat_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FluidVFX_C", "PlayFluidImpactEffect");

	Params::UFluidVFX_C_PlayFluidImpactEffect_Params Parms{};

	Parms.ImpactLocation = ImpactLocation;
	Parms.Radius = Radius;
	Parms.Velocity = Velocity;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (SystemTemplate != nullptr)
		*SystemTemplate = Parms.SystemTemplate;

	if (Sound != nullptr)
		*Sound = Parms.Sound;

	if (Temp_object_Variable != nullptr)
		*Temp_object_Variable = Parms.Temp_object_Variable;

	if (CallFunc_SpawnSystemAtLocation_ReturnValue != nullptr)
		*CallFunc_SpawnSystemAtLocation_ReturnValue = Parms.CallFunc_SpawnSystemAtLocation_ReturnValue;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast;

	return Parms.ReturnValue;

}

}


