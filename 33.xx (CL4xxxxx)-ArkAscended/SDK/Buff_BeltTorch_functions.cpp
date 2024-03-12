#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_BeltTorch.Buff_BeltTorch_C
// (Actor)

class UClass* ABuff_BeltTorch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_BeltTorch_C");

	return Clss;
}


// Buff_BeltTorch_C Buff_BeltTorch.Default__Buff_BeltTorch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_BeltTorch_C* ABuff_BeltTorch_C::GetDefaultObj()
{
	static class ABuff_BeltTorch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_BeltTorch_C*>(ABuff_BeltTorch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Buff_BeltTorch.Buff_BeltTorch_C.ActivateVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsLocallyControlledByPlayer_ReturnValue                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (BlueprintVisible, Net, Config, DisableEditOnInstance, SubobjectReference)

void ABuff_BeltTorch_C::ActivateVFX(class APawn* CallFunc_GetInstigator_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsLocallyControlledByPlayer_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "ActivateVFX");

	Params::ABuff_BeltTorch_C_ActivateVFX_Params Parms{};

	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_IsLocallyControlledByPlayer_ReturnValue != nullptr)
		*CallFunc_IsLocallyControlledByPlayer_ReturnValue = Parms.CallFunc_IsLocallyControlledByPlayer_ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FPV                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetActorEyesViewPoint_OutLocation                       (ExportObject, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_GetActorEyesViewPoint_OutRotation                       (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (ExportObject, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)

struct FVector ABuff_BeltTorch_C::UpdateTorchType(bool* FPV, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, struct FVector* CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, struct FHitResult* CallFunc_K2_SetWorldTransform_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "UpdateTorchType");

	Params::ABuff_BeltTorch_C_UpdateTorchType_Params Parms{};

	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_GetActorEyesViewPoint_OutLocation = CallFunc_GetActorEyesViewPoint_OutLocation;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FPV != nullptr)
		*FPV = Parms.FPV;

	if (CallFunc_GreaterGreater_VectorRotator_ReturnValue != nullptr)
		*CallFunc_GreaterGreater_VectorRotator_ReturnValue = std::move(Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue);

	if (CallFunc_K2_SetWorldTransform_SweepHitResult != nullptr)
		*CallFunc_K2_SetWorldTransform_SweepHitResult = std::move(Parms.CallFunc_K2_SetWorldTransform_SweepHitResult);

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.BPTryMultiUse
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           ForPC                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// int32                              UseIndex                                                         (Edit, ConstParm, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ABuff_BeltTorch_C::BPTryMultiUse(class APlayerController** ForPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "BPTryMultiUse");

	Params::ABuff_BeltTorch_C_BPTryMultiUse_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ForPC != nullptr)
		*ForPC = Parms.ForPC;

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.BPGetMultiUseEntries
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           ForPC                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// TArray<struct FMultiUseEntry>      MultiUseEntries                                                  (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// TArray<struct FMultiUseEntry>      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FMultiUseEntry> ABuff_BeltTorch_C::BPGetMultiUseEntries(class APlayerController** ForPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "BPGetMultiUseEntries");

	Params::ABuff_BeltTorch_C_BPGetMultiUseEntries_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ForPC != nullptr)
		*ForPC = Parms.ForPC;

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchFromItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 TheItem                                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UClass*                      WeaponClassOverride                                              (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (Edit, ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// class AShooterWeapon_Melee*        K2Node_DynamicCast_AsShooter_Weapon_Melee                        (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsValidClass_ReturnValue                                (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UPrimalItem_WeaponTorch_C*   K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch                    (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetFlameColorIndex_Index                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsShooter_Weapon                         (Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool ABuff_BeltTorch_C::InitializeTorchFromItem(class UClass* WeaponClassOverride, bool CallFunc_NotEqual_ClassClass_ReturnValue, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, class AShooterWeapon_Melee** K2Node_DynamicCast_AsShooter_Weapon_Melee, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, bool* CallFunc_IsValidSoftClassReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "InitializeTorchFromItem");

	Params::ABuff_BeltTorch_C_InitializeTorchFromItem_Params Parms{};

	Parms.WeaponClassOverride = WeaponClassOverride;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetClassDefaultObject_ReturnValue != nullptr)
		*CallFunc_GetClassDefaultObject_ReturnValue = Parms.CallFunc_GetClassDefaultObject_ReturnValue;

	if (K2Node_DynamicCast_AsShooter_Weapon_Melee != nullptr)
		*K2Node_DynamicCast_AsShooter_Weapon_Melee = Parms.K2Node_DynamicCast_AsShooter_Weapon_Melee;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_IsValidSoftClassReference_ReturnValue != nullptr)
		*CallFunc_IsValidSoftClassReference_ReturnValue = Parms.CallFunc_IsValidSoftClassReference_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.SetFlameColorIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TheIndex                                                         (BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool ABuff_BeltTorch_C::SetFlameColorIndex(bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "SetFlameColorIndex");

	Params::ABuff_BeltTorch_C_SetFlameColorIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchFlameColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    TheMIC                                                           (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_LinearColorLinearColor_ReturnValue             (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)

bool ABuff_BeltTorch_C::UpdateTorchFlameColor(struct FLinearColor* K2Node_MakeStruct_LinearColor, bool* CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "UpdateTorchFlameColor");

	Params::ABuff_BeltTorch_C_UpdateTorchFlameColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_MakeStruct_LinearColor != nullptr)
		*K2Node_MakeStruct_LinearColor = std::move(Parms.K2Node_MakeStruct_LinearColor);

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchFlameColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                TheColor                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class UMaterialInstanceDynamic*    TheMIC                                                           (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

bool ABuff_BeltTorch_C::SetTorchFlameColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "SetTorchFlameColor");

	Params::ABuff_BeltTorch_C_SetTorchFlameColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeAssociatedWeaponClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      WeaponClass                                                      (Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool ABuff_BeltTorch_C::InitializeAssociatedWeaponClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "InitializeAssociatedWeaponClass");

	Params::ABuff_BeltTorch_C_InitializeAssociatedWeaponClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.Update All Torch Colors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FLinearColor                CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool ABuff_BeltTorch_C::Update_All_Torch_Colors(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FLinearColor& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "Update All Torch Colors");

	Params::ABuff_BeltTorch_C_Update_All_Torch_Colors_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchColorsArray
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 ForPrimalItem                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FLinearColor                CallFunc_GetItemCustomColor_outColor                             (BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetItemCustomColor_ReturnValue                          (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimalItem_WeaponTorch_C*   K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch                    (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_GetFlameColorIndex_Index                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FLinearColor                CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_LinearColorLinearColor_ReturnValue             (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)

bool ABuff_BeltTorch_C::UpdateTorchColorsArray(int32* Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, struct FLinearColor* K2Node_MakeStruct_LinearColor, bool* K2Node_DynamicCast_bSuccess, const struct FLinearColor& CallFunc_Array_Get_Item, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "UpdateTorchColorsArray");

	Params::ABuff_BeltTorch_C_UpdateTorchColorsArray_Params Parms{};

	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (K2Node_MakeStruct_LinearColor != nullptr)
		*K2Node_MakeStruct_LinearColor = std::move(Parms.K2Node_MakeStruct_LinearColor);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchColorByIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                TheColor                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              TheColorIndex                                                    (Edit, ConstParm, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UMaterialInstanceDynamic*    TheMIC                                                           (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_InRange_IntInt_ReturnValue                              (ConstParm, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (Edit, ConstParm, ExportObject, Net, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UMaterialInterface*          CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (Edit, BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_LinearColorLinearColor_ReturnValue             (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// class UPrimalItem_WeaponTorch_C*   K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch                    (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)

class UPrimalItem_WeaponTorch_C* ABuff_BeltTorch_C::SetTorchColorByIndex(int32 TheColorIndex, bool CallFunc_InRange_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool* K2Node_DynamicCast_bSuccess, struct FLinearColor* K2Node_MakeStruct_LinearColor, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, bool* K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "SetTorchColorByIndex");

	Params::ABuff_BeltTorch_C_SetTorchColorByIndex_Params Parms{};

	Parms.TheColorIndex = TheColorIndex;
	Parms.CallFunc_InRange_IntInt_ReturnValue = CallFunc_InRange_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_MakeStruct_LinearColor != nullptr)
		*K2Node_MakeStruct_LinearColor = std::move(Parms.K2Node_MakeStruct_LinearColor);

	if (CallFunc_GetClassDefaultObject_ReturnValue != nullptr)
		*CallFunc_GetClassDefaultObject_ReturnValue = Parms.CallFunc_GetClassDefaultObject_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.ApplyMeshColorization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool ABuff_BeltTorch_C::ApplyMeshColorization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "ApplyMeshColorization");

	Params::ABuff_BeltTorch_C_ApplyMeshColorization_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.ShouldDeactivateBuff
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bShouldDeactivate                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsSubmerged_ReturnValue                                 (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)

bool ABuff_BeltTorch_C::ShouldDeactivateBuff(class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsSubmerged_ReturnValue, double* CallFunc_LessEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "ShouldDeactivateBuff");

	Params::ABuff_BeltTorch_C_ShouldDeactivateBuff_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_IsSubmerged_ReturnValue != nullptr)
		*CallFunc_IsSubmerged_ReturnValue = Parms.CallFunc_IsSubmerged_ReturnValue;

	if (CallFunc_LessEqual_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeDefaultTorchWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValidClass_ReturnValue                                (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// class AShooterWeapon_Melee*        K2Node_DynamicCast_AsShooter_Weapon_Melee                        (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)

bool ABuff_BeltTorch_C::InitializeDefaultTorchWeapon(class UObject** CallFunc_GetClassDefaultObject_ReturnValue, class AShooterWeapon_Melee** K2Node_DynamicCast_AsShooter_Weapon_Melee, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "InitializeDefaultTorchWeapon");

	Params::ABuff_BeltTorch_C_InitializeDefaultTorchWeapon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetClassDefaultObject_ReturnValue != nullptr)
		*CallFunc_GetClassDefaultObject_ReturnValue = Parms.CallFunc_GetClassDefaultObject_ReturnValue;

	if (K2Node_DynamicCast_AsShooter_Weapon_Melee != nullptr)
		*K2Node_DynamicCast_AsShooter_Weapon_Melee = Parms.K2Node_DynamicCast_AsShooter_Weapon_Melee;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

bool ABuff_BeltTorch_C::InitializeTorchMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "InitializeTorchMesh");

	Params::ABuff_BeltTorch_C_InitializeTorchMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.DeactivateBeltTorch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEquipTorchOnDeactivation                                        (ExportObject, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool ABuff_BeltTorch_C::DeactivateBeltTorch(bool* bEquipTorchOnDeactivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "DeactivateBeltTorch");

	Params::ABuff_BeltTorch_C_DeactivateBeltTorch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bEquipTorchOnDeactivation != nullptr)
		*bEquipTorchOnDeactivation = Parms.bEquipTorchOnDeactivation;

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.AreValidTorchIDs
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              TorchID1                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// int32                              TorchID2                                                         (ConstParm, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               bAreValid                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class UPrimalItem*                 CallFunc_BPFindItemWithID_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool ABuff_BeltTorch_C::AreValidTorchIDs(int32* TorchID1, bool bAreValid, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "AreValidTorchIDs");

	Params::ABuff_BeltTorch_C_AreValidTorchIDs_Params Parms{};

	Parms.bAreValid = bAreValid;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (TorchID1 != nullptr)
		*TorchID1 = Parms.TorchID1;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInitialized                                                     (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class UPrimalItem*                 CallFunc_BPFindItemWithID_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool ABuff_BeltTorch_C::InitializeTorchItem(bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "InitializeTorchItem");

	Params::ABuff_BeltTorch_C_InitializeTorchItem_Params Parms{};

	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 TorchItem                                                        (Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_BPGetItemID_ItemID1                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_BPGetItemID_ItemID2                                     (BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_AreValidTorchIDs_bAreValid                              (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsServer_ReturnValue                                    (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool ABuff_BeltTorch_C::InitializeTorchIDs(class UPrimalItem* TorchItem, int32* CallFunc_BPGetItemID_ItemID2, bool* CallFunc_AreValidTorchIDs_bAreValid, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "InitializeTorchIDs");

	Params::ABuff_BeltTorch_C_InitializeTorchIDs_Params Parms{};

	Parms.TorchItem = TorchItem;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BPGetItemID_ItemID2 != nullptr)
		*CallFunc_BPGetItemID_ItemID2 = Parms.CallFunc_BPGetItemID_ItemID2;

	if (CallFunc_AreValidTorchIDs_bAreValid != nullptr)
		*CallFunc_AreValidTorchIDs_bAreValid = Parms.CallFunc_AreValidTorchIDs_bAreValid;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.Server_DeactivateBeltTorch
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_BeltTorch_C::Server_DeactivateBeltTorch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "Server_DeactivateBeltTorch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.BuffTickServer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float ABuff_BeltTorch_C::BuffTickServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "BuffTickServer");

	Params::ABuff_BeltTorch_C_BuffTickServer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchColorByIndex_Multicast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                TheColor                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              TheIndex                                                         (BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

int32 ABuff_BeltTorch_C::SetTorchColorByIndex_Multicast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "SetTorchColorByIndex_Multicast");

	Params::ABuff_BeltTorch_C_SetTorchColorByIndex_Multicast_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.BPOnInputEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EPrimalCharacterInputTypeInputType                                                        (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)

void ABuff_BeltTorch_C::BPOnInputEvent(enum class EPrimalCharacterInputType* InputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "BPOnInputEvent");

	Params::ABuff_BeltTorch_C_BPOnInputEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InputType != nullptr)
		*InputType = Parms.InputType;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchFlameColor_Multicast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                TheColor                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

struct FLinearColor ABuff_BeltTorch_C::SetTorchFlameColor_Multicast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "SetTorchFlameColor_Multicast");

	Params::ABuff_BeltTorch_C_SetTorchFlameColor_Multicast_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.BuffTickClient
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float ABuff_BeltTorch_C::BuffTickClient()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "BuffTickClient");

	Params::ABuff_BeltTorch_C_BuffTickClient_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.BPDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)

void ABuff_BeltTorch_C::BPDeactivated(class AActor** ForInstigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "BPDeactivated");

	Params::ABuff_BeltTorch_C_BPDeactivated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ForInstigator != nullptr)
		*ForInstigator = Parms.ForInstigator;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.ExecuteUbergraph_Buff_BeltTorch
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// float                              K2Node_Event_DeltaTime_1                                         (Edit, BlueprintVisible, Net, Parm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_AreValidTorchIDs_bAreValid                              (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_InitializeTorchItem_bInitialized                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ShouldDeactivateBuff_bShouldDeactivate                  (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_ObjectIsChildOf_ReturnValue                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FLinearColor                K2Node_CustomEvent_TheColor_1                                    (Edit, ConstParm, Parm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              K2Node_CustomEvent_TheIndex                                      (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// enum class EPrimalCharacterInputTypeK2Node_Event_inputType                                           (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// struct FLinearColor                K2Node_CustomEvent_TheColor                                      (Edit, ConstParm, Parm, Config, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character_1                         (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_IsLocallyControlledByPlayer_ReturnValue                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsFirstPerson_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              K2Node_Event_DeltaTime                                           (Edit, BlueprintVisible, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class AActor*                      K2Node_Event_ForInstigator                                       (Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// enum class ENetworkModeResult      CallFunc_CanRunCosmeticEvents_OutNetworkMode                     (BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)

bool ABuff_BeltTorch_C::ExecuteUbergraph_Buff_BeltTorch(int32* EntryPoint, float K2Node_Event_DeltaTime_1, bool* CallFunc_AreValidTorchIDs_bAreValid, bool* CallFunc_InitializeTorchItem_bInitialized, bool CallFunc_ShouldDeactivateBuff_bShouldDeactivate, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_ObjectIsChildOf_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, const struct FLinearColor& K2Node_CustomEvent_TheColor_1, bool* CallFunc_Greater_IntInt_ReturnValue, enum class EPrimalCharacterInputType K2Node_Event_inputType, bool* CallFunc_Greater_IntInt_ReturnValue_1, const struct FLinearColor& K2Node_CustomEvent_TheColor, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character_1, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_IsLocallyControlledByPlayer_ReturnValue, bool* CallFunc_IsFirstPerson_ReturnValue, float K2Node_Event_DeltaTime, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast, float* CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "ExecuteUbergraph_Buff_BeltTorch");

	Params::ABuff_BeltTorch_C_ExecuteUbergraph_Buff_BeltTorch_Params Parms{};

	Parms.K2Node_Event_DeltaTime_1 = K2Node_Event_DeltaTime_1;
	Parms.CallFunc_ShouldDeactivateBuff_bShouldDeactivate = CallFunc_ShouldDeactivateBuff_bShouldDeactivate;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_ObjectIsChildOf_ReturnValue = CallFunc_ObjectIsChildOf_ReturnValue;
	Parms.CallFunc_IsTimeSince_ReturnValue = CallFunc_IsTimeSince_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.K2Node_CustomEvent_TheColor_1 = K2Node_CustomEvent_TheColor_1;
	Parms.K2Node_Event_inputType = K2Node_Event_inputType;
	Parms.K2Node_CustomEvent_TheColor = K2Node_CustomEvent_TheColor;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character_1 = K2Node_DynamicCast_AsShooter_Character_1;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast = CallFunc_Multiply_DoubleFloat_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_AreValidTorchIDs_bAreValid != nullptr)
		*CallFunc_AreValidTorchIDs_bAreValid = Parms.CallFunc_AreValidTorchIDs_bAreValid;

	if (CallFunc_InitializeTorchItem_bInitialized != nullptr)
		*CallFunc_InitializeTorchItem_bInitialized = Parms.CallFunc_InitializeTorchItem_bInitialized;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (CallFunc_Greater_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue_1 = Parms.CallFunc_Greater_IntInt_ReturnValue_1;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_IsLocallyControlledByPlayer_ReturnValue != nullptr)
		*CallFunc_IsLocallyControlledByPlayer_ReturnValue = Parms.CallFunc_IsLocallyControlledByPlayer_ReturnValue;

	if (CallFunc_IsFirstPerson_ReturnValue != nullptr)
		*CallFunc_IsFirstPerson_ReturnValue = Parms.CallFunc_IsFirstPerson_ReturnValue;

	if (CallFunc_Multiply_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Multiply_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast;

	if (CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast != nullptr)
		*CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast = Parms.CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast;

	return Parms.ReturnValue;

}

}


