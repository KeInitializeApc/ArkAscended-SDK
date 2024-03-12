#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Female_Hair_Ponytail_Long_AnimBP.Female_Hair_Ponytail_Long_AnimBP_C
// (None)

class UClass* UFemale_Hair_Ponytail_Long_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Female_Hair_Ponytail_Long_AnimBP_C");

	return Clss;
}


// Female_Hair_Ponytail_Long_AnimBP_C Female_Hair_Ponytail_Long_AnimBP.Default__Female_Hair_Ponytail_Long_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFemale_Hair_Ponytail_Long_AnimBP_C* UFemale_Hair_Ponytail_Long_AnimBP_C::GetDefaultObj()
{
	static class UFemale_Hair_Ponytail_Long_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFemale_Hair_Ponytail_Long_AnimBP_C*>(UFemale_Hair_Ponytail_Long_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Female_Hair_Ponytail_Long_AnimBP.Female_Hair_Ponytail_Long_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Edit, Net, Transient, EditConst)

void UFemale_Hair_Ponytail_Long_AnimBP_C::AnimGraph(const struct FPoseLink& AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Female_Hair_Ponytail_Long_AnimBP_C", "AnimGraph");

	Params::UFemale_Hair_Ponytail_Long_AnimBP_C_AnimGraph_Params Parms{};

	Parms.AnimGraph = AnimGraph;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Female_Hair_Ponytail_Long_AnimBP.Female_Hair_Ponytail_Long_AnimBP_C.NoiseGen
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

float UFemale_Hair_Ponytail_Long_AnimBP_C::NoiseGen(double CallFunc_Multiply_DoubleFloat_ReturnValue, struct FVector* CallFunc_K2_MakePerlinNoiseVectorAndRemap_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, float* CallFunc_K2_MakePerlinNoiseVectorAndRemap_X_ImplicitCast, float* CallFunc_K2_MakePerlinNoiseVectorAndRemap_Y_ImplicitCast, float CallFunc_K2_MakePerlinNoiseVectorAndRemap_Z_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Female_Hair_Ponytail_Long_AnimBP_C", "NoiseGen");

	Params::UFemale_Hair_Ponytail_Long_AnimBP_C_NoiseGen_Params Parms{};

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


// Function Female_Hair_Ponytail_Long_AnimBP.Female_Hair_Ponytail_Long_AnimBP_C.BlueprintThreadSafeUpdateAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_CalculateWind_Wind                                      (BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (Edit, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_SelectVector_ReturnValue_1                              (Edit, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_NoiseGen_DeltaTime_ImplicitCast                         (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             CallFunc_CalculateWind_GlobalWindIntensity_ImplicitCast          (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FVector UFemale_Hair_Ponytail_Long_AnimBP_C::BlueprintThreadSafeUpdateAnimation(struct FVector* CallFunc_CalculateWind_Wind, double CallFunc_NoiseGen_DeltaTime_ImplicitCast, double* CallFunc_CalculateWind_GlobalWindIntensity_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Female_Hair_Ponytail_Long_AnimBP_C", "BlueprintThreadSafeUpdateAnimation");

	Params::UFemale_Hair_Ponytail_Long_AnimBP_C_BlueprintThreadSafeUpdateAnimation_Params Parms{};

	Parms.CallFunc_NoiseGen_DeltaTime_ImplicitCast = CallFunc_NoiseGen_DeltaTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_CalculateWind_Wind != nullptr)
		*CallFunc_CalculateWind_Wind = std::move(Parms.CallFunc_CalculateWind_Wind);

	if (CallFunc_CalculateWind_GlobalWindIntensity_ImplicitCast != nullptr)
		*CallFunc_CalculateWind_GlobalWindIntensity_ImplicitCast = Parms.CallFunc_CalculateWind_GlobalWindIntensity_ImplicitCast;

	return Parms.ReturnValue;

}


// Function Female_Hair_Ponytail_Long_AnimBP.Female_Hair_Ponytail_Long_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UFemale_Hair_Ponytail_Long_AnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Female_Hair_Ponytail_Long_AnimBP_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Female_Hair_Ponytail_Long_AnimBP.Female_Hair_Ponytail_Long_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UFemale_Hair_Ponytail_Long_AnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Female_Hair_Ponytail_Long_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UFemale_Hair_Ponytail_Long_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DeltaTimeX != nullptr)
		*DeltaTimeX = Parms.DeltaTimeX;

}


// Function Female_Hair_Ponytail_Long_AnimBP.Female_Hair_Ponytail_Long_AnimBP_C.ExecuteUbergraph_Female_Hair_Ponytail_Long_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// float                              K2Node_Event_DeltaTimeX                                          (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ConstParm, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue                     (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetScalarParameterValue_ReturnValue                     (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_MakeVector_X_ImplicitCast                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MakeVector_Y_ImplicitCast                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnInstance, SubobjectReference)

class FName UFemale_Hair_Ponytail_Long_AnimBP_C::ExecuteUbergraph_Female_Hair_Ponytail_Long_AnimBP(int32* EntryPoint, float* K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, struct FLinearColor* CallFunc_GetVectorParameterValue_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float* CallFunc_GetScalarParameterValue_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, double CallFunc_MakeVector_X_ImplicitCast, double CallFunc_MakeVector_Y_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Female_Hair_Ponytail_Long_AnimBP_C", "ExecuteUbergraph_Female_Hair_Ponytail_Long_AnimBP");

	Params::UFemale_Hair_Ponytail_Long_AnimBP_C_ExecuteUbergraph_Female_Hair_Ponytail_Long_AnimBP_Params Parms{};

	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_MakeVector_X_ImplicitCast = CallFunc_MakeVector_X_ImplicitCast;
	Parms.CallFunc_MakeVector_Y_ImplicitCast = CallFunc_MakeVector_Y_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_Event_DeltaTimeX != nullptr)
		*K2Node_Event_DeltaTimeX = Parms.K2Node_Event_DeltaTimeX;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetVectorParameterValue_ReturnValue != nullptr)
		*CallFunc_GetVectorParameterValue_ReturnValue = std::move(Parms.CallFunc_GetVectorParameterValue_ReturnValue);

	if (CallFunc_GetScalarParameterValue_ReturnValue != nullptr)
		*CallFunc_GetScalarParameterValue_ReturnValue = Parms.CallFunc_GetScalarParameterValue_ReturnValue;

	return Parms.ReturnValue;

}

}


