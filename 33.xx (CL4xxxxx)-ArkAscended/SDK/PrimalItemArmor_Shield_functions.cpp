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
// class FName                        CommandName                                                      (Edit, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// struct FBPNetExecParams            ExecParams                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// class AShooterPlayerController*    ForPC                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// bool                               K2Node_SwitchName_CmpSuccess                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// float                              CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// float                              CallFunc_Array_Get_Item_2                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_Array_Get_Item_3                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Array_Get_Item_4                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_Array_Get_Item_5                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_MakeVector_Z_ImplicitCast                               (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MakeVector_Y_ImplicitCast                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MakeVector_X_ImplicitCast                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MakeVector_Z_ImplicitCast_1                             (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_MakeVector_Y_ImplicitCast_1                             (Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_MakeVector_X_ImplicitCast_1                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference, Interp)

int32 UPrimalItemArmor_Shield_C::BPClientHandleItemNetExecCommand(class FName* CommandName, struct FBPNetExecParams* ExecParams, class AShooterPlayerController** ForPC, float CallFunc_Array_Get_Item, bool* CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Array_Get_Item_1, float CallFunc_Array_Get_Item_2, float CallFunc_Array_Get_Item_3, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Array_Get_Item_4, float CallFunc_Array_Get_Item_5, const struct FVector& CallFunc_MakeVector_ReturnValue_1, double CallFunc_MakeVector_Z_ImplicitCast, double CallFunc_MakeVector_Y_ImplicitCast, double CallFunc_MakeVector_X_ImplicitCast, double CallFunc_MakeVector_Z_ImplicitCast_1, double CallFunc_MakeVector_Y_ImplicitCast_1, double CallFunc_MakeVector_X_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Shield_C", "BPClientHandleItemNetExecCommand");

	Params::UPrimalItemArmor_Shield_C_BPClientHandleItemNetExecCommand_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_MakeVector_Z_ImplicitCast = CallFunc_MakeVector_Z_ImplicitCast;
	Parms.CallFunc_MakeVector_Y_ImplicitCast = CallFunc_MakeVector_Y_ImplicitCast;
	Parms.CallFunc_MakeVector_X_ImplicitCast = CallFunc_MakeVector_X_ImplicitCast;
	Parms.CallFunc_MakeVector_Z_ImplicitCast_1 = CallFunc_MakeVector_Z_ImplicitCast_1;
	Parms.CallFunc_MakeVector_Y_ImplicitCast_1 = CallFunc_MakeVector_Y_ImplicitCast_1;
	Parms.CallFunc_MakeVector_X_ImplicitCast_1 = CallFunc_MakeVector_X_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CommandName != nullptr)
		*CommandName = Parms.CommandName;

	if (ExecParams != nullptr)
		*ExecParams = std::move(Parms.ExecParams);

	if (ForPC != nullptr)
		*ForPC = Parms.ForPC;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_Shield.PrimalItemArmor_Shield_C.PlayHitShieldEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LocalOnly                                                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
// struct FVector                     HitLoc                                                           (Edit, ExportObject, Net, Parm, DisableEditOnInstance, SubobjectReference)
// struct FVector                     FromLoc                                                          (ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X_1                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// TArray<float>                      K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UActorComponent*             CallFunc_GetAttachedComponent_ReturnValue                        (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UStaticMeshComponent*        K2Node_DynamicCast_AsStatic_Mesh_Component                       (Edit, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_GetClosestPointOnCollision_OutPointOnBody               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_GetClosestPointOnCollision_ReturnValue                  (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetAttachedComponentsNum_ReturnValue                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (Parm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_IsServer_ReturnValue                                    (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// float                              K2Node_MakeArray__3__ImplicitCast                                (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_MakeArray__4__ImplicitCast                                (Edit, ConstParm, ExportObject, OutParm, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_MakeArray__5__ImplicitCast                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_MakeArray__0__ImplicitCast                                (Edit, ConstParm, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_MakeArray__1__ImplicitCast                                (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_MakeArray__2__ImplicitCast                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

bool UPrimalItemArmor_Shield_C::PlayHitShieldEffect(bool* LocalOnly, const struct FVector& HitLoc, const struct FVector& FromLoc, bool Temp_bool_Variable, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, TArray<float>* K2Node_MakeArray_Array, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, int32* Temp_int_Variable, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, float K2Node_MakeArray__3__ImplicitCast, float* K2Node_MakeArray__4__ImplicitCast, float* K2Node_MakeArray__5__ImplicitCast, float K2Node_MakeArray__0__ImplicitCast, float K2Node_MakeArray__1__ImplicitCast, float K2Node_MakeArray__2__ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Shield_C", "PlayHitShieldEffect");

	Params::UPrimalItemArmor_Shield_C_PlayHitShieldEffect_Params Parms{};

	Parms.HitLoc = HitLoc;
	Parms.FromLoc = FromLoc;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.K2Node_DynamicCast_AsStatic_Mesh_Component = K2Node_DynamicCast_AsStatic_Mesh_Component;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_MakeArray__3__ImplicitCast = K2Node_MakeArray__3__ImplicitCast;
	Parms.K2Node_MakeArray__0__ImplicitCast = K2Node_MakeArray__0__ImplicitCast;
	Parms.K2Node_MakeArray__1__ImplicitCast = K2Node_MakeArray__1__ImplicitCast;
	Parms.K2Node_MakeArray__2__ImplicitCast = K2Node_MakeArray__2__ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (LocalOnly != nullptr)
		*LocalOnly = Parms.LocalOnly;

	if (CallFunc_Subtract_VectorVector_ReturnValue != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (K2Node_MakeStruct_BPNetExecParams != nullptr)
		*K2Node_MakeStruct_BPNetExecParams = std::move(Parms.K2Node_MakeStruct_BPNetExecParams);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_MakeArray__4__ImplicitCast != nullptr)
		*K2Node_MakeArray__4__ImplicitCast = Parms.K2Node_MakeArray__4__ImplicitCast;

	if (K2Node_MakeArray__5__ImplicitCast != nullptr)
		*K2Node_MakeArray__5__ImplicitCast = Parms.K2Node_MakeArray__5__ImplicitCast;

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_Shield.PrimalItemArmor_Shield_C.HandleShieldDamageBlocking
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           ForShooterCharacter                                              (ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DamageIn                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FDamageEvent                DamageEvent                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst)
// class AController*                 EventInstigator                                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, SubobjectReference)
// class AActor*                      DamageCauser                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     HitPoint                                                         (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (Edit, ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UPrimalItemArmor_Shield_C::HandleShieldDamageBlocking(struct FDamageEvent* DamageEvent, class AController** EventInstigator, class AActor* DamageCauser, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Shield_C", "HandleShieldDamageBlocking");

	Params::UPrimalItemArmor_Shield_C_HandleShieldDamageBlocking_Params Parms{};

	Parms.DamageCauser = DamageCauser;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageEvent != nullptr)
		*DamageEvent = std::move(Parms.DamageEvent);

	if (EventInstigator != nullptr)
		*EventInstigator = Parms.EventInstigator;

	return Parms.ReturnValue;

}

}


