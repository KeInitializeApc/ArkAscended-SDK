#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_Female_Hair_Afro_Long_AnimBP.SK_Female_Hair_Afro_Long_AnimBP_C
// (None)

class UClass* USK_Female_Hair_Afro_Long_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_Female_Hair_Afro_Long_AnimBP_C");

	return Clss;
}


// SK_Female_Hair_Afro_Long_AnimBP_C SK_Female_Hair_Afro_Long_AnimBP.Default__SK_Female_Hair_Afro_Long_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_Female_Hair_Afro_Long_AnimBP_C* USK_Female_Hair_Afro_Long_AnimBP_C::GetDefaultObj()
{
	static class USK_Female_Hair_Afro_Long_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_Female_Hair_Afro_Long_AnimBP_C*>(USK_Female_Hair_Afro_Long_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_Female_Hair_Afro_Long_AnimBP.SK_Female_Hair_Afro_Long_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Edit, Net, Transient, EditConst)

void USK_Female_Hair_Afro_Long_AnimBP_C::AnimGraph(const struct FPoseLink& AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Female_Hair_Afro_Long_AnimBP_C", "AnimGraph");

	Params::USK_Female_Hair_Afro_Long_AnimBP_C_AnimGraph_Params Parms{};

	Parms.AnimGraph = AnimGraph;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_Female_Hair_Afro_Long_AnimBP.SK_Female_Hair_Afro_Long_AnimBP_C.BlueprintThreadSafeUpdateAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool USK_Female_Hair_Afro_Long_AnimBP_C::BlueprintThreadSafeUpdateAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Female_Hair_Afro_Long_AnimBP_C", "BlueprintThreadSafeUpdateAnimation");

	Params::USK_Female_Hair_Afro_Long_AnimBP_C_BlueprintThreadSafeUpdateAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SK_Female_Hair_Afro_Long_AnimBP.SK_Female_Hair_Afro_Long_AnimBP_C.NoiseGen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_MakePerlinNoiseVectorAndRemap_ReturnValue            (Edit, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_K2_MakePerlinNoiseVectorAndRemap_X_ImplicitCast         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_K2_MakePerlinNoiseVectorAndRemap_Y_ImplicitCast         (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_K2_MakePerlinNoiseVectorAndRemap_Z_ImplicitCast         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast                          (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

float USK_Female_Hair_Afro_Long_AnimBP_C::NoiseGen(double CallFunc_Multiply_DoubleFloat_ReturnValue, struct FVector* CallFunc_K2_MakePerlinNoiseVectorAndRemap_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, float* CallFunc_K2_MakePerlinNoiseVectorAndRemap_X_ImplicitCast, float* CallFunc_K2_MakePerlinNoiseVectorAndRemap_Y_ImplicitCast, float CallFunc_K2_MakePerlinNoiseVectorAndRemap_Z_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Female_Hair_Afro_Long_AnimBP_C", "NoiseGen");

	Params::USK_Female_Hair_Afro_Long_AnimBP_C_NoiseGen_Params Parms{};

	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_K2_MakePerlinNoiseVectorAndRemap_Z_ImplicitCast = CallFunc_K2_MakePerlinNoiseVectorAndRemap_Z_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_K2_MakePerlinNoiseVectorAndRemap_ReturnValue != nullptr)
		*CallFunc_K2_MakePerlinNoiseVectorAndRemap_ReturnValue = std::move(Parms.CallFunc_K2_MakePerlinNoiseVectorAndRemap_ReturnValue);

	if (CallFunc_K2_MakePerlinNoiseVectorAndRemap_X_ImplicitCast != nullptr)
		*CallFunc_K2_MakePerlinNoiseVectorAndRemap_X_ImplicitCast = Parms.CallFunc_K2_MakePerlinNoiseVectorAndRemap_X_ImplicitCast;

	if (CallFunc_K2_MakePerlinNoiseVectorAndRemap_Y_ImplicitCast != nullptr)
		*CallFunc_K2_MakePerlinNoiseVectorAndRemap_Y_ImplicitCast = Parms.CallFunc_K2_MakePerlinNoiseVectorAndRemap_Y_ImplicitCast;

	return Parms.ReturnValue;

}


// Function SK_Female_Hair_Afro_Long_AnimBP.SK_Female_Hair_Afro_Long_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void USK_Female_Hair_Afro_Long_AnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Female_Hair_Afro_Long_AnimBP_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_Female_Hair_Afro_Long_AnimBP.SK_Female_Hair_Afro_Long_AnimBP_C.ExecuteUbergraph_SK_Female_Hair_Afro_Long_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ConstParm, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)

void USK_Female_Hair_Afro_Long_AnimBP_C::ExecuteUbergraph_SK_Female_Hair_Afro_Long_AnimBP(int32* EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Female_Hair_Afro_Long_AnimBP_C", "ExecuteUbergraph_SK_Female_Hair_Afro_Long_AnimBP");

	Params::USK_Female_Hair_Afro_Long_AnimBP_C_ExecuteUbergraph_SK_Female_Hair_Afro_Long_AnimBP_Params Parms{};

	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

}

}


