#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x648 - 0x638)
// BlueprintGeneratedClass VolumentricDispatcherBP.VolumentricDispatcherBP_C
class AVolumentricDispatcherBP_C : public AVolumetricDispatcher
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x638(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x640(0x8)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)

	static class UClass* StaticClass();
	static class AVolumentricDispatcherBP_C* GetDefaultObj();

	void FluidSpash(struct FVector* Location, float Radius, const struct FVector& Velocity, class UNiagaraSystem** FluidSimSplashTemplateOverride, bool* PlaySplashSound);
	double ExecuteUbergraph_VolumentricDispatcherBP(int32* EntryPoint, bool Temp_bool_Variable, struct FVector* K2Node_Event_Location, float K2Node_Event_Radius, const struct FVector& K2Node_Event_Velocity, class UNiagaraSystem* K2Node_Event_FluidSimSplashTemplateOverride, bool K2Node_Event_PlaySplashSound, class USoundBase** Temp_object_Variable, class USoundBase** Temp_object_Variable_1, class USoundBase* K2Node_Select_Default);
};

}


