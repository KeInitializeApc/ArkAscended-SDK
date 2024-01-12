#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotify_PlayPlayerFoley.AnimNotify_PlayPlayerFoley_C
// (None)

class UClass* UAnimNotify_PlayPlayerFoley_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_PlayPlayerFoley_C");

	return Clss;
}


// AnimNotify_PlayPlayerFoley_C AnimNotify_PlayPlayerFoley.Default__AnimNotify_PlayPlayerFoley_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotify_PlayPlayerFoley_C* UAnimNotify_PlayPlayerFoley_C::GetDefaultObj()
{
	static class UAnimNotify_PlayPlayerFoley_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_PlayPlayerFoley_C*>(UAnimNotify_PlayPlayerFoley_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimNotify_PlayPlayerFoley.AnimNotify_PlayPlayerFoley_C.SelectSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPDA_FoleyCollection_C*      FolleyColletion                                                  (ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundBase*                  FoleySoundReferance                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// enum class Enum_FoleyCollection    Temp_byte_Variable                                               (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class USoundBase*                  K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)

void UAnimNotify_PlayPlayerFoley_C::SelectSound(class UPDA_FoleyCollection_C** FolleyColletion, class USoundBase** FoleySoundReferance, enum class Enum_FoleyCollection Temp_byte_Variable, class USoundBase** K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_PlayPlayerFoley_C", "SelectSound");

	Params::UAnimNotify_PlayPlayerFoley_C_SelectSound_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (FolleyColletion != nullptr)
		*FolleyColletion = Parms.FolleyColletion;

	if (FoleySoundReferance != nullptr)
		*FoleySoundReferance = Parms.FoleySoundReferance;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

}


// Function AnimNotify_PlayPlayerFoley.AnimNotify_PlayPlayerFoley_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class FString UAnimNotify_PlayPlayerFoley_C::GetNotifyName(const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_PlayPlayerFoley_C", "GetNotifyName");

	Params::UAnimNotify_PlayPlayerFoley_C_GetNotifyName_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AnimNotify_PlayPlayerFoley.AnimNotify_PlayPlayerFoley_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           Animation                                                        (Edit, Net, EditFixedSize, Config, EditConst)
// struct FAnimNotifyEventReference   EventReference                                                   (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundBase*                  FoleySound                                                       (BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UPDA_FoleyCollection_C*      Default_Collection                                               (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class USoundBase*                  CallFunc_SelectSound_FoleySoundReferance                         (Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class APlayerPawnTest_C*           K2Node_DynamicCast_AsPlayer_Pawn_Test                            (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPrimalInventoryComponent*   CallFunc_GetComponentByClass_ReturnValue                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue                       (Edit, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UPrimalItemArmorGeneric_C*   K2Node_DynamicCast_AsPrimal_Item_Armor_Generic                   (Edit, ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class USoundBase*                  CallFunc_SelectSound_FoleySoundReferance_1                       (Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

class UAudioComponent* UAnimNotify_PlayPlayerFoley_C::Received_Notify(class UAnimSequenceBase* Animation, class USoundBase** FoleySound, class UPDA_FoleyCollection_C** Default_Collection, class AActor** CallFunc_GetOwner_ReturnValue, class USoundBase** CallFunc_SelectSound_FoleySoundReferance, bool* K2Node_DynamicCast_bSuccess, class UPrimalInventoryComponent* CallFunc_GetComponentByClass_ReturnValue, class UPrimalItem** CallFunc_GetEquippedItemOfType_ReturnValue, class UPrimalItemArmorGeneric_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Generic, bool* K2Node_DynamicCast_bSuccess_1, class USoundBase** CallFunc_SelectSound_FoleySoundReferance_1, float* CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_PlayPlayerFoley_C", "Received_Notify");

	Params::UAnimNotify_PlayPlayerFoley_C_Received_Notify_Params Parms{};

	Parms.Animation = Animation;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FoleySound != nullptr)
		*FoleySound = Parms.FoleySound;

	if (Default_Collection != nullptr)
		*Default_Collection = Parms.Default_Collection;

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (CallFunc_SelectSound_FoleySoundReferance != nullptr)
		*CallFunc_SelectSound_FoleySoundReferance = Parms.CallFunc_SelectSound_FoleySoundReferance;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetEquippedItemOfType_ReturnValue != nullptr)
		*CallFunc_GetEquippedItemOfType_ReturnValue = Parms.CallFunc_GetEquippedItemOfType_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Generic != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Generic = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Generic;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_SelectSound_FoleySoundReferance_1 != nullptr)
		*CallFunc_SelectSound_FoleySoundReferance_1 = Parms.CallFunc_SelectSound_FoleySoundReferance_1;

	if (CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast != nullptr)
		*CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast = Parms.CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast;

	return Parms.ReturnValue;

}

}


