#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_Stunned.Buff_Stunned_C
// (Actor)

class UClass* ABuff_Stunned_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_Stunned_C");

	return Clss;
}


// Buff_Stunned_C Buff_Stunned.Default__Buff_Stunned_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_Stunned_C* ABuff_Stunned_C::GetDefaultObj()
{
	static class ABuff_Stunned_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_Stunned_C*>(ABuff_Stunned_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Buff_Stunned.Buff_Stunned_C.BPCustomAllowAddBuff
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APrimalCharacter*            ForCharacter                                                     (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// class AActor*                      DamageCauser                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               LOCAL_RetVal                                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_BPCustomAllowAddBuff_ReturnValue                        (BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)

bool ABuff_Stunned_C::BPCustomAllowAddBuff(class APrimalCharacter** ForCharacter, class AActor* DamageCauser, double* CallFunc_LessEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_Stunned_C", "BPCustomAllowAddBuff");

	Params::ABuff_Stunned_C_BPCustomAllowAddBuff_Params Parms{};

	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

	if (ForCharacter != nullptr)
		*ForCharacter = Parms.ForCharacter;

	if (CallFunc_LessEqual_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;

	return Parms.ReturnValue;

}


// Function Buff_Stunned.Buff_Stunned_C.BPCheckPreventInput
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPrimalCharacterInputTypeInputType                                                        (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool ABuff_Stunned_C::BPCheckPreventInput(enum class EPrimalCharacterInputType* InputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_Stunned_C", "BPCheckPreventInput");

	Params::ABuff_Stunned_C_BPCheckPreventInput_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InputType != nullptr)
		*InputType = Parms.InputType;

	return Parms.ReturnValue;

}


// Function Buff_Stunned.Buff_Stunned_C.BPDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)

void ABuff_Stunned_C::BPDeactivated(class AActor** ForInstigator, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_Stunned_C", "BPDeactivated");

	Params::ABuff_Stunned_C_BPDeactivated_Params Parms{};

	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (ForInstigator != nullptr)
		*ForInstigator = Parms.ForInstigator;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

}


// Function Buff_Stunned.Buff_Stunned_C.BPSetupForInstigator
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UAnimMontage*                K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_PlayAnimEx_ReturnValue                                  (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

float ABuff_Stunned_C::BPSetupForInstigator(class AActor** ForInstigator, bool Temp_bool_Variable, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, class UAnimMontage* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_Stunned_C", "BPSetupForInstigator");

	Params::ABuff_Stunned_C_BPSetupForInstigator_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (ForInstigator != nullptr)
		*ForInstigator = Parms.ForInstigator;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}

}


