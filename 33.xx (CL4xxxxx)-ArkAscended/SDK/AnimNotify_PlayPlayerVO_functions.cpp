#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotify_PlayPlayerVO.AnimNotify_PlayPlayerVO_C
// (None)

class UClass* UAnimNotify_PlayPlayerVO_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_PlayPlayerVO_C");

	return Clss;
}


// AnimNotify_PlayPlayerVO_C AnimNotify_PlayPlayerVO.Default__AnimNotify_PlayPlayerVO_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotify_PlayPlayerVO_C* UAnimNotify_PlayPlayerVO_C::GetDefaultObj()
{
	static class UAnimNotify_PlayPlayerVO_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_PlayPlayerVO_C*>(UAnimNotify_PlayPlayerVO_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimNotify_PlayPlayerVO.AnimNotify_PlayPlayerVO_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)

class FString UAnimNotify_PlayPlayerVO_C::GetNotifyName(const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_PlayPlayerVO_C", "GetNotifyName");

	Params::UAnimNotify_PlayPlayerVO_C_GetNotifyName_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AnimNotify_PlayPlayerVO.AnimNotify_PlayPlayerVO_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           Animation                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, EditConst)
// struct FAnimNotifyEventReference   EventReference                                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UPDA_VoiceCollection_C*      VoiceCollection                                                  (ConstParm, BlueprintVisible, ExportObject, Parm, Config, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// class APlayerPawnTest_C*           K2Node_DynamicCast_AsPlayer_Pawn_Test                            (ConstParm, BlueprintVisible, Net, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class UPDA_VoiceCollection_C*      K2Node_DynamicCast_AsPDA_Voice_Collection                        (BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// enum class Enum_VoiceCollectionLineTemp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class USoundBase*                  K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

class UAudioComponent* UAnimNotify_PlayPlayerVO_C::Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, struct FAnimNotifyEventReference* EventReference, class UPDA_VoiceCollection_C* VoiceCollection, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, bool* K2Node_DynamicCast_bSuccess, class UPDA_VoiceCollection_C* K2Node_DynamicCast_AsPDA_Voice_Collection, bool* K2Node_DynamicCast_bSuccess_1, enum class Enum_VoiceCollectionLine Temp_byte_Variable, class USoundBase* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_PlayPlayerVO_C", "Received_Notify");

	Params::UAnimNotify_PlayPlayerVO_C_Received_Notify_Params Parms{};

	Parms.VoiceCollection = VoiceCollection;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Test = K2Node_DynamicCast_AsPlayer_Pawn_Test;
	Parms.K2Node_DynamicCast_AsPDA_Voice_Collection = K2Node_DynamicCast_AsPDA_Voice_Collection;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

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


