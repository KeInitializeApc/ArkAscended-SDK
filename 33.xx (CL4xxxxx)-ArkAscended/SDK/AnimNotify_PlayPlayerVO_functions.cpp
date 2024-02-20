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
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

class FString UAnimNotify_PlayPlayerVO_C::GetNotifyName(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_PlayPlayerVO_C", "GetNotifyName");

	Params::UAnimNotify_PlayPlayerVO_C_GetNotifyName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AnimNotify_PlayPlayerVO.AnimNotify_PlayPlayerVO_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (ConstParm, ExportObject, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UAnimSequenceBase*           Animation                                                        (ConstParm, ExportObject, ReturnParm, Config, EditConst)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UPDA_VoiceCollection_C*      VoiceCollection                                                  (Edit, BlueprintVisible, EditFixedSize, Parm, Config, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class APlayerPawnTest_C*           K2Node_DynamicCast_AsPlayer_Pawn_Test                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPDA_VoiceCollection_C*      K2Node_DynamicCast_AsPDA_Voice_Collection                        (Edit, ConstParm, BlueprintVisible, EditFixedSize, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// enum class Enum_VoiceCollectionLineTemp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// class USoundBase*                  K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)

class UAudioComponent* UAnimNotify_PlayPlayerVO_C::Received_Notify(struct FAnimNotifyEventReference* EventReference, bool ReturnValue, class UPDA_VoiceCollection_C* VoiceCollection, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, class UPDA_VoiceCollection_C* K2Node_DynamicCast_AsPDA_Voice_Collection, enum class Enum_VoiceCollectionLine* Temp_byte_Variable, class USoundBase** K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_PlayPlayerVO_C", "Received_Notify");

	Params::UAnimNotify_PlayPlayerVO_C_Received_Notify_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.VoiceCollection = VoiceCollection;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Test = K2Node_DynamicCast_AsPlayer_Pawn_Test;
	Parms.K2Node_DynamicCast_AsPDA_Voice_Collection = K2Node_DynamicCast_AsPDA_Voice_Collection;

	UObject::ProcessEvent(Func, &Parms);

	if (EventReference != nullptr)
		*EventReference = std::move(Parms.EventReference);

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	return Parms.ReturnValue;

}

}


