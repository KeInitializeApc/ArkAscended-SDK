#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_Shield.PrimalItemArmor_Shield_C
// (None)

class UClass* UPrimalItemArmor_Shield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_Shield_C");

	return Clss;
}


// PrimalItemArmor_Shield_C PrimalItemArmor_Shield.Default__PrimalItemArmor_Shield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_Shield_C* UPrimalItemArmor_Shield_C::GetDefaultObj()
{
	static class UPrimalItemArmor_Shield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_Shield_C*>(UPrimalItemArmor_Shield_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItemArmor_Shield.PrimalItemArmor_Shield_C.BPClientHandleItemNetExecCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CommandName                                                      (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// struct FBPNetExecParams            ExecParams                                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// class AShooterPlayerController*    ForPC                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_SwitchName_CmpSuccess                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// float                              CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_Array_Get_Item_3                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              CallFunc_Array_Get_Item_4                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_Array_Get_Item_5                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_MakeVector_Z_ImplicitCast                               (BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_MakeVector_Y_ImplicitCast                               (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_MakeVector_X_ImplicitCast                               (Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_MakeVector_Z_ImplicitCast_1                             (BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_MakeVector_Y_ImplicitCast_1                             (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_MakeVector_X_ImplicitCast_1                             (Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)

double UPrimalItemArmor_Shield_C::BPClientHandleItemNetExecCommand(bool K2Node_SwitchName_CmpSuccess, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Shield_C", "BPClientHandleItemNetExecCommand");

	Params::UPrimalItemArmor_Shield_C_BPClientHandleItemNetExecCommand_Params Parms{};

	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_Shield.PrimalItemArmor_Shield_C.PlayHitShieldEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LocalOnly                                                        (BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, SubobjectReference)
// struct FVector                     HitLoc                                                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     FromLoc                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// TArray<float>                      K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// class UActorComponent*             CallFunc_GetAttachedComponent_ReturnValue                        (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UStaticMeshComponent*        K2Node_DynamicCast_AsStatic_Mesh_Component                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_GetClosestPointOnCollision_OutPointOnBody               (ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              CallFunc_GetClosestPointOnCollision_ReturnValue                  (ConstParm, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_GetAttachedComponentsNum_ReturnValue                    (BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              K2Node_MakeArray__3__ImplicitCast                                (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              K2Node_MakeArray__4__ImplicitCast                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              K2Node_MakeArray__5__ImplicitCast                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              K2Node_MakeArray__0__ImplicitCast                                (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              K2Node_MakeArray__1__ImplicitCast                                (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              K2Node_MakeArray__2__ImplicitCast                                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

float UPrimalItemArmor_Shield_C::PlayHitShieldEffect(bool LocalOnly, const struct FVector& FromLoc, bool* Temp_bool_Variable, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Shield_C", "PlayHitShieldEffect");

	Params::UPrimalItemArmor_Shield_C_PlayHitShieldEffect_Params Parms{};

	Parms.LocalOnly = LocalOnly;
	Parms.FromLoc = FromLoc;
	Parms.K2Node_MakeStruct_BPNetExecParams = K2Node_MakeStruct_BPNetExecParams;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_Shield.PrimalItemArmor_Shield_C.HandleShieldDamageBlocking
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           ForShooterCharacter                                              (ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DamageIn                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FDamageEvent                DamageEvent                                                      (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
// class AController*                 EventInstigator                                                  (BlueprintVisible, Net, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class AActor*                      DamageCauser                                                     (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     HitPoint                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UPrimalItemArmor_Shield_C::HandleShieldDamageBlocking(float* DamageIn, struct FDamageEvent* DamageEvent, struct FVector* HitPoint, float ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Shield_C", "HandleShieldDamageBlocking");

	Params::UPrimalItemArmor_Shield_C_HandleShieldDamageBlocking_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageIn != nullptr)
		*DamageIn = Parms.DamageIn;

	if (DamageEvent != nullptr)
		*DamageEvent = std::move(Parms.DamageEvent);

	if (HitPoint != nullptr)
		*HitPoint = std::move(Parms.HitPoint);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	return Parms.ReturnValue;

}

}


