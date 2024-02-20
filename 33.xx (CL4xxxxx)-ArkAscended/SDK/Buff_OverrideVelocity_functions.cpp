#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_OverrideVelocity.Buff_OverrideVelocity_C
// (Actor)

class UClass* ABuff_OverrideVelocity_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_OverrideVelocity_C");

	return Clss;
}


// Buff_OverrideVelocity_C Buff_OverrideVelocity.Default__Buff_OverrideVelocity_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_OverrideVelocity_C* ABuff_OverrideVelocity_C::GetDefaultObj()
{
	static class ABuff_OverrideVelocity_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_OverrideVelocity_C*>(ABuff_OverrideVelocity_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Buff_OverrideVelocity.Buff_OverrideVelocity_C.BPDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool ABuff_OverrideVelocity_C::BPDeactivated(class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_OverrideVelocity_C", "BPDeactivated");

	Params::ABuff_OverrideVelocity_C_BPDeactivated_Params Parms{};

	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_OverrideVelocity.Buff_OverrideVelocity_C.BPOverrideCharacterNewFallVelocity
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     InitialVelocity                                                  (ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     Gravity                                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// float                              DeltaTime                                                        (BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_VectorVector_ReturnValue                       (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_NewFallVelocity_ReturnValue                             (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_BPPointPlaneProject_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_VectorFloat_B_ImplicitCast                     (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)

bool ABuff_OverrideVelocity_C::BPOverrideCharacterNewFallVelocity(const struct FVector& Gravity, const struct FVector& ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue_1, double* CallFunc_Dot_VectorVector_ReturnValue, double* CallFunc_Multiply_VectorFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_OverrideVelocity_C", "BPOverrideCharacterNewFallVelocity");

	Params::ABuff_OverrideVelocity_C_BPOverrideCharacterNewFallVelocity_Params Parms{};

	Parms.Gravity = Gravity;
	Parms.ReturnValue = ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Multiply_VectorFloat_ReturnValue != nullptr)
		*CallFunc_Multiply_VectorFloat_ReturnValue = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue);

	if (CallFunc_Multiply_VectorFloat_ReturnValue_1 != nullptr)
		*CallFunc_Multiply_VectorFloat_ReturnValue_1 = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1);

	if (CallFunc_Dot_VectorVector_ReturnValue != nullptr)
		*CallFunc_Dot_VectorVector_ReturnValue = Parms.CallFunc_Dot_VectorVector_ReturnValue;

	if (CallFunc_Multiply_VectorFloat_B_ImplicitCast != nullptr)
		*CallFunc_Multiply_VectorFloat_B_ImplicitCast = Parms.CallFunc_Multiply_VectorFloat_B_ImplicitCast;

	return Parms.ReturnValue;

}

}


