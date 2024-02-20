#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C
// (None)

class UClass* UPrimalItem_WeaponTorch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponTorch_C");

	return Clss;
}


// PrimalItem_WeaponTorch_C PrimalItem_WeaponTorch.Default__PrimalItem_WeaponTorch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponTorch_C* UPrimalItem_WeaponTorch_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponTorch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponTorch_C*>(UPrimalItem_WeaponTorch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPPreventNewColorization
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsTorchOnBelt_bIsOnBelt                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

void UPrimalItem_WeaponTorch_C::BPPreventNewColorization(bool ReturnValue, bool* CallFunc_IsTorchOnBelt_bIsOnBelt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "BPPreventNewColorization");

	Params::UPrimalItem_WeaponTorch_C_BPPreventNewColorization_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsTorchOnBelt_bIsOnBelt != nullptr)
		*CallFunc_IsTorchOnBelt_bIsOnBelt = Parms.CallFunc_IsTorchOnBelt_bIsOnBelt;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.GetFlameColorIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              CallFunc_SelectInt_ReturnValue                                   (BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

class FName UPrimalItem_WeaponTorch_C::GetFlameColorIndex(int32* Index, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32* CallFunc_SelectInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "GetFlameColorIndex");

	Params::UPrimalItem_WeaponTorch_C_GetFlameColorIndex_Params Parms{};

	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_SelectInt_ReturnValue != nullptr)
		*CallFunc_SelectInt_ReturnValue = Parms.CallFunc_SelectInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.UpdateBeltTorchMeshColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_IsTorchOnBelt_bIsOnBelt                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalBuff*                 CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff      (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class ABuff_BeltTorch_C*           K2Node_DynamicCast_AsBuff_Belt_Torch                             (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

bool UPrimalItem_WeaponTorch_C::UpdateBeltTorchMeshColors(bool* CallFunc_IsTorchOnBelt_bIsOnBelt, class APrimalBuff* CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff, class ABuff_BeltTorch_C** K2Node_DynamicCast_AsBuff_Belt_Torch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "UpdateBeltTorchMeshColors");

	Params::UPrimalItem_WeaponTorch_C_UpdateBeltTorchMeshColors_Params Parms{};

	Parms.CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff = CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsTorchOnBelt_bIsOnBelt != nullptr)
		*CallFunc_IsTorchOnBelt_bIsOnBelt = Parms.CallFunc_IsTorchOnBelt_bIsOnBelt;

	if (K2Node_DynamicCast_AsBuff_Belt_Torch != nullptr)
		*K2Node_DynamicCast_AsBuff_Belt_Torch = Parms.K2Node_DynamicCast_AsBuff_Belt_Torch;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPShouldHideTopLevelCustomContextMenuOption
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                        ContextItem                                                      (Edit, ConstParm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue                              (Net, OutParm, ReturnParm, DisableEditOnTemplate, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UPrimalItem_WeaponTorch_C::BPShouldHideTopLevelCustomContextMenuOption(class FName* ContextItem, bool ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class APawn** CallFunc_K2_GetPawn_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "BPShouldHideTopLevelCustomContextMenuOption");

	Params::UPrimalItem_WeaponTorch_C_BPShouldHideTopLevelCustomContextMenuOption_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ContextItem != nullptr)
		*ContextItem = Parms.ContextItem;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_K2_GetPawn_ReturnValue != nullptr)
		*CallFunc_K2_GetPawn_ReturnValue = Parms.CallFunc_K2_GetPawn_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPPreventWeaponEquip
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_CanTorchBeOnBelt_bCanBeOnBelt                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsTorchOnBelt_bIsOnBelt                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AShooterWeapon*              CallFunc_GetWeapon_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UPrimalItem_WeaponTorch_C::BPPreventWeaponEquip(bool ReturnValue, bool CallFunc_CanTorchBeOnBelt_bCanBeOnBelt, bool* CallFunc_IsTorchOnBelt_bIsOnBelt, class AShooterWeapon* CallFunc_GetWeapon_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "BPPreventWeaponEquip");

	Params::UPrimalItem_WeaponTorch_C_BPPreventWeaponEquip_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_CanTorchBeOnBelt_bCanBeOnBelt = CallFunc_CanTorchBeOnBelt_bCanBeOnBelt;
	Parms.CallFunc_GetWeapon_ReturnValue = CallFunc_GetWeapon_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsTorchOnBelt_bIsOnBelt != nullptr)
		*CallFunc_IsTorchOnBelt_bIsOnBelt = Parms.CallFunc_IsTorchOnBelt_bIsOnBelt;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.RemoveTorchFromBelt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           ForCharacter                                                     (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// class APrimalBuff*                 CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff      (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class ABuff_BeltTorch_C*           K2Node_DynamicCast_AsBuff_Belt_Torch                             (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UPrimalItem_WeaponTorch_C::RemoveTorchFromBelt(class APrimalBuff* CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff, class ABuff_BeltTorch_C** K2Node_DynamicCast_AsBuff_Belt_Torch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "RemoveTorchFromBelt");

	Params::UPrimalItem_WeaponTorch_C_RemoveTorchFromBelt_Params Parms{};

	Parms.CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff = CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsBuff_Belt_Torch != nullptr)
		*K2Node_DynamicCast_AsBuff_Belt_Torch = Parms.K2Node_DynamicCast_AsBuff_Belt_Torch;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.PutTorchOnBelt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           ForCharacter                                                     (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_CanStartWeaponSwitch_ReturnValue                        (ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (Edit, ExportObject, OutParm, ReturnParm, Transient, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsShooter_Weapon                         (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class AWeap_Torch_Base_C*          K2Node_DynamicCast_AsWeap_Torch_Base                             (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalBuff*                 CallFunc_GetBuff_ReturnValue                                     (ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsValidClass_ReturnValue                                (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// class ABuff_BeltTorch_C*           K2Node_DynamicCast_AsBuff_Belt_Torch                             (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

bool UPrimalItem_WeaponTorch_C::PutTorchOnBelt(bool CallFunc_CanStartWeaponSwitch_ReturnValue, bool K2Node_ClassDynamicCast_bSuccess, class AWeap_Torch_Base_C** K2Node_DynamicCast_AsWeap_Torch_Base, class APrimalBuff* CallFunc_GetBuff_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, class ABuff_BeltTorch_C** K2Node_DynamicCast_AsBuff_Belt_Torch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "PutTorchOnBelt");

	Params::UPrimalItem_WeaponTorch_C_PutTorchOnBelt_Params Parms{};

	Parms.CallFunc_CanStartWeaponSwitch_ReturnValue = CallFunc_CanStartWeaponSwitch_ReturnValue;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetBuff_ReturnValue = CallFunc_GetBuff_ReturnValue;
	Parms.CallFunc_StaticAddBuff_ReturnValue = CallFunc_StaticAddBuff_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsWeap_Torch_Base != nullptr)
		*K2Node_DynamicCast_AsWeap_Torch_Base = Parms.K2Node_DynamicCast_AsWeap_Torch_Base;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_DynamicCast_AsBuff_Belt_Torch != nullptr)
		*K2Node_DynamicCast_AsBuff_Belt_Torch = Parms.K2Node_DynamicCast_AsBuff_Belt_Torch;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.CanTorchBeOnBelt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bCanBeOnBelt                                                     (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (Edit, ExportObject, OutParm, ReturnParm, Transient, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsShooter_Weapon                         (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class AWeap_Torch_Base_C*          K2Node_DynamicCast_AsWeap_Torch_Base                             (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UPrimalItem_WeaponTorch_C::CanTorchBeOnBelt(bool* bCanBeOnBelt, bool K2Node_ClassDynamicCast_bSuccess, class AWeap_Torch_Base_C** K2Node_DynamicCast_AsWeap_Torch_Base)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "CanTorchBeOnBelt");

	Params::UPrimalItem_WeaponTorch_C_CanTorchBeOnBelt_Params Parms{};

	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bCanBeOnBelt != nullptr)
		*bCanBeOnBelt = Parms.bCanBeOnBelt;

	if (K2Node_DynamicCast_AsWeap_Torch_Base != nullptr)
		*K2Node_DynamicCast_AsWeap_Torch_Base = Parms.K2Node_DynamicCast_AsWeap_Torch_Base;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.GetBeltTorchBuffInstanceForCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShooterCharacter*           ShooterCharacter                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference)
// class APrimalBuff*                 BeltTorchBuff                                                    (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (Edit, ExportObject, OutParm, ReturnParm, Transient, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsShooter_Weapon                         (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class AWeap_Torch_Base_C*          K2Node_DynamicCast_AsWeap_Torch_Base                             (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalBuff*                 CallFunc_GetBuff_ReturnValue                                     (ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsValidClass_ReturnValue                                (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)

bool UPrimalItem_WeaponTorch_C::GetBeltTorchBuffInstanceForCharacter(bool* CallFunc_IsValid_ReturnValue, bool K2Node_ClassDynamicCast_bSuccess, class AWeap_Torch_Base_C** K2Node_DynamicCast_AsWeap_Torch_Base, class APrimalBuff* CallFunc_GetBuff_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "GetBeltTorchBuffInstanceForCharacter");

	Params::UPrimalItem_WeaponTorch_C_GetBeltTorchBuffInstanceForCharacter_Params Parms{};

	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetBuff_ReturnValue = CallFunc_GetBuff_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_DynamicCast_AsWeap_Torch_Base != nullptr)
		*K2Node_DynamicCast_AsWeap_Torch_Base = Parms.K2Node_DynamicCast_AsWeap_Torch_Base;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.IsCustomContextMenuItemEnabled
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                        ContextItem                                                      (Edit, ConstParm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_CanTorchBeOnBelt_bCanBeOnBelt                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// bool                               CallFunc_IsTorchOnBelt_bIsOnBelt                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

bool UPrimalItem_WeaponTorch_C::IsCustomContextMenuItemEnabled(class FName* ContextItem, bool ReturnValue, bool CallFunc_CanTorchBeOnBelt_bCanBeOnBelt, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool* CallFunc_IsTorchOnBelt_bIsOnBelt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "IsCustomContextMenuItemEnabled");

	Params::UPrimalItem_WeaponTorch_C_IsCustomContextMenuItemEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_CanTorchBeOnBelt_bCanBeOnBelt = CallFunc_CanTorchBeOnBelt_bCanBeOnBelt;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (ContextItem != nullptr)
		*ContextItem = Parms.ContextItem;

	if (CallFunc_IsTorchOnBelt_bIsOnBelt != nullptr)
		*CallFunc_IsTorchOnBelt_bIsOnBelt = Parms.CallFunc_IsTorchOnBelt_bIsOnBelt;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.IsTorchOnBelt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bIsOnBelt                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              CallFunc_BPGetItemID_ItemID1                                     (Edit, BlueprintVisible, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_BPGetItemID_ItemID2                                     (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalBuff*                 CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff      (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class ABuff_BeltTorch_C*           K2Node_DynamicCast_AsBuff_Belt_Torch                             (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)

bool UPrimalItem_WeaponTorch_C::IsTorchOnBelt(bool* bIsOnBelt, int32 CallFunc_BPGetItemID_ItemID1, int32* CallFunc_BPGetItemID_ItemID2, bool* CallFunc_IsValid_ReturnValue, class APrimalBuff* CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff, class ABuff_BeltTorch_C** K2Node_DynamicCast_AsBuff_Belt_Torch, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue_2, bool* CallFunc_EqualEqual_IntInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "IsTorchOnBelt");

	Params::UPrimalItem_WeaponTorch_C_IsTorchOnBelt_Params Parms{};

	Parms.CallFunc_BPGetItemID_ItemID1 = CallFunc_BPGetItemID_ItemID1;
	Parms.CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff = CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsOnBelt != nullptr)
		*bIsOnBelt = Parms.bIsOnBelt;

	if (CallFunc_BPGetItemID_ItemID2 != nullptr)
		*CallFunc_BPGetItemID_ItemID2 = Parms.CallFunc_BPGetItemID_ItemID2;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_DynamicCast_AsBuff_Belt_Torch != nullptr)
		*K2Node_DynamicCast_AsBuff_Belt_Torch = Parms.K2Node_DynamicCast_AsBuff_Belt_Torch;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_2 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_2 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_3 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_3 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPGetCustomInventoryWidgetText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsTorchOnBelt_bIsOnBelt                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class FString                      CallFunc_SelectString_ReturnValue                                (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

void UPrimalItem_WeaponTorch_C::BPGetCustomInventoryWidgetText(const class FString& ReturnValue, bool* CallFunc_IsTorchOnBelt_bIsOnBelt, class FString* CallFunc_SelectString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "BPGetCustomInventoryWidgetText");

	Params::UPrimalItem_WeaponTorch_C_BPGetCustomInventoryWidgetText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsTorchOnBelt_bIsOnBelt != nullptr)
		*CallFunc_IsTorchOnBelt_bIsOnBelt = Parms.CallFunc_IsTorchOnBelt_bIsOnBelt;

	if (CallFunc_SelectString_ReturnValue != nullptr)
		*CallFunc_SelectString_ReturnValue = std::move(Parms.CallFunc_SelectString_ReturnValue);

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPGetCustomInventoryWidgetTextColor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FColor                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FLinearColor                NewLocalVar                                                      (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// struct FColor                      Temp_struct_Variable                                             (ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsTorchOnBelt_bIsOnBelt                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FColor                      K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)

struct FColor UPrimalItem_WeaponTorch_C::BPGetCustomInventoryWidgetTextColor(const struct FColor& ReturnValue, bool* Temp_bool_Variable, bool* CallFunc_IsTorchOnBelt_bIsOnBelt, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, struct FColor* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "BPGetCustomInventoryWidgetTextColor");

	Params::UPrimalItem_WeaponTorch_C_BPGetCustomInventoryWidgetTextColor_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (CallFunc_IsTorchOnBelt_bIsOnBelt != nullptr)
		*CallFunc_IsTorchOnBelt_bIsOnBelt = Parms.CallFunc_IsTorchOnBelt_bIsOnBelt;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.ApplyingSkinOntoItem
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 ToOwnerItem                                                      (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               bIsFirstTime                                                     (BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetFlameColorIndex_Index                                (ConstParm, BlueprintReadOnly, Parm, ReturnParm, Transient, SubobjectReference)
// struct FLinearColor                CallFunc_GetItemCustomColor_outColor                             (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_GetItemCustomColor_ReturnValue                          (BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, SubobjectReference)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_BreakColor_R                                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_BreakColor_G                                            (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_BreakColor_B                                            (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_BreakColor_A                                            (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<float>                      K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UPrimalItemArmor_SaddleGeneric_C*K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic            (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, Net, Parm, ReturnParm, Config, SubobjectReference)
// TArray<class FName>                K2Node_MakeArray_Array_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// TArray<class UClass*>              K2Node_MakeArray_Array_2                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// TArray<class UObject*>             K2Node_MakeArray_Array_3                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// TArray<class FString>              K2Node_MakeArray_Array_4                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_GetItemStatValues_ReturnValue                           (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FCustomItemData             K2Node_MakeStruct_CustomItemData                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
// int32                              CallFunc_GetItemStatValues_ReturnValue_1                         (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference, Interp)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue                           (ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_GetItemStatModifier_ReturnValue                         (ExportObject, Net, Parm, DisableEditOnTemplate, Config, SubobjectReference)
// TArray<float>                      K2Node_MakeArray_Array_5                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// struct FCustomItemData             K2Node_MakeStruct_CustomItemData_1                               (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// float                              K2Node_MakeArray__3__ImplicitCast                                (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              K2Node_MakeArray__2__ImplicitCast                                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              K2Node_MakeArray__1__ImplicitCast                                (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

float UPrimalItem_WeaponTorch_C::ApplyingSkinOntoItem(class UPrimalItem* ToOwnerItem, bool bIsFirstTime, const struct FLinearColor& CallFunc_GetItemCustomColor_outColor, float* CallFunc_BreakColor_R, float* CallFunc_BreakColor_G, float* CallFunc_BreakColor_B, float* CallFunc_BreakColor_A, class UPrimalItemArmor_SaddleGeneric_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic, bool* CallFunc_IsValid_ReturnValue, int32 CallFunc_GetItemStatValues_ReturnValue, int32 CallFunc_GetItemStatValues_ReturnValue_1, double CallFunc_Conv_ByteToDouble_ReturnValue, float CallFunc_GetItemStatModifier_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "ApplyingSkinOntoItem");

	Params::UPrimalItem_WeaponTorch_C_ApplyingSkinOntoItem_Params Parms{};

	Parms.ToOwnerItem = ToOwnerItem;
	Parms.bIsFirstTime = bIsFirstTime;
	Parms.CallFunc_GetItemCustomColor_outColor = CallFunc_GetItemCustomColor_outColor;
	Parms.CallFunc_GetItemStatValues_ReturnValue = CallFunc_GetItemStatValues_ReturnValue;
	Parms.CallFunc_GetItemStatValues_ReturnValue_1 = CallFunc_GetItemStatValues_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue = CallFunc_Conv_ByteToDouble_ReturnValue;
	Parms.CallFunc_GetItemStatModifier_ReturnValue = CallFunc_GetItemStatModifier_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BreakColor_R != nullptr)
		*CallFunc_BreakColor_R = Parms.CallFunc_BreakColor_R;

	if (CallFunc_BreakColor_G != nullptr)
		*CallFunc_BreakColor_G = Parms.CallFunc_BreakColor_G;

	if (CallFunc_BreakColor_B != nullptr)
		*CallFunc_BreakColor_B = Parms.CallFunc_BreakColor_B;

	if (CallFunc_BreakColor_A != nullptr)
		*CallFunc_BreakColor_A = Parms.CallFunc_BreakColor_A;

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.RemovedSkinFromItem
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 FromOwnerItem                                                    (Edit, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               bIsFirstTime                                                     (BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class UPrimalItemArmor_SaddleGeneric_C*K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic            (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_FFloor_ReturnValue                                      (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              CallFunc_FFloor_ReturnValue_1                                    (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// float                              CallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_FFloor_ReturnValue_2                                    (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_FFloor_A_ImplicitCast                                   (Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_FFloor_A_ImplicitCast_1                                 (Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// double                             CallFunc_FFloor_A_ImplicitCast_2                                 (Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)

float UPrimalItem_WeaponTorch_C::RemovedSkinFromItem(bool bIsFirstTime, class UPrimalItemArmor_SaddleGeneric_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_FFloor_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue_2, uint8 CallFunc_Conv_IntToByte_ReturnValue, double CallFunc_FFloor_A_ImplicitCast, double CallFunc_FFloor_A_ImplicitCast_1, double CallFunc_FFloor_A_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "RemovedSkinFromItem");

	Params::UPrimalItem_WeaponTorch_C_RemovedSkinFromItem_Params Parms{};

	Parms.bIsFirstTime = bIsFirstTime;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue_1 = CallFunc_FFloor_ReturnValue_1;
	Parms.CallFunc_FFloor_ReturnValue_2 = CallFunc_FFloor_ReturnValue_2;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_FFloor_A_ImplicitCast = CallFunc_FFloor_A_ImplicitCast;
	Parms.CallFunc_FFloor_A_ImplicitCast_1 = CallFunc_FFloor_A_ImplicitCast_1;
	Parms.CallFunc_FFloor_A_ImplicitCast_2 = CallFunc_FFloor_A_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.SkinEquippedBlueprintTick
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 OwnerItem                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaSeconds                                                     (ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UPrimalItemArmor_SaddleGeneric_C*K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic            (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UActorComponent*             CallFunc_GetAttachedComponent_ReturnValue                        (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UNiagaraComponent*           K2Node_DynamicCast_AsNiagara_Particle_System_Component           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UParticleSystemComponent*    K2Node_DynamicCast_AsCascade_Particle_System_Component           (ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class UPointLightComponent*        K2Node_DynamicCast_AsPoint_Light_Component                       (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               K2Node_SwitchName_CmpSuccess                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// float                              CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_Array_Get_Item_3                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, SubobjectReference)
// int32                              CallFunc_GetAttachedComponentsNum_ReturnValue                    (BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ENetworkModeResult      CallFunc_CanRunCosmeticEvents_OutNetworkMode                     (OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, Net, Parm, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_FMax_ReturnValue                                        (BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              K2Node_VariableSet_ItemDurability_ImplicitCast                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, SubobjectReference)

float UPrimalItem_WeaponTorch_C::SkinEquippedBlueprintTick(class UPrimalItemArmor_SaddleGeneric_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic, class UParticleSystemComponent** K2Node_DynamicCast_AsCascade_Particle_System_Component, class UPointLightComponent** K2Node_DynamicCast_AsPoint_Light_Component, bool K2Node_SwitchName_CmpSuccess, bool* CallFunc_IsValid_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "SkinEquippedBlueprintTick");

	Params::UPrimalItem_WeaponTorch_C_SkinEquippedBlueprintTick_Params Parms{};

	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic;

	if (K2Node_DynamicCast_AsCascade_Particle_System_Component != nullptr)
		*K2Node_DynamicCast_AsCascade_Particle_System_Component = Parms.K2Node_DynamicCast_AsCascade_Particle_System_Component;

	if (K2Node_DynamicCast_AsPoint_Light_Component != nullptr)
		*K2Node_DynamicCast_AsPoint_Light_Component = Parms.K2Node_DynamicCast_AsPoint_Light_Component;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPPreventUseOntoItem
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               bRetValue                                                        (Edit, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              CallFunc_And_IntInt_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)

double UPrimalItem_WeaponTorch_C::BPPreventUseOntoItem(class UPrimalItem* DestinationItem, bool ReturnValue, bool* bRetValue, int32* CallFunc_And_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "BPPreventUseOntoItem");

	Params::UPrimalItem_WeaponTorch_C_BPPreventUseOntoItem_Params Parms{};

	Parms.DestinationItem = DestinationItem;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bRetValue != nullptr)
		*bRetValue = Parms.bRetValue;

	if (CallFunc_And_IntInt_ReturnValue != nullptr)
		*CallFunc_And_IntInt_ReturnValue = Parms.CallFunc_And_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPPreUseItem
// (Event, Public, BlueprintEvent)
// Parameters:

void UPrimalItem_WeaponTorch_C::BPPreUseItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "BPPreUseItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPNotifyItemRefreshed
// (Event, Public, BlueprintEvent)
// Parameters:

void UPrimalItem_WeaponTorch_C::BPNotifyItemRefreshed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "BPNotifyItemRefreshed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.SelectedCustomContextMenuItem
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        ContextItem                                                      (Edit, ConstParm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    ForPC                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class AShooterPlayerController* UPrimalItem_WeaponTorch_C::SelectedCustomContextMenuItem(class FName* ContextItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "SelectedCustomContextMenuItem");

	Params::UPrimalItem_WeaponTorch_C_SelectedCustomContextMenuItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ContextItem != nullptr)
		*ContextItem = Parms.ContextItem;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPUsedOntoItem
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              AdditionalData                                                   (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)

void UPrimalItem_WeaponTorch_C::BPUsedOntoItem(class UPrimalItem* DestinationItem, int32* AdditionalData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "BPUsedOntoItem");

	Params::UPrimalItem_WeaponTorch_C_BPUsedOntoItem_Params Parms{};

	Parms.DestinationItem = DestinationItem;

	UObject::ProcessEvent(Func, &Parms);

	if (AdditionalData != nullptr)
		*AdditionalData = Parms.AdditionalData;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.ExecuteUbergraph_PrimalItem_WeaponTorch
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsTorchOnBelt_bIsOnBelt                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (Edit, ExportObject, OutParm, ReturnParm, Transient, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsShooter_Weapon                         (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class AShooterWeapon*              CallFunc_GetWeapon_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class AWeap_Torch_Base_C*          K2Node_DynamicCast_AsWeap_Torch_Base                             (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_CanTorchBeOnBelt_bCanBeOnBelt                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsValidClass_ReturnValue                                (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        K2Node_Event_ContextItem                                         (ExportObject, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class AShooterPlayerController*    K2Node_Event_ForPC                                               (BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class UPrimalItem*                 K2Node_Event_DestinationItem                                     (Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              K2Node_Event_AdditionalData                                      (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character_1                         (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class UPrimalItemArmor_SaddleGeneric_C*K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic            (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsPreInventoryItem_ReturnValue                          (ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_3                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UPrimalItem_WeaponTorch_C::ExecuteUbergraph_PrimalItem_WeaponTorch(bool* CallFunc_IsTorchOnBelt_bIsOnBelt, bool K2Node_ClassDynamicCast_bSuccess, class AShooterWeapon* CallFunc_GetWeapon_ReturnValue, class AWeap_Torch_Base_C** K2Node_DynamicCast_AsWeap_Torch_Base, bool CallFunc_CanTorchBeOnBelt_bCanBeOnBelt, int32* K2Node_Event_AdditionalData, class APawn** CallFunc_K2_GetPawn_ReturnValue, class UPrimalItemArmor_SaddleGeneric_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic, bool* CallFunc_IsPreInventoryItem_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "ExecuteUbergraph_PrimalItem_WeaponTorch");

	Params::UPrimalItem_WeaponTorch_C_ExecuteUbergraph_PrimalItem_WeaponTorch_Params Parms{};

	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetWeapon_ReturnValue = CallFunc_GetWeapon_ReturnValue;
	Parms.CallFunc_CanTorchBeOnBelt_bCanBeOnBelt = CallFunc_CanTorchBeOnBelt_bCanBeOnBelt;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_3 = CallFunc_EqualEqual_NameName_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsTorchOnBelt_bIsOnBelt != nullptr)
		*CallFunc_IsTorchOnBelt_bIsOnBelt = Parms.CallFunc_IsTorchOnBelt_bIsOnBelt;

	if (K2Node_DynamicCast_AsWeap_Torch_Base != nullptr)
		*K2Node_DynamicCast_AsWeap_Torch_Base = Parms.K2Node_DynamicCast_AsWeap_Torch_Base;

	if (K2Node_Event_AdditionalData != nullptr)
		*K2Node_Event_AdditionalData = Parms.K2Node_Event_AdditionalData;

	if (CallFunc_K2_GetPawn_ReturnValue != nullptr)
		*CallFunc_K2_GetPawn_ReturnValue = Parms.CallFunc_K2_GetPawn_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic;

	if (CallFunc_IsPreInventoryItem_ReturnValue != nullptr)
		*CallFunc_IsPreInventoryItem_ReturnValue = Parms.CallFunc_IsPreInventoryItem_ReturnValue;

	return Parms.ReturnValue;

}

}


