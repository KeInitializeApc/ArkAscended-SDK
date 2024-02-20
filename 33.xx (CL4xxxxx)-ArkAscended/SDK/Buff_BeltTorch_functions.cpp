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
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsLocallyControlledByPlayer_ReturnValue                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ConstParm, ExportObject, Parm, ZeroConstructor, Transient, SubobjectReference)

bool ABuff_BeltTorch_C::ActivateVFX(bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "ActivateVFX");

	Params::ABuff_BeltTorch_C_ActivateVFX_Params Parms{};

	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FPV                                                              (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, SubobjectReference)
// struct FVector                     CallFunc_GetActorEyesViewPoint_OutLocation                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
// struct FRotator                    CallFunc_GetActorEyesViewPoint_OutRotation                       (ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (BlueprintVisible, ExportObject, ReturnParm, Transient, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (BlueprintVisible, Net, Parm, ReturnParm, Transient, SubobjectReference)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, SubobjectReference)

struct FTransform ABuff_BeltTorch_C::UpdateTorchType(bool* FPV, struct FHitResult* CallFunc_K2_SetWorldTransform_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "UpdateTorchType");

	Params::ABuff_BeltTorch_C_UpdateTorchType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FPV != nullptr)
		*FPV = Parms.FPV;

	if (CallFunc_K2_SetWorldTransform_SweepHitResult != nullptr)
		*CallFunc_K2_SetWorldTransform_SweepHitResult = std::move(Parms.CallFunc_K2_SetWorldTransform_SweepHitResult);

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.BPTryMultiUse
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           ForPC                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              UseIndex                                                         (Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 ABuff_BeltTorch_C::BPTryMultiUse(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "BPTryMultiUse");

	Params::ABuff_BeltTorch_C_BPTryMultiUse_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.BPGetMultiUseEntries
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           ForPC                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FMultiUseEntry>      MultiUseEntries                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FMultiUseEntry>      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FMultiUseEntry> ABuff_BeltTorch_C::BPGetMultiUseEntries(const TArray<struct FMultiUseEntry>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "BPGetMultiUseEntries");

	Params::ABuff_BeltTorch_C_BPGetMultiUseEntries_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchFromItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 TheItem                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UClass*                      WeaponClassOverride                                              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterWeapon_Melee*        K2Node_DynamicCast_AsShooter_Weapon_Melee                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValidClass_ReturnValue                                (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, SubobjectReference)
// class UPrimalItem_WeaponTorch_C*   K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch                    (ExportObject, Net, Parm, OutParm, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (Edit, ExportObject, OutParm, ReturnParm, Transient, SubobjectReference)
// int32                              CallFunc_GetFlameColorIndex_Index                                (ConstParm, BlueprintReadOnly, Parm, ReturnParm, Transient, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsShooter_Weapon                         (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool ABuff_BeltTorch_C::InitializeTorchFromItem(bool CallFunc_ActorHasTag_ReturnValue, class UPrimalItem_WeaponTorch_C** K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch, bool K2Node_ClassDynamicCast_bSuccess, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "InitializeTorchFromItem");

	Params::ABuff_BeltTorch_C_InitializeTorchFromItem_Params Parms{};

	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch = Parms.K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.SetFlameColorIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TheIndex                                                         (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

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
// class UMaterialInstanceDynamic*    TheMIC                                                           (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_NotEqual_LinearColorLinearColor_ReturnValue             (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)

bool ABuff_BeltTorch_C::UpdateTorchFlameColor(bool* CallFunc_NotEqual_LinearColorLinearColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "UpdateTorchFlameColor");

	Params::ABuff_BeltTorch_C_UpdateTorchFlameColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_NotEqual_LinearColorLinearColor_ReturnValue != nullptr)
		*CallFunc_NotEqual_LinearColorLinearColor_ReturnValue = Parms.CallFunc_NotEqual_LinearColorLinearColor_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchFlameColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                TheColor                                                         (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class UMaterialInstanceDynamic*    TheMIC                                                           (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

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
// class UClass*                      WeaponClass                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

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
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FLinearColor                CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool ABuff_BeltTorch_C::Update_All_Torch_Colors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "Update All Torch Colors");

	Params::ABuff_BeltTorch_C_Update_All_Torch_Colors_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchColorsArray
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 ForPrimalItem                                                    (Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// struct FLinearColor                CallFunc_GetItemCustomColor_outColor                             (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_GetItemCustomColor_ReturnValue                          (BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// class UPrimalItem_WeaponTorch_C*   K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch                    (ExportObject, Net, Parm, OutParm, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetFlameColorIndex_Index                                (ConstParm, BlueprintReadOnly, Parm, ReturnParm, Transient, SubobjectReference)
// struct FLinearColor                CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_LinearColorLinearColor_ReturnValue             (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool ABuff_BeltTorch_C::UpdateTorchColorsArray(bool* CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_GetItemCustomColor_outColor, class UPrimalItem_WeaponTorch_C** K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_NotEqual_LinearColorLinearColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "UpdateTorchColorsArray");

	Params::ABuff_BeltTorch_C_UpdateTorchColorsArray_Params Parms{};

	Parms.CallFunc_GetItemCustomColor_outColor = CallFunc_GetItemCustomColor_outColor;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch = Parms.K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_NotEqual_LinearColorLinearColor_ReturnValue != nullptr)
		*CallFunc_NotEqual_LinearColorLinearColor_ReturnValue = Parms.CallFunc_NotEqual_LinearColorLinearColor_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchColorByIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                TheColor                                                         (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              TheColorIndex                                                    (BlueprintVisible, Parm, ReturnParm, Transient, SubobjectReference)
// class UMaterialInstanceDynamic*    TheMIC                                                           (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_InRange_IntInt_ReturnValue                              (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, Transient, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UMaterialInterface*          CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, SubobjectReference)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_NotEqual_LinearColorLinearColor_ReturnValue             (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class UPrimalItem_WeaponTorch_C*   K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch                    (ExportObject, Net, Parm, OutParm, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

bool ABuff_BeltTorch_C::SetTorchColorByIndex(bool* CallFunc_InRange_IntInt_ReturnValue, class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic** K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool* CallFunc_NotEqual_LinearColorLinearColor_ReturnValue, class UPrimalItem_WeaponTorch_C** K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "SetTorchColorByIndex");

	Params::ABuff_BeltTorch_C_SetTorchColorByIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_InRange_IntInt_ReturnValue != nullptr)
		*CallFunc_InRange_IntInt_ReturnValue = Parms.CallFunc_InRange_IntInt_ReturnValue;

	if (CallFunc_CreateDynamicMaterialInstance_ReturnValue != nullptr)
		*CallFunc_CreateDynamicMaterialInstance_ReturnValue = Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	if (K2Node_DynamicCast_AsMaterial_Instance_Dynamic != nullptr)
		*K2Node_DynamicCast_AsMaterial_Instance_Dynamic = Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic;

	if (CallFunc_NotEqual_LinearColorLinearColor_ReturnValue != nullptr)
		*CallFunc_NotEqual_LinearColorLinearColor_ReturnValue = Parms.CallFunc_NotEqual_LinearColorLinearColor_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch = Parms.K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch;

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.ApplyMeshColorization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool ABuff_BeltTorch_C::ApplyMeshColorization(bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "ApplyMeshColorization");

	Params::ABuff_BeltTorch_C_ApplyMeshColorization_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.ShouldDeactivateBuff
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bShouldDeactivate                                                (Edit, ExportObject, Parm, OutParm, Transient, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_IsSubmerged_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)

double ABuff_BeltTorch_C::ShouldDeactivateBuff(bool* bShouldDeactivate, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "ShouldDeactivateBuff");

	Params::ABuff_BeltTorch_C_ShouldDeactivateBuff_Params Parms{};

	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (bShouldDeactivate != nullptr)
		*bShouldDeactivate = Parms.bShouldDeactivate;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeDefaultTorchWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValidClass_ReturnValue                                (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterWeapon_Melee*        K2Node_DynamicCast_AsShooter_Weapon_Melee                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool ABuff_BeltTorch_C::InitializeDefaultTorchWeapon(bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "InitializeDefaultTorchWeapon");

	Params::ABuff_BeltTorch_C_InitializeDefaultTorchWeapon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool ABuff_BeltTorch_C::InitializeTorchMesh(bool CallFunc_ActorHasTag_ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "InitializeTorchMesh");

	Params::ABuff_BeltTorch_C_InitializeTorchMesh_Params Parms{};

	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.DeactivateBeltTorch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEquipTorchOnDeactivation                                        (Edit, Parm, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool ABuff_BeltTorch_C::DeactivateBeltTorch(bool* bEquipTorchOnDeactivation, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "DeactivateBeltTorch");

	Params::ABuff_BeltTorch_C_DeactivateBeltTorch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bEquipTorchOnDeactivation != nullptr)
		*bEquipTorchOnDeactivation = Parms.bEquipTorchOnDeactivation;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.AreValidTorchIDs
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              TorchID1                                                         (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, SubobjectReference)
// int32                              TorchID2                                                         (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               bAreValid                                                        (BlueprintVisible, Parm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPrimalItem*                 CallFunc_BPFindItemWithID_ReturnValue                            (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool ABuff_BeltTorch_C::AreValidTorchIDs(bool bAreValid, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, class UPrimalItem** CallFunc_BPFindItemWithID_ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "AreValidTorchIDs");

	Params::ABuff_BeltTorch_C_AreValidTorchIDs_Params Parms{};

	Parms.bAreValid = bAreValid;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	if (CallFunc_BPFindItemWithID_ReturnValue != nullptr)
		*CallFunc_BPFindItemWithID_ReturnValue = Parms.CallFunc_BPFindItemWithID_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInitialized                                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPrimalItem*                 CallFunc_BPFindItemWithID_ReturnValue                            (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool ABuff_BeltTorch_C::InitializeTorchItem(bool bInitialized, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, class UPrimalItem** CallFunc_BPFindItemWithID_ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "InitializeTorchItem");

	Params::ABuff_BeltTorch_C_InitializeTorchItem_Params Parms{};

	Parms.bInitialized = bInitialized;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	if (CallFunc_BPFindItemWithID_ReturnValue != nullptr)
		*CallFunc_BPFindItemWithID_ReturnValue = Parms.CallFunc_BPFindItemWithID_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 TorchItem                                                        (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, SubobjectReference)
// int32                              CallFunc_BPGetItemID_ItemID1                                     (Edit, BlueprintVisible, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_BPGetItemID_ItemID2                                     (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_AreValidTorchIDs_bAreValid                              (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool ABuff_BeltTorch_C::InitializeTorchIDs(int32 CallFunc_BPGetItemID_ItemID1, int32* CallFunc_BPGetItemID_ItemID2, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "InitializeTorchIDs");

	Params::ABuff_BeltTorch_C_InitializeTorchIDs_Params Parms{};

	Parms.CallFunc_BPGetItemID_ItemID1 = CallFunc_BPGetItemID_ItemID1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BPGetItemID_ItemID2 != nullptr)
		*CallFunc_BPGetItemID_ItemID2 = Parms.CallFunc_BPGetItemID_ItemID2;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

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
// float                              DeltaTime                                                        (BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

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
// struct FLinearColor                TheColor                                                         (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              TheIndex                                                         (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)

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
// enum class EPrimalCharacterInputTypeInputType                                                        (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)

enum class EPrimalCharacterInputType ABuff_BeltTorch_C::BPOnInputEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "BPOnInputEvent");

	Params::ABuff_BeltTorch_C_BPOnInputEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchFlameColor_Multicast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                TheColor                                                         (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)

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
// float                              DeltaTime                                                        (BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

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
// class AActor*                      ForInstigator                                                    (EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class AActor* ABuff_BeltTorch_C::BPDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "BPDeactivated");

	Params::ABuff_BeltTorch_C_BPDeactivated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.ExecuteUbergraph_Buff_BeltTorch
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// float                              K2Node_Event_DeltaTime_1                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_AreValidTorchIDs_bAreValid                              (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_InitializeTorchItem_bInitialized                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_ShouldDeactivateBuff_bShouldDeactivate                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_ObjectIsChildOf_ReturnValue                             (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, Net, Parm, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, Interp)
// struct FLinearColor                K2Node_CustomEvent_TheColor_1                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, Interp)
// int32                              K2Node_CustomEvent_TheIndex                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
// enum class EPrimalCharacterInputTypeK2Node_Event_inputType                                           (BlueprintVisible, Net, OutParm, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, Interp)
// struct FLinearColor                K2Node_CustomEvent_TheColor                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character_1                         (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsLocallyControlledByPlayer_ReturnValue                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_IsFirstPerson_ReturnValue                               (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              K2Node_Event_DeltaTime                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class AActor*                      K2Node_Event_ForInstigator                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, SubobjectReference)
// enum class ENetworkModeResult      CallFunc_CanRunCosmeticEvents_OutNetworkMode                     (OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (BlueprintReadOnly, Parm, OutParm, ReturnParm, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// float                              CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast          (BlueprintVisible, EditFixedSize, ReturnParm, Transient, SubobjectReference)

float ABuff_BeltTorch_C::ExecuteUbergraph_Buff_BeltTorch(float* K2Node_Event_DeltaTime_1, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_ObjectIsChildOf_ReturnValue, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, const struct FLinearColor& K2Node_CustomEvent_TheColor_1, bool* CallFunc_IsValid_ReturnValue_4, const struct FLinearColor& K2Node_CustomEvent_TheColor, bool* CallFunc_IsFirstPerson_ReturnValue, float* K2Node_Event_DeltaTime, class AActor** K2Node_Event_ForInstigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "ExecuteUbergraph_Buff_BeltTorch");

	Params::ABuff_BeltTorch_C_ExecuteUbergraph_Buff_BeltTorch_Params Parms{};

	Parms.CallFunc_ObjectIsChildOf_ReturnValue = CallFunc_ObjectIsChildOf_ReturnValue;
	Parms.K2Node_CustomEvent_TheColor_1 = K2Node_CustomEvent_TheColor_1;
	Parms.K2Node_CustomEvent_TheColor = K2Node_CustomEvent_TheColor;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_DeltaTime_1 != nullptr)
		*K2Node_Event_DeltaTime_1 = Parms.K2Node_Event_DeltaTime_1;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_IsValid_ReturnValue_3 != nullptr)
		*CallFunc_IsValid_ReturnValue_3 = Parms.CallFunc_IsValid_ReturnValue_3;

	if (CallFunc_IsValid_ReturnValue_4 != nullptr)
		*CallFunc_IsValid_ReturnValue_4 = Parms.CallFunc_IsValid_ReturnValue_4;

	if (CallFunc_IsFirstPerson_ReturnValue != nullptr)
		*CallFunc_IsFirstPerson_ReturnValue = Parms.CallFunc_IsFirstPerson_ReturnValue;

	if (K2Node_Event_DeltaTime != nullptr)
		*K2Node_Event_DeltaTime = Parms.K2Node_Event_DeltaTime;

	if (K2Node_Event_ForInstigator != nullptr)
		*K2Node_Event_ForInstigator = Parms.K2Node_Event_ForInstigator;

	return Parms.ReturnValue;

}

}


