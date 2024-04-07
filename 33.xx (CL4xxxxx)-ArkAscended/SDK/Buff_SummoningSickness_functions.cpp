#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_SummoningSickness.Buff_SummoningSickness_C
// (Actor)

class UClass* ABuff_SummoningSickness_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_SummoningSickness_C");

	return Clss;
}


// Buff_SummoningSickness_C Buff_SummoningSickness.Default__Buff_SummoningSickness_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_SummoningSickness_C* ABuff_SummoningSickness_C::GetDefaultObj()
{
	static class ABuff_SummoningSickness_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_SummoningSickness_C*>(ABuff_SummoningSickness_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Buff_SummoningSickness.Buff_SummoningSickness_C.DrawBuffFloatingHUD
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BuffIndex                                                        (ConstParm, BlueprintVisible, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
// class AShooterHUD*                 HUD                                                              (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
// float                              CenterX                                                          (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CenterY                                                          (ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DrawScale                                                        (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               Showextendedhud                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// float                              CallFunc_TimeSince_ReturnValue                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BPDrawTextCentered_ReturnValue                          (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast                          (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BPDrawTextCentered_Y_ImplicitCast                       (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)

float ABuff_SummoningSickness_C::DrawBuffFloatingHUD(int32* BuffIndex, float* DrawScale, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess, double CallFunc_SelectFloat_ReturnValue, float* CallFunc_BPDrawTextCentered_ReturnValue, double* CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, float CallFunc_BPDrawTextCentered_Y_ImplicitCast, double* CallFunc_LessEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_SummoningSickness_C", "DrawBuffFloatingHUD");

	Params::ABuff_SummoningSickness_C_DrawBuffFloatingHUD_Params Parms{};

	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast = CallFunc_Multiply_DoubleFloat_A_ImplicitCast;
	Parms.CallFunc_BPDrawTextCentered_Y_ImplicitCast = CallFunc_BPDrawTextCentered_Y_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (BuffIndex != nullptr)
		*BuffIndex = Parms.BuffIndex;

	if (DrawScale != nullptr)
		*DrawScale = Parms.DrawScale;

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	if (K2Node_DynamicCast_AsShooter_Player_Controller != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller = Parms.K2Node_DynamicCast_AsShooter_Player_Controller;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_BPDrawTextCentered_ReturnValue != nullptr)
		*CallFunc_BPDrawTextCentered_ReturnValue = Parms.CallFunc_BPDrawTextCentered_ReturnValue;

	if (CallFunc_Add_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Add_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast;

	if (CallFunc_LessEqual_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;

	return Parms.ReturnValue;

}


// Function Buff_SummoningSickness.Buff_SummoningSickness_C.BPPreventAddingOtherBuff
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      AnotherBuffClass                                                 (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TSoftClassPtr<class UObject>       Buff_Freeze                                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, InstancedReference)
// TSoftClassPtr<class UObject>       Buff_Encapsulate                                                 (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TSoftClassPtr<class UObject>       Buff_FrozenIceKaiju                                              (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TSoftClassPtr<class APrimalBuff>   CallFunc_Conv_ClassToSoftClassReference_ReturnValue              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_SoftClassReference_ReturnValue               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_SoftClassReference_ReturnValue_1             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_SoftClassReference_ReturnValue_2             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)

bool ABuff_SummoningSickness_C::BPPreventAddingOtherBuff(class UClass** AnotherBuffClass, TSoftClassPtr<class UObject>* Buff_Encapsulate, TSoftClassPtr<class UObject>* Buff_FrozenIceKaiju, bool* CallFunc_EqualEqual_SoftClassReference_ReturnValue, bool* CallFunc_EqualEqual_SoftClassReference_ReturnValue_1, bool* CallFunc_EqualEqual_SoftClassReference_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_SummoningSickness_C", "BPPreventAddingOtherBuff");

	Params::ABuff_SummoningSickness_C_BPPreventAddingOtherBuff_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnotherBuffClass != nullptr)
		*AnotherBuffClass = Parms.AnotherBuffClass;

	if (Buff_Encapsulate != nullptr)
		*Buff_Encapsulate = Parms.Buff_Encapsulate;

	if (Buff_FrozenIceKaiju != nullptr)
		*Buff_FrozenIceKaiju = Parms.Buff_FrozenIceKaiju;

	if (CallFunc_EqualEqual_SoftClassReference_ReturnValue != nullptr)
		*CallFunc_EqualEqual_SoftClassReference_ReturnValue = Parms.CallFunc_EqualEqual_SoftClassReference_ReturnValue;

	if (CallFunc_EqualEqual_SoftClassReference_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_SoftClassReference_ReturnValue_1 = Parms.CallFunc_EqualEqual_SoftClassReference_ReturnValue_1;

	if (CallFunc_EqualEqual_SoftClassReference_ReturnValue_2 != nullptr)
		*CallFunc_EqualEqual_SoftClassReference_ReturnValue_2 = Parms.CallFunc_EqualEqual_SoftClassReference_ReturnValue_2;

	return Parms.ReturnValue;

}


// Function Buff_SummoningSickness.Buff_SummoningSickness_C.BPPreSetupForInstigator
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class UDinoCharacterStatusComponent_BP_TorpidityControl_C*K2Node_DynamicCast_AsDino_Character_Status_Component_BP_Torpidity_Control(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// class UDinoCharacterStatusComponent_BP_TorpidityControl_C*K2Node_DynamicCast_AsDino_Character_Status_Component_BP_Torpidity_Control_1(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_ModifyCurrentStatusValue_ReturnValue                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, EditConst, SubobjectReference)

class UDinoCharacterStatusComponent_BP_TorpidityControl_C* ABuff_SummoningSickness_C::BPPreSetupForInstigator(class AActor** ForInstigator, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1, bool* K2Node_DynamicCast_bSuccess_2, float* CallFunc_ModifyCurrentStatusValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_SummoningSickness_C", "BPPreSetupForInstigator");

	Params::ABuff_SummoningSickness_C_BPPreSetupForInstigator_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ForInstigator != nullptr)
		*ForInstigator = Parms.ForInstigator;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_ModifyCurrentStatusValue_ReturnValue != nullptr)
		*CallFunc_ModifyCurrentStatusValue_ReturnValue = Parms.CallFunc_ModifyCurrentStatusValue_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_SummoningSickness.Buff_SummoningSickness_C.BuffAdjustDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, ExportObject, Transient, Config, EditConst, SubobjectReference)
// class AController*                 EventInstigator                                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, SubobjectReference)
// class AActor*                      TheDamageCauser                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UClass*                      TheDamgeType                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

float ABuff_SummoningSickness_C::BuffAdjustDamage(const struct FHitResult& HitInfo, class AController** EventInstigator, class AActor* TheDamageCauser, class UClass* TheDamgeType, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_SummoningSickness_C", "BuffAdjustDamage");

	Params::ABuff_SummoningSickness_C_BuffAdjustDamage_Params Parms{};

	Parms.HitInfo = HitInfo;
	Parms.TheDamageCauser = TheDamageCauser;
	Parms.TheDamgeType = TheDamgeType;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (EventInstigator != nullptr)
		*EventInstigator = Parms.EventInstigator;

	return Parms.ReturnValue;

}

}


