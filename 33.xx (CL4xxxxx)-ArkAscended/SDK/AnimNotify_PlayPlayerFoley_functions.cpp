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
// class UPDA_FoleyCollection_C*      FolleyColletion                                                  (Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class USoundBase*                  FoleySoundReferance                                              (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// enum class Enum_FoleyCollection    Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class USoundBase*                  K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class USoundBase* UAnimNotify_PlayPlayerFoley_C::SelectSound(enum class Enum_FoleyCollection Temp_byte_Variable, class USoundBase* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_PlayPlayerFoley_C", "SelectSound");

	Params::UAnimNotify_PlayPlayerFoley_C_SelectSound_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AnimNotify_PlayPlayerFoley.AnimNotify_PlayPlayerFoley_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)

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
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           Animation                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, EditConst)
// struct FAnimNotifyEventReference   EventReference                                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class USoundBase*                  FoleySound                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UPDA_FoleyCollection_C*      Default_Collection                                               (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// class USoundBase*                  CallFunc_SelectSound_FoleySoundReferance                         (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class APlayerPawnTest_C*           K2Node_DynamicCast_AsPlayer_Pawn_Test                            (ConstParm, BlueprintVisible, Net, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class UPrimalInventoryComponent*   CallFunc_GetComponentByClass_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue                       (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimalItemArmorGeneric_C*   K2Node_DynamicCast_AsPrimal_Item_Armor_Generic                   (ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class USoundBase*                  CallFunc_SelectSound_FoleySoundReferance_1                       (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast        (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)

float UAnimNotify_PlayPlayerFoley_C::Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, struct FAnimNotifyEventReference* EventReference, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_PlayPlayerFoley_C", "Received_Notify");

	Params::UAnimNotify_PlayPlayerFoley_C_Received_Notify_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Test = K2Node_DynamicCast_AsPlayer_Pawn_Test;

	UObject::ProcessEvent(Func, &Parms);

	if (MeshComp != nullptr)
		*MeshComp = Parms.MeshComp;

	if (Animation != nullptr)
		*Animation = Parms.Animation;

	if (EventReference != nullptr)
		*EventReference = std::move(Parms.EventReference);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	return Parms.ReturnValue;

}

}


