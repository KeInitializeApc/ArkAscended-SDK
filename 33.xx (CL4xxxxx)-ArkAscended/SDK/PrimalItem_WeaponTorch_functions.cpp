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
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsTorchOnBelt_bIsOnBelt                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

bool UPrimalItem_WeaponTorch_C::BPPreventNewColorization(bool CallFunc_IsTorchOnBelt_bIsOnBelt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "BPPreventNewColorization");

	Params::UPrimalItem_WeaponTorch_C_BPPreventNewColorization_Params Parms{};

	Parms.CallFunc_IsTorchOnBelt_bIsOnBelt = CallFunc_IsTorchOnBelt_bIsOnBelt;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.GetFlameColorIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

class FName UPrimalItem_WeaponTorch_C::GetFlameColorIndex(bool* CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32* CallFunc_SelectInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "GetFlameColorIndex");

	Params::UPrimalItem_WeaponTorch_C_GetFlameColorIndex_Params Parms{};

	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_SelectInt_ReturnValue != nullptr)
		*CallFunc_SelectInt_ReturnValue = Parms.CallFunc_SelectInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.UpdateBeltTorchMeshColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsTorchOnBelt_bIsOnBelt                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalBuff*                 CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff      (BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class ABuff_BeltTorch_C*           K2Node_DynamicCast_AsBuff_Belt_Torch                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

bool UPrimalItem_WeaponTorch_C::UpdateBeltTorchMeshColors(class AActor** CallFunc_GetOwner_ReturnValue, bool CallFunc_IsTorchOnBelt_bIsOnBelt, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, class APrimalBuff* CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff, class ABuff_BeltTorch_C** K2Node_DynamicCast_AsBuff_Belt_Torch, bool* K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "UpdateBeltTorchMeshColors");

	Params::UPrimalItem_WeaponTorch_C_UpdateBeltTorchMeshColors_Params Parms{};

	Parms.CallFunc_IsTorchOnBelt_bIsOnBelt = CallFunc_IsTorchOnBelt_bIsOnBelt;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff = CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_AsBuff_Belt_Torch != nullptr)
		*K2Node_DynamicCast_AsBuff_Belt_Torch = Parms.K2Node_DynamicCast_AsBuff_Belt_Torch;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPShouldHideTopLevelCustomContextMenuOption
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                        ContextItem                                                      (Edit, ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue                              (Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

bool UPrimalItem_WeaponTorch_C::BPShouldHideTopLevelCustomContextMenuOption(class FName ContextItem, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class AShooterCharacter** CallFunc_GetOwnerPlayer_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "BPShouldHideTopLevelCustomContextMenuOption");

	Params::UPrimalItem_WeaponTorch_C_BPShouldHideTopLevelCustomContextMenuOption_Params Parms{};

	Parms.ContextItem = ContextItem;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetOwnerPlayer_ReturnValue != nullptr)
		*CallFunc_GetOwnerPlayer_ReturnValue = Parms.CallFunc_GetOwnerPlayer_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPPreventWeaponEquip
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_CanTorchBeOnBelt_bCanBeOnBelt                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsTorchOnBelt_bIsOnBelt                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterWeapon*              CallFunc_GetWeapon_ReturnValue                                   (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool UPrimalItem_WeaponTorch_C::BPPreventWeaponEquip(bool* CallFunc_CanTorchBeOnBelt_bCanBeOnBelt, bool CallFunc_IsTorchOnBelt_bIsOnBelt, class AActor** CallFunc_GetOwner_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, class AShooterWeapon* CallFunc_GetWeapon_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "BPPreventWeaponEquip");

	Params::UPrimalItem_WeaponTorch_C_BPPreventWeaponEquip_Params Parms{};

	Parms.CallFunc_IsTorchOnBelt_bIsOnBelt = CallFunc_IsTorchOnBelt_bIsOnBelt;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_GetWeapon_ReturnValue = CallFunc_GetWeapon_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_CanTorchBeOnBelt_bCanBeOnBelt != nullptr)
		*CallFunc_CanTorchBeOnBelt_bCanBeOnBelt = Parms.CallFunc_CanTorchBeOnBelt_bCanBeOnBelt;

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.RemoveTorchFromBelt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           ForCharacter                                                     (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class APrimalBuff*                 CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff      (BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class ABuff_BeltTorch_C*           K2Node_DynamicCast_AsBuff_Belt_Torch                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class AShooterCharacter* UPrimalItem_WeaponTorch_C::RemoveTorchFromBelt(class APrimalBuff* CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff, class ABuff_BeltTorch_C** K2Node_DynamicCast_AsBuff_Belt_Torch, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "RemoveTorchFromBelt");

	Params::UPrimalItem_WeaponTorch_C_RemoveTorchFromBelt_Params Parms{};

	Parms.CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff = CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsBuff_Belt_Torch != nullptr)
		*K2Node_DynamicCast_AsBuff_Belt_Torch = Parms.K2Node_DynamicCast_AsBuff_Belt_Torch;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.PutTorchOnBelt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           ForCharacter                                                     (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_CanStartWeaponSwitch_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsShooter_Weapon                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AWeap_Torch_Base_C*          K2Node_DynamicCast_AsWeap_Torch_Base                             (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalBuff*                 CallFunc_GetBuff_ReturnValue                                     (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue                               (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_IsValidClass_ReturnValue                                (Edit, Net, Parm, ZeroConstructor, EditConst, SubobjectReference)
// class ABuff_BeltTorch_C*           K2Node_DynamicCast_AsBuff_Belt_Torch                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

class UObject* UPrimalItem_WeaponTorch_C::PutTorchOnBelt(bool* CallFunc_CanStartWeaponSwitch_ReturnValue, class UClass** K2Node_ClassDynamicCast_AsShooter_Weapon, class AWeap_Torch_Base_C** K2Node_DynamicCast_AsWeap_Torch_Base, bool* K2Node_DynamicCast_bSuccess, class APrimalBuff** CallFunc_GetBuff_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class ABuff_BeltTorch_C** K2Node_DynamicCast_AsBuff_Belt_Torch, bool* K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "PutTorchOnBelt");

	Params::UPrimalItem_WeaponTorch_C_PutTorchOnBelt_Params Parms{};

	Parms.CallFunc_StaticAddBuff_ReturnValue = CallFunc_StaticAddBuff_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_CanStartWeaponSwitch_ReturnValue != nullptr)
		*CallFunc_CanStartWeaponSwitch_ReturnValue = Parms.CallFunc_CanStartWeaponSwitch_ReturnValue;

	if (K2Node_ClassDynamicCast_AsShooter_Weapon != nullptr)
		*K2Node_ClassDynamicCast_AsShooter_Weapon = Parms.K2Node_ClassDynamicCast_AsShooter_Weapon;

	if (K2Node_DynamicCast_AsWeap_Torch_Base != nullptr)
		*K2Node_DynamicCast_AsWeap_Torch_Base = Parms.K2Node_DynamicCast_AsWeap_Torch_Base;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetBuff_ReturnValue != nullptr)
		*CallFunc_GetBuff_ReturnValue = Parms.CallFunc_GetBuff_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_DynamicCast_AsBuff_Belt_Torch != nullptr)
		*K2Node_DynamicCast_AsBuff_Belt_Torch = Parms.K2Node_DynamicCast_AsBuff_Belt_Torch;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.CanTorchBeOnBelt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bCanBeOnBelt                                                     (ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsShooter_Weapon                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AWeap_Torch_Base_C*          K2Node_DynamicCast_AsWeap_Torch_Base                             (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class UObject* UPrimalItem_WeaponTorch_C::CanTorchBeOnBelt(bool* bCanBeOnBelt, class UClass** K2Node_ClassDynamicCast_AsShooter_Weapon, class AWeap_Torch_Base_C** K2Node_DynamicCast_AsWeap_Torch_Base, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "CanTorchBeOnBelt");

	Params::UPrimalItem_WeaponTorch_C_CanTorchBeOnBelt_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bCanBeOnBelt != nullptr)
		*bCanBeOnBelt = Parms.bCanBeOnBelt;

	if (K2Node_ClassDynamicCast_AsShooter_Weapon != nullptr)
		*K2Node_ClassDynamicCast_AsShooter_Weapon = Parms.K2Node_ClassDynamicCast_AsShooter_Weapon;

	if (K2Node_DynamicCast_AsWeap_Torch_Base != nullptr)
		*K2Node_DynamicCast_AsWeap_Torch_Base = Parms.K2Node_DynamicCast_AsWeap_Torch_Base;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.GetBeltTorchBuffInstanceForCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShooterCharacter*           ShooterCharacter                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig)
// class APrimalBuff*                 BeltTorchBuff                                                    (BlueprintVisible, ExportObject, EditFixedSize, OutParm, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsShooter_Weapon                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AWeap_Torch_Base_C*          K2Node_DynamicCast_AsWeap_Torch_Base                             (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalBuff*                 CallFunc_GetBuff_ReturnValue                                     (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
// bool                               CallFunc_IsValidClass_ReturnValue                                (Edit, Net, Parm, ZeroConstructor, EditConst, SubobjectReference)

class UObject* UPrimalItem_WeaponTorch_C::GetBeltTorchBuffInstanceForCharacter(class APrimalBuff** BeltTorchBuff, bool* CallFunc_IsValid_ReturnValue, class UClass** K2Node_ClassDynamicCast_AsShooter_Weapon, class AWeap_Torch_Base_C** K2Node_DynamicCast_AsWeap_Torch_Base, bool* K2Node_DynamicCast_bSuccess, class APrimalBuff** CallFunc_GetBuff_ReturnValue, bool CallFunc_IsValidClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "GetBeltTorchBuffInstanceForCharacter");

	Params::UPrimalItem_WeaponTorch_C_GetBeltTorchBuffInstanceForCharacter_Params Parms{};

	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (BeltTorchBuff != nullptr)
		*BeltTorchBuff = Parms.BeltTorchBuff;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_ClassDynamicCast_AsShooter_Weapon != nullptr)
		*K2Node_ClassDynamicCast_AsShooter_Weapon = Parms.K2Node_ClassDynamicCast_AsShooter_Weapon;

	if (K2Node_DynamicCast_AsWeap_Torch_Base != nullptr)
		*K2Node_DynamicCast_AsWeap_Torch_Base = Parms.K2Node_DynamicCast_AsWeap_Torch_Base;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetBuff_ReturnValue != nullptr)
		*CallFunc_GetBuff_ReturnValue = Parms.CallFunc_GetBuff_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.IsCustomContextMenuItemEnabled
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                        ContextItem                                                      (Edit, ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_CanTorchBeOnBelt_bCanBeOnBelt                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_IsTorchOnBelt_bIsOnBelt                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

bool UPrimalItem_WeaponTorch_C::IsCustomContextMenuItemEnabled(class FName ContextItem, bool* CallFunc_CanTorchBeOnBelt_bCanBeOnBelt, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_IsTorchOnBelt_bIsOnBelt, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "IsCustomContextMenuItemEnabled");

	Params::UPrimalItem_WeaponTorch_C_IsCustomContextMenuItemEnabled_Params Parms{};

	Parms.ContextItem = ContextItem;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_IsTorchOnBelt_bIsOnBelt = CallFunc_IsTorchOnBelt_bIsOnBelt;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_CanTorchBeOnBelt_bCanBeOnBelt != nullptr)
		*CallFunc_CanTorchBeOnBelt_bCanBeOnBelt = Parms.CallFunc_CanTorchBeOnBelt_bCanBeOnBelt;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.IsTorchOnBelt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bIsOnBelt                                                        (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              CallFunc_BPGetItemID_ItemID1                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, SubobjectReference)
// int32                              CallFunc_BPGetItemID_ItemID2                                     (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalBuff*                 CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff      (BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class ABuff_BeltTorch_C*           K2Node_DynamicCast_AsBuff_Belt_Torch                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)

bool UPrimalItem_WeaponTorch_C::IsTorchOnBelt(bool* bIsOnBelt, bool* CallFunc_IsValid_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, class APrimalBuff* CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff, class ABuff_BeltTorch_C** K2Node_DynamicCast_AsBuff_Belt_Torch, bool* K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "IsTorchOnBelt");

	Params::UPrimalItem_WeaponTorch_C_IsTorchOnBelt_Params Parms{};

	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff = CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsOnBelt != nullptr)
		*bIsOnBelt = Parms.bIsOnBelt;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_AsBuff_Belt_Torch != nullptr)
		*K2Node_DynamicCast_AsBuff_Belt_Torch = Parms.K2Node_DynamicCast_AsBuff_Belt_Torch;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPGetCustomInventoryWidgetText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsTorchOnBelt_bIsOnBelt                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class FString                      CallFunc_SelectString_ReturnValue                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

class FString UPrimalItem_WeaponTorch_C::BPGetCustomInventoryWidgetText(bool CallFunc_IsTorchOnBelt_bIsOnBelt, class FString* CallFunc_SelectString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "BPGetCustomInventoryWidgetText");

	Params::UPrimalItem_WeaponTorch_C_BPGetCustomInventoryWidgetText_Params Parms{};

	Parms.CallFunc_IsTorchOnBelt_bIsOnBelt = CallFunc_IsTorchOnBelt_bIsOnBelt;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_SelectString_ReturnValue != nullptr)
		*CallFunc_SelectString_ReturnValue = std::move(Parms.CallFunc_SelectString_ReturnValue);

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPGetCustomInventoryWidgetTextColor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FColor                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FLinearColor                NewLocalVar                                                      (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FColor                      Temp_struct_Variable                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsTorchOnBelt_bIsOnBelt                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FColor                      K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)

struct FColor UPrimalItem_WeaponTorch_C::BPGetCustomInventoryWidgetTextColor(bool Temp_bool_Variable, bool CallFunc_IsTorchOnBelt_bIsOnBelt, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, struct FColor* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "BPGetCustomInventoryWidgetTextColor");

	Params::UPrimalItem_WeaponTorch_C_BPGetCustomInventoryWidgetTextColor_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsTorchOnBelt_bIsOnBelt = CallFunc_IsTorchOnBelt_bIsOnBelt;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.ApplyingSkinOntoItem
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 ToOwnerItem                                                      (BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bIsFirstTime                                                     (Edit, BlueprintVisible, ExportObject, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetFlameColorIndex_Index                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
// struct FLinearColor                CallFunc_GetItemCustomColor_outColor                             (ConstParm, BlueprintVisible, Net, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_GetItemCustomColor_ReturnValue                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, SubobjectReference)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_BreakColor_R                                            (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BreakColor_G                                            (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BreakColor_B                                            (ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BreakColor_A                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<float>                      K2Node_MakeArray_Array                                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UPrimalItemArmor_SaddleGeneric_C*K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic            (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// TArray<class FName>                K2Node_MakeArray_Array_1                                         (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<class UClass*>              K2Node_MakeArray_Array_2                                         (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// TArray<class UObject*>             K2Node_MakeArray_Array_3                                         (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// TArray<class FString>              K2Node_MakeArray_Array_4                                         (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_GetItemStatValues_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FCustomItemData             K2Node_MakeStruct_CustomItemData                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetItemStatValues_ReturnValue_1                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue                           (BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_GetItemStatModifier_ReturnValue                         (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// TArray<float>                      K2Node_MakeArray_Array_5                                         (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// struct FCustomItemData             K2Node_MakeStruct_CustomItemData_1                               (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// float                              K2Node_MakeArray__3__ImplicitCast                                (Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_MakeArray__2__ImplicitCast                                (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_MakeArray__1__ImplicitCast                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

float UPrimalItem_WeaponTorch_C::ApplyingSkinOntoItem(class UPrimalItem* ToOwnerItem, bool bIsFirstTime, int32* CallFunc_GetFlameColorIndex_Index, const struct FLinearColor& CallFunc_GetItemCustomColor_outColor, bool CallFunc_GetItemCustomColor_ReturnValue, struct FCustomItemData* CallFunc_GetCustomItemData_OutData, bool* CallFunc_GetCustomItemData_ReturnValue, float* CallFunc_BreakColor_R, float* CallFunc_BreakColor_G, float* CallFunc_BreakColor_B, float* CallFunc_BreakColor_A, float* CallFunc_Array_Get_Item, class UPrimalItemArmor_SaddleGeneric_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsValid_ReturnValue, int32 CallFunc_GetItemStatValues_ReturnValue, int32 CallFunc_GetItemStatValues_ReturnValue_1, double CallFunc_Conv_ByteToDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "ApplyingSkinOntoItem");

	Params::UPrimalItem_WeaponTorch_C_ApplyingSkinOntoItem_Params Parms{};

	Parms.ToOwnerItem = ToOwnerItem;
	Parms.bIsFirstTime = bIsFirstTime;
	Parms.CallFunc_GetItemCustomColor_outColor = CallFunc_GetItemCustomColor_outColor;
	Parms.CallFunc_GetItemCustomColor_ReturnValue = CallFunc_GetItemCustomColor_ReturnValue;
	Parms.CallFunc_GetItemStatValues_ReturnValue = CallFunc_GetItemStatValues_ReturnValue;
	Parms.CallFunc_GetItemStatValues_ReturnValue_1 = CallFunc_GetItemStatValues_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue = CallFunc_Conv_ByteToDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetFlameColorIndex_Index != nullptr)
		*CallFunc_GetFlameColorIndex_Index = Parms.CallFunc_GetFlameColorIndex_Index;

	if (CallFunc_GetCustomItemData_OutData != nullptr)
		*CallFunc_GetCustomItemData_OutData = std::move(Parms.CallFunc_GetCustomItemData_OutData);

	if (CallFunc_GetCustomItemData_ReturnValue != nullptr)
		*CallFunc_GetCustomItemData_ReturnValue = Parms.CallFunc_GetCustomItemData_ReturnValue;

	if (CallFunc_BreakColor_R != nullptr)
		*CallFunc_BreakColor_R = Parms.CallFunc_BreakColor_R;

	if (CallFunc_BreakColor_G != nullptr)
		*CallFunc_BreakColor_G = Parms.CallFunc_BreakColor_G;

	if (CallFunc_BreakColor_B != nullptr)
		*CallFunc_BreakColor_B = Parms.CallFunc_BreakColor_B;

	if (CallFunc_BreakColor_A != nullptr)
		*CallFunc_BreakColor_A = Parms.CallFunc_BreakColor_A;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.RemovedSkinFromItem
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 FromOwnerItem                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bIsFirstTime                                                     (Edit, BlueprintVisible, ExportObject, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UPrimalItemArmor_SaddleGeneric_C*K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic            (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_FFloor_ReturnValue                                      (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              CallFunc_FFloor_ReturnValue_1                                    (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// float                              CallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_FFloor_ReturnValue_2                                    (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_FFloor_A_ImplicitCast                                   (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_FFloor_A_ImplicitCast_1                                 (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// double                             CallFunc_FFloor_A_ImplicitCast_2                                 (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)

void UPrimalItem_WeaponTorch_C::RemovedSkinFromItem(class UPrimalItem* FromOwnerItem, bool bIsFirstTime, class UPrimalItemArmor_SaddleGeneric_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic, bool* K2Node_DynamicCast_bSuccess, struct FCustomItemData* CallFunc_GetCustomItemData_OutData, bool* CallFunc_GetCustomItemData_ReturnValue, float* CallFunc_Array_Get_Item, float* CallFunc_Array_Get_Item_1, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_FFloor_ReturnValue_1, float* CallFunc_Array_Get_Item_2, int32 CallFunc_FFloor_ReturnValue_2, uint8 CallFunc_Conv_IntToByte_ReturnValue, double CallFunc_FFloor_A_ImplicitCast, double CallFunc_FFloor_A_ImplicitCast_1, double CallFunc_FFloor_A_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "RemovedSkinFromItem");

	Params::UPrimalItem_WeaponTorch_C_RemovedSkinFromItem_Params Parms{};

	Parms.FromOwnerItem = FromOwnerItem;
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

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetCustomItemData_OutData != nullptr)
		*CallFunc_GetCustomItemData_OutData = std::move(Parms.CallFunc_GetCustomItemData_OutData);

	if (CallFunc_GetCustomItemData_ReturnValue != nullptr)
		*CallFunc_GetCustomItemData_ReturnValue = Parms.CallFunc_GetCustomItemData_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_Array_Get_Item_1 != nullptr)
		*CallFunc_Array_Get_Item_1 = Parms.CallFunc_Array_Get_Item_1;

	if (CallFunc_Array_Get_Item_2 != nullptr)
		*CallFunc_Array_Get_Item_2 = Parms.CallFunc_Array_Get_Item_2;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.SkinEquippedBlueprintTick
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 OwnerItem                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaSeconds                                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UPrimalItemArmor_SaddleGeneric_C*K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic            (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Variable                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UActorComponent*             CallFunc_GetAttachedComponent_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UNiagaraComponent*           K2Node_DynamicCast_AsNiagara_Particle_System_Component           (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UParticleSystemComponent*    K2Node_DynamicCast_AsCascade_Particle_System_Component           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class UPointLightComponent*        K2Node_DynamicCast_AsPoint_Light_Component                       (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               K2Node_SwitchName_CmpSuccess                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_Array_Get_Item_3                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, EditConst, SubobjectReference)
// int32                              CallFunc_GetAttachedComponentsNum_ReturnValue                    (ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ENetworkModeResult      CallFunc_CanRunCosmeticEvents_OutNetworkMode                     (ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FMax_ReturnValue                                        (ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ConstParm, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_ItemDurability_ImplicitCast                   (BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

float UPrimalItem_WeaponTorch_C::SkinEquippedBlueprintTick(class UPrimalItem* OwnerItem, float DeltaSeconds, class UPrimalItemArmor_SaddleGeneric_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic, bool* K2Node_DynamicCast_bSuccess, int32* Temp_int_Variable, struct FCustomItemData* CallFunc_GetCustomItemData_OutData, bool* CallFunc_GetCustomItemData_ReturnValue, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool* K2Node_DynamicCast_bSuccess_1, class UParticleSystemComponent** K2Node_DynamicCast_AsCascade_Particle_System_Component, bool* K2Node_DynamicCast_bSuccess_2, class UPointLightComponent** K2Node_DynamicCast_AsPoint_Light_Component, bool* K2Node_DynamicCast_bSuccess_3, float* CallFunc_Array_Get_Item, float* CallFunc_Array_Get_Item_1, float* CallFunc_Array_Get_Item_2, float* CallFunc_Array_Get_Item_3, const struct FLinearColor& K2Node_MakeStruct_LinearColor, int32 CallFunc_Add_IntInt_ReturnValue, struct FVector* CallFunc_Conv_LinearColorToVector_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool* CallFunc_IsValid_ReturnValue, enum class ENetworkModeResult CallFunc_CanRunCosmeticEvents_OutNetworkMode, double* CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "SkinEquippedBlueprintTick");

	Params::UPrimalItem_WeaponTorch_C_SkinEquippedBlueprintTick_Params Parms{};

	Parms.OwnerItem = OwnerItem;
	Parms.DeltaSeconds = DeltaSeconds;
	Parms.K2Node_DynamicCast_AsNiagara_Particle_System_Component = K2Node_DynamicCast_AsNiagara_Particle_System_Component;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_CanRunCosmeticEvents_OutNetworkMode = CallFunc_CanRunCosmeticEvents_OutNetworkMode;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_GetCustomItemData_OutData != nullptr)
		*CallFunc_GetCustomItemData_OutData = std::move(Parms.CallFunc_GetCustomItemData_OutData);

	if (CallFunc_GetCustomItemData_ReturnValue != nullptr)
		*CallFunc_GetCustomItemData_ReturnValue = Parms.CallFunc_GetCustomItemData_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_DynamicCast_AsCascade_Particle_System_Component != nullptr)
		*K2Node_DynamicCast_AsCascade_Particle_System_Component = Parms.K2Node_DynamicCast_AsCascade_Particle_System_Component;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (K2Node_DynamicCast_AsPoint_Light_Component != nullptr)
		*K2Node_DynamicCast_AsPoint_Light_Component = Parms.K2Node_DynamicCast_AsPoint_Light_Component;

	if (K2Node_DynamicCast_bSuccess_3 != nullptr)
		*K2Node_DynamicCast_bSuccess_3 = Parms.K2Node_DynamicCast_bSuccess_3;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_Array_Get_Item_1 != nullptr)
		*CallFunc_Array_Get_Item_1 = Parms.CallFunc_Array_Get_Item_1;

	if (CallFunc_Array_Get_Item_2 != nullptr)
		*CallFunc_Array_Get_Item_2 = Parms.CallFunc_Array_Get_Item_2;

	if (CallFunc_Array_Get_Item_3 != nullptr)
		*CallFunc_Array_Get_Item_3 = Parms.CallFunc_Array_Get_Item_3;

	if (CallFunc_Conv_LinearColorToVector_ReturnValue != nullptr)
		*CallFunc_Conv_LinearColorToVector_ReturnValue = std::move(Parms.CallFunc_Conv_LinearColorToVector_ReturnValue);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Multiply_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Multiply_DoubleDouble_ReturnValue = Parms.CallFunc_Multiply_DoubleDouble_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPPreventUseOntoItem
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bRetValue                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              CallFunc_And_IntInt_ReturnValue                                  (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)

bool UPrimalItem_WeaponTorch_C::BPPreventUseOntoItem(class UPrimalItem* DestinationItem, bool* bRetValue, int32* CallFunc_And_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "BPPreventUseOntoItem");

	Params::UPrimalItem_WeaponTorch_C_BPPreventUseOntoItem_Params Parms{};

	Parms.DestinationItem = DestinationItem;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;

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
// class FName                        ContextItem                                                      (Edit, ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    ForPC                                                            (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

class AShooterPlayerController* UPrimalItem_WeaponTorch_C::SelectedCustomContextMenuItem(class FName ContextItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "SelectedCustomContextMenuItem");

	Params::UPrimalItem_WeaponTorch_C_SelectedCustomContextMenuItem_Params Parms{};

	Parms.ContextItem = ContextItem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPUsedOntoItem
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              AdditionalData                                                   (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UPrimalItem_WeaponTorch_C::BPUsedOntoItem(class UPrimalItem* DestinationItem, int32 AdditionalData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "BPUsedOntoItem");

	Params::UPrimalItem_WeaponTorch_C_BPUsedOntoItem_Params Parms{};

	Parms.DestinationItem = DestinationItem;
	Parms.AdditionalData = AdditionalData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.ExecuteUbergraph_PrimalItem_WeaponTorch
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsTorchOnBelt_bIsOnBelt                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsShooter_Weapon                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference)
// class AShooterWeapon*              CallFunc_GetWeapon_ReturnValue                                   (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AWeap_Torch_Base_C*          K2Node_DynamicCast_AsWeap_Torch_Base                             (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_CanTorchBeOnBelt_bCanBeOnBelt                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsValidClass_ReturnValue                                (Edit, Net, Parm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FName                        K2Node_Event_ContextItem                                         (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class AShooterPlayerController*    K2Node_Event_ForPC                                               (ConstParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UPrimalItem*                 K2Node_Event_DestinationItem                                     (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              K2Node_Event_AdditionalData                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class UPrimalItemArmor_SaddleGeneric_C*K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic            (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsPreInventoryItem_ReturnValue                          (ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_3                       (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UPrimalItem_WeaponTorch_C::ExecuteUbergraph_PrimalItem_WeaponTorch(bool CallFunc_IsTorchOnBelt_bIsOnBelt, class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, class UClass** K2Node_ClassDynamicCast_AsShooter_Weapon, class AShooterWeapon* CallFunc_GetWeapon_ReturnValue, class AWeap_Torch_Base_C** K2Node_DynamicCast_AsWeap_Torch_Base, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_CanTorchBeOnBelt_bCanBeOnBelt, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FName* K2Node_Event_ContextItem, class UPrimalItem** K2Node_Event_DestinationItem, int32* K2Node_Event_AdditionalData, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character_1, bool* K2Node_DynamicCast_bSuccess_2, class UPrimalItemArmor_SaddleGeneric_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic, bool* K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsPreInventoryItem_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTorch_C", "ExecuteUbergraph_PrimalItem_WeaponTorch");

	Params::UPrimalItem_WeaponTorch_C_ExecuteUbergraph_PrimalItem_WeaponTorch_Params Parms{};

	Parms.CallFunc_IsTorchOnBelt_bIsOnBelt = CallFunc_IsTorchOnBelt_bIsOnBelt;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_GetWeapon_ReturnValue = CallFunc_GetWeapon_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character_1 = K2Node_DynamicCast_AsShooter_Character_1;
	Parms.CallFunc_IsPreInventoryItem_ReturnValue = CallFunc_IsPreInventoryItem_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_3 = CallFunc_EqualEqual_NameName_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_ClassDynamicCast_AsShooter_Weapon != nullptr)
		*K2Node_ClassDynamicCast_AsShooter_Weapon = Parms.K2Node_ClassDynamicCast_AsShooter_Weapon;

	if (K2Node_DynamicCast_AsWeap_Torch_Base != nullptr)
		*K2Node_DynamicCast_AsWeap_Torch_Base = Parms.K2Node_DynamicCast_AsWeap_Torch_Base;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_CanTorchBeOnBelt_bCanBeOnBelt != nullptr)
		*CallFunc_CanTorchBeOnBelt_bCanBeOnBelt = Parms.CallFunc_CanTorchBeOnBelt_bCanBeOnBelt;

	if (K2Node_Event_ContextItem != nullptr)
		*K2Node_Event_ContextItem = Parms.K2Node_Event_ContextItem;

	if (K2Node_Event_DestinationItem != nullptr)
		*K2Node_Event_DestinationItem = Parms.K2Node_Event_DestinationItem;

	if (K2Node_Event_AdditionalData != nullptr)
		*K2Node_Event_AdditionalData = Parms.K2Node_Event_AdditionalData;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic;

	if (K2Node_DynamicCast_bSuccess_3 != nullptr)
		*K2Node_DynamicCast_bSuccess_3 = Parms.K2Node_DynamicCast_bSuccess_3;

	return Parms.ReturnValue;

}

}


