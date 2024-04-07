#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HairWindFunctions.HairWindFunctions_C
// (None)

class UClass* UHairWindFunctions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HairWindFunctions_C");

	return Clss;
}


// HairWindFunctions_C HairWindFunctions.Default__HairWindFunctions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHairWindFunctions_C* UHairWindFunctions_C::GetDefaultObj()
{
	static class UHairWindFunctions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHairWindFunctions_C*>(UHairWindFunctions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HairWindFunctions.HairWindFunctions_C.CalculateWind
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             PlayerSpeed                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// double                             WindFrequency                                                    (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             GameSeconds                                                      (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// double                             WindAmount                                                       (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     GlobalWindDirection                                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             GlobalWindIntensity                                              (ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             MinWindFrequency                                                 (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// double                             MaxWindFrequency                                                 (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// double                             MinWindIntensity                                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// double                             MinRainyIntensity                                                (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// double                             MaxRainyIntensity                                                (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     Wind                                                             (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     WindZ                                                            (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// double                             WindFreq                                                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// double                             WindAlpha                                                        (ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Sin_ReturnValue                                         (ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_2                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Sin_ReturnValue_1                                       (ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_MapRangeClamped_ReturnValue_3                           (ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// struct FVector                     CallFunc_VLerp_ReturnValue_1                                     (ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_MapRangeClamped_ReturnValue_4                           (ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1                   (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_VLerp_Alpha_ImplicitCast                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// float                              CallFunc_VLerp_Alpha_ImplicitCast_1                              (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference, Interp)

float UHairWindFunctions_C::CalculateWind(double* PlayerSpeed, double* WindFrequency, double* GameSeconds, double* WindAmount, const struct FVector& GlobalWindDirection, double GlobalWindIntensity, double* MinWindFrequency, double* MaxWindFrequency, double* MinWindIntensity, double* MinRainyIntensity, double* MaxRainyIntensity, class UObject* __WorldContext, struct FVector* Wind, struct FVector* WindZ, double* WindFreq, double* WindAlpha, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, double* CallFunc_Sin_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue_2, double* CallFunc_Sin_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HairWindFunctions_C", "CalculateWind");

	Params::UHairWindFunctions_C_CalculateWind_Params Parms{};

	Parms.GlobalWindDirection = GlobalWindDirection;
	Parms.GlobalWindIntensity = GlobalWindIntensity;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_2 = CallFunc_Multiply_DoubleFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerSpeed != nullptr)
		*PlayerSpeed = Parms.PlayerSpeed;

	if (WindFrequency != nullptr)
		*WindFrequency = Parms.WindFrequency;

	if (GameSeconds != nullptr)
		*GameSeconds = Parms.GameSeconds;

	if (WindAmount != nullptr)
		*WindAmount = Parms.WindAmount;

	if (MinWindFrequency != nullptr)
		*MinWindFrequency = Parms.MinWindFrequency;

	if (MaxWindFrequency != nullptr)
		*MaxWindFrequency = Parms.MaxWindFrequency;

	if (MinWindIntensity != nullptr)
		*MinWindIntensity = Parms.MinWindIntensity;

	if (MinRainyIntensity != nullptr)
		*MinRainyIntensity = Parms.MinRainyIntensity;

	if (MaxRainyIntensity != nullptr)
		*MaxRainyIntensity = Parms.MaxRainyIntensity;

	if (Wind != nullptr)
		*Wind = std::move(Parms.Wind);

	if (WindZ != nullptr)
		*WindZ = std::move(Parms.WindZ);

	if (WindFreq != nullptr)
		*WindFreq = Parms.WindFreq;

	if (WindAlpha != nullptr)
		*WindAlpha = Parms.WindAlpha;

	if (CallFunc_Sin_ReturnValue != nullptr)
		*CallFunc_Sin_ReturnValue = Parms.CallFunc_Sin_ReturnValue;

	if (CallFunc_Sin_ReturnValue_1 != nullptr)
		*CallFunc_Sin_ReturnValue_1 = Parms.CallFunc_Sin_ReturnValue_1;

	if (CallFunc_Multiply_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Multiply_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast;

	if (CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1 != nullptr)
		*CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1 = Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1;

	return Parms.ReturnValue;

}

}


