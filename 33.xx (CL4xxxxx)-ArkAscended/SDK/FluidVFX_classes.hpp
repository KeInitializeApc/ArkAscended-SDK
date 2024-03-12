#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass FluidVFX.FluidVFX_C
class UFluidVFX_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFluidVFX_C* GetDefaultObj();

	bool PlayFluidImpactEffect(const struct FVector& ImpactLocation, double Radius, const struct FVector& Velocity, class UNiagaraSystem** SystemTemplate, class USoundBase** Sound, class UObject* __WorldContext, class UNiagaraSystem** Temp_object_Variable, bool Temp_bool_Variable, class UNiagaraSystem* K2Node_Select_Default, class UNiagaraComponent** CallFunc_SpawnSystemAtLocation_ReturnValue, float* CallFunc_SetVariableFloat_InValue_ImplicitCast);
};

}


