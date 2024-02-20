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
// class UPDA_FoleyCollection_C*      FolleyColletion                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class USoundBase*                  FoleySoundReferance                                              (ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class Enum_FoleyCollection    Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// class USoundBase*                  K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)

class USoundBase* UAnimNotify_PlayPlayerFoley_C::SelectSound(enum class Enum_FoleyCollection* Temp_byte_Variable, class USoundBase** K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_PlayPlayerFoley_C", "SelectSound");

	Params::UAnimNotify_PlayPlayerFoley_C_SelectSound_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	return Parms.ReturnValue;

}


// Function AnimNotify_PlayPlayerFoley.AnimNotify_PlayPlayerFoley_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

class FString UAnimNotify_PlayPlayerFoley_C::GetNotifyName(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_PlayPlayerFoley_C", "GetNotifyName");

	Params::UAnimNotify_PlayPlayerFoley_C_GetNotifyName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AnimNotify_PlayPlayerFoley.AnimNotify_PlayPlayerFoley_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (ConstParm, ExportObject, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UAnimSequenceBase*           Animation                                                        (ConstParm, ExportObject, ReturnParm, Config, EditConst)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class USoundBase*                  FoleySound                                                       (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPDA_FoleyCollection_C*      Default_Collection                                               (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class USoundBase*                  CallFunc_SelectSound_FoleySoundReferance                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APlayerPawnTest_C*           K2Node_DynamicCast_AsPlayer_Pawn_Test                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPrimalInventoryComponent*   CallFunc_GetComponentByClass_ReturnValue                         (BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue                       (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPrimalItemArmorGeneric_C*   K2Node_DynamicCast_AsPrimal_Item_Armor_Generic                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class USoundBase*                  CallFunc_SelectSound_FoleySoundReferance_1                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast        (BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

float UAnimNotify_PlayPlayerFoley_C::Received_Notify(struct FAnimNotifyEventReference* EventReference, bool ReturnValue, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_PlayPlayerFoley_C", "Received_Notify");

	Params::UAnimNotify_PlayPlayerFoley_C_Received_Notify_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Test = K2Node_DynamicCast_AsPlayer_Pawn_Test;

	UObject::ProcessEvent(Func, &Parms);

	if (EventReference != nullptr)
		*EventReference = std::move(Parms.EventReference);

	return Parms.ReturnValue;

}

}


