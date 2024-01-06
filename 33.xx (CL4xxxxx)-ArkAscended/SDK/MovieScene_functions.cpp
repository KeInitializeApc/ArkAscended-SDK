#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MovieScene.MovieSceneSignedObject
// (None)

class UClass* UMovieSceneSignedObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSignedObject");

	return Clss;
}


// MovieSceneSignedObject MovieScene.Default__MovieSceneSignedObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSignedObject* UMovieSceneSignedObject::GetDefaultObj()
{
	static class UMovieSceneSignedObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSignedObject*>(UMovieSceneSignedObject::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneSection
// (None)

class UClass* UMovieSceneSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSection");

	return Clss;
}


// MovieSceneSection MovieScene.Default__MovieSceneSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSection* UMovieSceneSection::GetDefaultObj()
{
	static class UMovieSceneSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSection*>(UMovieSceneSection::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieScene.MovieSceneSection.SetRowIndex
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewRowIndex                                                      (Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneSection::SetRowIndex(int32 NewRowIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSection", "SetRowIndex");

	Params::UMovieSceneSection_SetRowIndex_Params Parms{};

	Parms.NewRowIndex = NewRowIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieScene.MovieSceneSection.SetPreRollFrames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InPreRollFrames                                                  (BlueprintVisible, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneSection::SetPreRollFrames(int32 InPreRollFrames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSection", "SetPreRollFrames");

	Params::UMovieSceneSection_SetPreRollFrames_Params Parms{};

	Parms.InPreRollFrames = InPreRollFrames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieScene.MovieSceneSection.SetPostRollFrames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InPostRollFrames                                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneSection::SetPostRollFrames(int32 InPostRollFrames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSection", "SetPostRollFrames");

	Params::UMovieSceneSection_SetPostRollFrames_Params Parms{};

	Parms.InPostRollFrames = InPostRollFrames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieScene.MovieSceneSection.SetOverlapPriority
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewPriority                                                      (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

int32 UMovieSceneSection::SetOverlapPriority()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSection", "SetOverlapPriority");

	Params::UMovieSceneSection_SetOverlapPriority_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSection.SetIsLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsLocked                                                      (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneSection::SetIsLocked(bool bInIsLocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSection", "SetIsLocked");

	Params::UMovieSceneSection_SetIsLocked_Params Parms{};

	Parms.bInIsLocked = bInIsLocked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieScene.MovieSceneSection.SetIsActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsActive                                                      (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneSection::SetIsActive(bool bInIsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSection", "SetIsActive");

	Params::UMovieSceneSection_SetIsActive_Params Parms{};

	Parms.bInIsActive = bInIsActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieScene.MovieSceneSection.SetCompletionMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EMovieSceneCompletionModeInCompletionMode                                                 (BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneSection::SetCompletionMode(enum class EMovieSceneCompletionMode InCompletionMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSection", "SetCompletionMode");

	Params::UMovieSceneSection_SetCompletionMode_Params Parms{};

	Parms.InCompletionMode = InCompletionMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieScene.MovieSceneSection.SetColorTint
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                      InColorTint                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneSection::SetColorTint(const struct FColor& InColorTint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSection", "SetColorTint");

	Params::UMovieSceneSection_SetColorTint_Params Parms{};

	Parms.InColorTint = InColorTint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieScene.MovieSceneSection.SetBlendType
// (RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// enum class EMovieSceneBlendType    InBlendType                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneSection::SetBlendType(enum class EMovieSceneBlendType InBlendType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSection", "SetBlendType");

	Params::UMovieSceneSection_SetBlendType_Params Parms{};

	Parms.InBlendType = InBlendType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieScene.MovieSceneSection.IsLocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSection::IsLocked(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSection", "IsLocked");

	Params::UMovieSceneSection_IsLocked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSection.IsActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSection::IsActive(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSection", "IsActive");

	Params::UMovieSceneSection_IsActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSection.GetRowIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSection::GetRowIndex(int32* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSection", "GetRowIndex");

	Params::UMovieSceneSection_GetRowIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSection.GetPreRollFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSection::GetPreRollFrames(int32* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSection", "GetPreRollFrames");

	Params::UMovieSceneSection_GetPreRollFrames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSection.GetPostRollFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSection::GetPostRollFrames(int32* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSection", "GetPostRollFrames");

	Params::UMovieSceneSection_GetPostRollFrames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSection.GetOverlapPriority
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSection::GetOverlapPriority(int32* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSection", "GetOverlapPriority");

	Params::UMovieSceneSection_GetOverlapPriority_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSection.GetCompletionMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMovieSceneCompletionModeReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSection::GetCompletionMode(enum class EMovieSceneCompletionMode* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSection", "GetCompletionMode");

	Params::UMovieSceneSection_GetCompletionMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSection.GetColorTint
// (Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FColor                      ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSection::GetColorTint(struct FColor* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSection", "GetColorTint");

	Params::UMovieSceneSection_GetColorTint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function MovieScene.MovieSceneSection.GetBlendType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FOptionalMovieSceneBlendTypeReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSection::GetBlendType(struct FOptionalMovieSceneBlendType* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSection", "GetBlendType");

	Params::UMovieSceneSection_GetBlendType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Class MovieScene.MovieSceneTrack
// (None)

class UClass* UMovieSceneTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneTrack");

	return Clss;
}


// MovieSceneTrack MovieScene.Default__MovieSceneTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneTrack* UMovieSceneTrack::GetDefaultObj()
{
	static class UMovieSceneTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneTrack*>(UMovieSceneTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneNameableTrack
// (None)

class UClass* UMovieSceneNameableTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneNameableTrack");

	return Clss;
}


// MovieSceneNameableTrack MovieScene.Default__MovieSceneNameableTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneNameableTrack* UMovieSceneNameableTrack::GetDefaultObj()
{
	static class UMovieSceneNameableTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneNameableTrack*>(UMovieSceneNameableTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneSequence
// (None)

class UClass* UMovieSceneSequence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSequence");

	return Clss;
}


// MovieSceneSequence MovieScene.Default__MovieSceneSequence
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSequence* UMovieSceneSequence::GetDefaultObj()
{
	static class UMovieSceneSequence* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSequence*>(UMovieSceneSequence::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieScene.MovieSceneSequence.GetEarliestTimecodeSource
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMovieSceneTimecodeSource   ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequence::GetEarliestTimecodeSource(struct FMovieSceneTimecodeSource* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequence", "GetEarliestTimecodeSource");

	Params::UMovieSceneSequence_GetEarliestTimecodeSource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function MovieScene.MovieSceneSequence.FindBindingsByTag
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        InBindingName                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FMovieSceneObjectBindingID>ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UMovieSceneSequence::FindBindingsByTag(TArray<struct FMovieSceneObjectBindingID>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequence", "FindBindingsByTag");

	Params::UMovieSceneSequence_FindBindingsByTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequence.FindBindingByTag
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        InBindingName                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// struct FMovieSceneObjectBindingID  ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UMovieSceneSequence::FindBindingByTag(struct FMovieSceneObjectBindingID* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequence", "FindBindingByTag");

	Params::UMovieSceneSequence_FindBindingByTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Class MovieScene.MovieSceneEntitySystem
// (None)

class UClass* UMovieSceneEntitySystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEntitySystem");

	return Clss;
}


// MovieSceneEntitySystem MovieScene.Default__MovieSceneEntitySystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneEntitySystem* UMovieSceneEntitySystem::GetDefaultObj()
{
	static class UMovieSceneEntitySystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneEntitySystem*>(UMovieSceneEntitySystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneEntityInstantiatorSystem
// (None)

class UClass* UMovieSceneEntityInstantiatorSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEntityInstantiatorSystem");

	return Clss;
}


// MovieSceneEntityInstantiatorSystem MovieScene.Default__MovieSceneEntityInstantiatorSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneEntityInstantiatorSystem* UMovieSceneEntityInstantiatorSystem::GetDefaultObj()
{
	static class UMovieSceneEntityInstantiatorSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneEntityInstantiatorSystem*>(UMovieSceneEntityInstantiatorSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneEntitySystemLinker
// (None)

class UClass* UMovieSceneEntitySystemLinker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEntitySystemLinker");

	return Clss;
}


// MovieSceneEntitySystemLinker MovieScene.Default__MovieSceneEntitySystemLinker
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneEntitySystemLinker* UMovieSceneEntitySystemLinker::GetDefaultObj()
{
	static class UMovieSceneEntitySystemLinker* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneEntitySystemLinker*>(UMovieSceneEntitySystemLinker::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneSubSection
// (None)

class UClass* UMovieSceneSubSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSubSection");

	return Clss;
}


// MovieSceneSubSection MovieScene.Default__MovieSceneSubSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSubSection* UMovieSceneSubSection::GetDefaultObj()
{
	static class UMovieSceneSubSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSubSection*>(UMovieSceneSubSection::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieScene.MovieSceneSubSection.SetSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMovieSceneSubSection::SetSequence(class UMovieSceneSequence* Sequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSubSection", "SetSequence");

	Params::UMovieSceneSubSection_SetSequence_Params Parms{};

	Parms.Sequence = Sequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieScene.MovieSceneSubSection.GetSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMovieSceneSequence*         ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSubSection::GetSequence(class UMovieSceneSequence** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSubSection", "GetSequence");

	Params::UMovieSceneSubSection_GetSequence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class MovieScene.MovieSceneSequencePlayer
// (None)

class UClass* UMovieSceneSequencePlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSequencePlayer");

	return Clss;
}


// MovieSceneSequencePlayer MovieScene.Default__MovieSceneSequencePlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSequencePlayer* UMovieSceneSequencePlayer::GetDefaultObj()
{
	static class UMovieSceneSequencePlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSequencePlayer*>(UMovieSceneSequencePlayer::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::StopAtCurrentTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "StopAtCurrentTime");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieScene.MovieSceneSequencePlayer.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "Stop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieScene.MovieSceneSequencePlayer.SetWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// double                             InWeight                                                         (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

double UMovieSceneSequencePlayer::SetWeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "SetWeight");

	Params::UMovieSceneSequencePlayer_SetWeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              StartTime                                                        (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              Duration                                                         (ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, DuplicateTransient)

float UMovieSceneSequencePlayer::SetTimeRange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "SetTimeRange");

	Params::UMovieSceneSequencePlayer_SetTimeRange_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              PlayRate                                                         (BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UMovieSceneSequencePlayer::SetPlayRate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "SetPlayRate");

	Params::UMovieSceneSequencePlayer_SetPlayRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneSequencePlaybackParamsPlaybackParams                                                   (ExportObject, Net, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

struct FMovieSceneSequencePlaybackParams UMovieSceneSequencePlayer::SetPlaybackPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "SetPlaybackPosition");

	Params::UMovieSceneSequencePlayer_SetPlaybackPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFrameRate                  FrameRate                                                        (ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm)

struct FFrameRate UMovieSceneSequencePlayer::SetFrameRate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "SetFrameRate");

	Params::UMovieSceneSequencePlayer_SetFrameRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              StartFrame                                                       (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              Duration                                                         (ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, DuplicateTransient)
// float                              SubFrames                                                        (Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

float UMovieSceneSequencePlayer::SetFrameRange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "SetFrameRange");

	Params::UMovieSceneSequencePlayer_SetFrameRange_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInDisableCameraCuts                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

bool UMovieSceneSequencePlayer::SetDisableCameraCuts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "SetDisableCameraCuts");

	Params::UMovieSceneSequencePlayer_SetDisableCameraCuts_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              TimeInSeconds                                                    (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

float UMovieSceneSequencePlayer::ScrubToSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "ScrubToSeconds");

	Params::UMovieSceneSequencePlayer_ScrubToSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InLabel                                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequencePlayer::ScrubToMarkedFrame(class FString* InLabel, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "ScrubToMarkedFrame");

	Params::UMovieSceneSequencePlayer_ScrubToMarkedFrame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InLabel != nullptr)
		*InLabel = std::move(Parms.InLabel);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFrameTime                  NewPosition                                                      (ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FFrameTime UMovieSceneSequencePlayer::ScrubToFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "ScrubToFrame");

	Params::UMovieSceneSequencePlayer_ScrubToFrame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.Scrub
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::Scrub()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "Scrub");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// struct FFrameTime                  StoppedTime                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

struct FFrameTime UMovieSceneSequencePlayer::RPC_OnStopEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "RPC_OnStopEvent");

	Params::UMovieSceneSequencePlayer_RPC_OnStopEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.RPC_OnFinishPlaybackEvent
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// struct FFrameTime                  StoppedTime                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

struct FFrameTime UMovieSceneSequencePlayer::RPC_OnFinishPlaybackEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "RPC_OnFinishPlaybackEvent");

	Params::UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// enum class EUpdatePositionMethod   Method                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FFrameTime                  RelevantTime                                                     (BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

struct FFrameTime UMovieSceneSequencePlayer::RPC_ExplicitServerUpdateEvent(enum class EUpdatePositionMethod* Method)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "RPC_ExplicitServerUpdateEvent");

	Params::UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Method != nullptr)
		*Method = Parms.Method;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.RestoreState
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::RestoreState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "RestoreState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieScene.MovieSceneSequencePlayer.RemoveWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::RemoveWeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "RemoveWeight");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              TimeInSeconds                                                    (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

float UMovieSceneSequencePlayer::PlayToSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "PlayToSeconds");

	Params::UMovieSceneSequencePlayer_PlayToSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InLabel                                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequencePlayer::PlayToMarkedFrame(class FString* InLabel, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "PlayToMarkedFrame");

	Params::UMovieSceneSequencePlayer_PlayToMarkedFrame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InLabel != nullptr)
		*InLabel = std::move(Parms.InLabel);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFrameTime                  NewPosition                                                      (ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FFrameTime UMovieSceneSequencePlayer::PlayToFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "PlayToFrame");

	Params::UMovieSceneSequencePlayer_PlayToFrame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.PlayTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneSequencePlaybackParamsPlaybackParams                                                   (ExportObject, Net, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// struct FMovieSceneSequencePlayToParamsPlayToParams                                                     (Edit, Net, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

struct FMovieSceneSequencePlayToParams UMovieSceneSequencePlayer::PlayTo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "PlayTo");

	Params::UMovieSceneSequencePlayer_PlayTo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.PlayReverse
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::PlayReverse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "PlayReverse");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieScene.MovieSceneSequencePlayer.PlayLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumLoops                                                         (Edit, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UMovieSceneSequencePlayer::PlayLooping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "PlayLooping");

	Params::UMovieSceneSequencePlayer_PlayLooping_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "Play");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieScene.MovieSceneSequencePlayer.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::Pause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "Pause");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              TimeInSeconds                                                    (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

float UMovieSceneSequencePlayer::JumpToSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "JumpToSeconds");

	Params::UMovieSceneSequencePlayer_JumpToSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InLabel                                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequencePlayer::JumpToMarkedFrame(class FString* InLabel, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "JumpToMarkedFrame");

	Params::UMovieSceneSequencePlayer_JumpToMarkedFrame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InLabel != nullptr)
		*InLabel = std::move(Parms.InLabel);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFrameTime                  NewPosition                                                      (ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FFrameTime UMovieSceneSequencePlayer::JumpToFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "JumpToFrame");

	Params::UMovieSceneSequencePlayer_JumpToFrame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.IsReversed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequencePlayer::IsReversed(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "IsReversed");

	Params::UMovieSceneSequencePlayer_IsReversed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequencePlayer::IsPlaying(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "IsPlaying");

	Params::UMovieSceneSequencePlayer_IsPlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequencePlayer::IsPaused(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "IsPaused");

	Params::UMovieSceneSequencePlayer_IsPaused_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::GoToEndAndStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GoToEndAndStop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieScene.MovieSceneSequencePlayer.GetStartTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime         ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequencePlayer::GetStartTime(struct FQualifiedFrameTime* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetStartTime");

	Params::UMovieSceneSequencePlayer_GetStartTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function MovieScene.MovieSceneSequencePlayer.GetSequenceName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bAddClientInfo                                                   (Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneSequencePlayer::GetSequenceName(class FString* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetSequenceName");

	Params::UMovieSceneSequencePlayer_GetSequenceName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMovieSceneSequence*         ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequencePlayer::GetSequence(class UMovieSceneSequence** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetSequence");

	Params::UMovieSceneSequencePlayer_GetSequence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequencePlayer::GetPlayRate(float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetPlayRate");

	Params::UMovieSceneSequencePlayer_GetPlayRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InObject                                                         (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FMovieSceneObjectBindingID>ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UMovieSceneSequencePlayer::GetObjectBindings(TArray<struct FMovieSceneObjectBindingID>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetObjectBindings");

	Params::UMovieSceneSequencePlayer_GetObjectBindings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFrameRate                  ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequencePlayer::GetFrameRate(struct FFrameRate* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetFrameRate");

	Params::UMovieSceneSequencePlayer_GetFrameRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequencePlayer::GetFrameDuration(int32* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetFrameDuration");

	Params::UMovieSceneSequencePlayer_GetFrameDuration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetEndTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime         ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequencePlayer::GetEndTime(struct FQualifiedFrameTime* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetEndTime");

	Params::UMovieSceneSequencePlayer_GetEndTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function MovieScene.MovieSceneSequencePlayer.GetDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime         ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequencePlayer::GetDuration(struct FQualifiedFrameTime* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetDuration");

	Params::UMovieSceneSequencePlayer_GetDuration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequencePlayer::GetDisableCameraCuts(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetDisableCameraCuts");

	Params::UMovieSceneSequencePlayer_GetDisableCameraCuts_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime         ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequencePlayer::GetCurrentTime(struct FQualifiedFrameTime* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetCurrentTime");

	Params::UMovieSceneSequencePlayer_GetCurrentTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  ObjectBinding                                                    (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// TArray<class UObject*>             ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FMovieSceneObjectBindingID UMovieSceneSequencePlayer::GetBoundObjects(TArray<class UObject*>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "GetBoundObjects");

	Params::UMovieSceneSequencePlayer_GetBoundObjects_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::ChangePlaybackDirection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequencePlayer", "ChangePlaybackDirection");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MovieScene.MovieSceneSubTrack
// (None)

class UClass* UMovieSceneSubTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSubTrack");

	return Clss;
}


// MovieSceneSubTrack MovieScene.Default__MovieSceneSubTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSubTrack* UMovieSceneSubTrack::GetDefaultObj()
{
	static class UMovieSceneSubTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSubTrack*>(UMovieSceneSubTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneBlenderSystemSupport
// (None)

class UClass* IMovieSceneBlenderSystemSupport::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneBlenderSystemSupport");

	return Clss;
}


// MovieSceneBlenderSystemSupport MovieScene.Default__MovieSceneBlenderSystemSupport
// (Public, ClassDefaultObject, ArchetypeObject)

class IMovieSceneBlenderSystemSupport* IMovieSceneBlenderSystemSupport::GetDefaultObj()
{
	static class IMovieSceneBlenderSystemSupport* Default = nullptr;

	if (!Default)
		Default = static_cast<IMovieSceneBlenderSystemSupport*>(IMovieSceneBlenderSystemSupport::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneChannelOverrideProvider
// (None)

class UClass* IMovieSceneChannelOverrideProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneChannelOverrideProvider");

	return Clss;
}


// MovieSceneChannelOverrideProvider MovieScene.Default__MovieSceneChannelOverrideProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class IMovieSceneChannelOverrideProvider* IMovieSceneChannelOverrideProvider::GetDefaultObj()
{
	static class IMovieSceneChannelOverrideProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<IMovieSceneChannelOverrideProvider*>(IMovieSceneChannelOverrideProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneDeterminismSource
// (None)

class UClass* IMovieSceneDeterminismSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneDeterminismSource");

	return Clss;
}


// MovieSceneDeterminismSource MovieScene.Default__MovieSceneDeterminismSource
// (Public, ClassDefaultObject, ArchetypeObject)

class IMovieSceneDeterminismSource* IMovieSceneDeterminismSource::GetDefaultObj()
{
	static class IMovieSceneDeterminismSource* Default = nullptr;

	if (!Default)
		Default = static_cast<IMovieSceneDeterminismSource*>(IMovieSceneDeterminismSource::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneEvaluationHook
// (None)

class UClass* IMovieSceneEvaluationHook::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEvaluationHook");

	return Clss;
}


// MovieSceneEvaluationHook MovieScene.Default__MovieSceneEvaluationHook
// (Public, ClassDefaultObject, ArchetypeObject)

class IMovieSceneEvaluationHook* IMovieSceneEvaluationHook::GetDefaultObj()
{
	static class IMovieSceneEvaluationHook* Default = nullptr;

	if (!Default)
		Default = static_cast<IMovieSceneEvaluationHook*>(IMovieSceneEvaluationHook::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieScenePlaybackClient
// (None)

class UClass* IMovieScenePlaybackClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScenePlaybackClient");

	return Clss;
}


// MovieScenePlaybackClient MovieScene.Default__MovieScenePlaybackClient
// (Public, ClassDefaultObject, ArchetypeObject)

class IMovieScenePlaybackClient* IMovieScenePlaybackClient::GetDefaultObj()
{
	static class IMovieScenePlaybackClient* Default = nullptr;

	if (!Default)
		Default = static_cast<IMovieScenePlaybackClient*>(IMovieScenePlaybackClient::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneSequencePlayerObserver
// (None)

class UClass* IMovieSceneSequencePlayerObserver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSequencePlayerObserver");

	return Clss;
}


// MovieSceneSequencePlayerObserver MovieScene.Default__MovieSceneSequencePlayerObserver
// (Public, ClassDefaultObject, ArchetypeObject)

class IMovieSceneSequencePlayerObserver* IMovieSceneSequencePlayerObserver::GetDefaultObj()
{
	static class IMovieSceneSequencePlayerObserver* Default = nullptr;

	if (!Default)
		Default = static_cast<IMovieSceneSequencePlayerObserver*>(IMovieSceneSequencePlayerObserver::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneBindingOwnerInterface
// (None)

class UClass* IMovieSceneBindingOwnerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneBindingOwnerInterface");

	return Clss;
}


// MovieSceneBindingOwnerInterface MovieScene.Default__MovieSceneBindingOwnerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IMovieSceneBindingOwnerInterface* IMovieSceneBindingOwnerInterface::GetDefaultObj()
{
	static class IMovieSceneBindingOwnerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IMovieSceneBindingOwnerInterface*>(IMovieSceneBindingOwnerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneCachedTrack
// (None)

class UClass* IMovieSceneCachedTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCachedTrack");

	return Clss;
}


// MovieSceneCachedTrack MovieScene.Default__MovieSceneCachedTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class IMovieSceneCachedTrack* IMovieSceneCachedTrack::GetDefaultObj()
{
	static class IMovieSceneCachedTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<IMovieSceneCachedTrack*>(IMovieSceneCachedTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneEasingFunction
// (None)

class UClass* IMovieSceneEasingFunction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEasingFunction");

	return Clss;
}


// MovieSceneEasingFunction MovieScene.Default__MovieSceneEasingFunction
// (Public, ClassDefaultObject, ArchetypeObject)

class IMovieSceneEasingFunction* IMovieSceneEasingFunction::GetDefaultObj()
{
	static class IMovieSceneEasingFunction* Default = nullptr;

	if (!Default)
		Default = static_cast<IMovieSceneEasingFunction*>(IMovieSceneEasingFunction::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieScene.MovieSceneEasingFunction.OnEvaluate
// (Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Interp                                                           (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void IMovieSceneEasingFunction::OnEvaluate(float* Interp, float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneEasingFunction", "OnEvaluate");

	Params::IMovieSceneEasingFunction_OnEvaluate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Interp != nullptr)
		*Interp = Parms.Interp;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class MovieScene.MovieSceneKeyProxy
// (None)

class UClass* IMovieSceneKeyProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneKeyProxy");

	return Clss;
}


// MovieSceneKeyProxy MovieScene.Default__MovieSceneKeyProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class IMovieSceneKeyProxy* IMovieSceneKeyProxy::GetDefaultObj()
{
	static class IMovieSceneKeyProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<IMovieSceneKeyProxy*>(IMovieSceneKeyProxy::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneSequenceTickManagerClient
// (None)

class UClass* IMovieSceneSequenceTickManagerClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSequenceTickManagerClient");

	return Clss;
}


// MovieSceneSequenceTickManagerClient MovieScene.Default__MovieSceneSequenceTickManagerClient
// (Public, ClassDefaultObject, ArchetypeObject)

class IMovieSceneSequenceTickManagerClient* IMovieSceneSequenceTickManagerClient::GetDefaultObj()
{
	static class IMovieSceneSequenceTickManagerClient* Default = nullptr;

	if (!Default)
		Default = static_cast<IMovieSceneSequenceTickManagerClient*>(IMovieSceneSequenceTickManagerClient::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneChannelOverrideContainer
// (None)

class UClass* UMovieSceneChannelOverrideContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneChannelOverrideContainer");

	return Clss;
}


// MovieSceneChannelOverrideContainer MovieScene.Default__MovieSceneChannelOverrideContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneChannelOverrideContainer* UMovieSceneChannelOverrideContainer::GetDefaultObj()
{
	static class UMovieSceneChannelOverrideContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneChannelOverrideContainer*>(UMovieSceneChannelOverrideContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneSectionChannelOverrideRegistry
// (None)

class UClass* UMovieSceneSectionChannelOverrideRegistry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSectionChannelOverrideRegistry");

	return Clss;
}


// MovieSceneSectionChannelOverrideRegistry MovieScene.Default__MovieSceneSectionChannelOverrideRegistry
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSectionChannelOverrideRegistry* UMovieSceneSectionChannelOverrideRegistry::GetDefaultObj()
{
	static class UMovieSceneSectionChannelOverrideRegistry* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSectionChannelOverrideRegistry*>(UMovieSceneSectionChannelOverrideRegistry::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneTrackTemplateProducer
// (None)

class UClass* IMovieSceneTrackTemplateProducer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneTrackTemplateProducer");

	return Clss;
}


// MovieSceneTrackTemplateProducer MovieScene.Default__MovieSceneTrackTemplateProducer
// (Public, ClassDefaultObject, ArchetypeObject)

class IMovieSceneTrackTemplateProducer* IMovieSceneTrackTemplateProducer::GetDefaultObj()
{
	static class IMovieSceneTrackTemplateProducer* Default = nullptr;

	if (!Default)
		Default = static_cast<IMovieSceneTrackTemplateProducer*>(IMovieSceneTrackTemplateProducer::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneCompiledData
// (None)

class UClass* UMovieSceneCompiledData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCompiledData");

	return Clss;
}


// MovieSceneCompiledData MovieScene.Default__MovieSceneCompiledData
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCompiledData* UMovieSceneCompiledData::GetDefaultObj()
{
	static class UMovieSceneCompiledData* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCompiledData*>(UMovieSceneCompiledData::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneCompiledDataManager
// (None)

class UClass* UMovieSceneCompiledDataManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCompiledDataManager");

	return Clss;
}


// MovieSceneCompiledDataManager MovieScene.Default__MovieSceneCompiledDataManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCompiledDataManager* UMovieSceneCompiledDataManager::GetDefaultObj()
{
	static class UMovieSceneCompiledDataManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCompiledDataManager*>(UMovieSceneCompiledDataManager::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneEntityProvider
// (None)

class UClass* IMovieSceneEntityProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEntityProvider");

	return Clss;
}


// MovieSceneEntityProvider MovieScene.Default__MovieSceneEntityProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class IMovieSceneEntityProvider* IMovieSceneEntityProvider::GetDefaultObj()
{
	static class IMovieSceneEntityProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<IMovieSceneEntityProvider*>(IMovieSceneEntityProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneBlenderSystem
// (None)

class UClass* UMovieSceneBlenderSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneBlenderSystem");

	return Clss;
}


// MovieSceneBlenderSystem MovieScene.Default__MovieSceneBlenderSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneBlenderSystem* UMovieSceneBlenderSystem::GetDefaultObj()
{
	static class UMovieSceneBlenderSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneBlenderSystem*>(UMovieSceneBlenderSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneGenericBoundObjectInstantiator
// (None)

class UClass* UMovieSceneGenericBoundObjectInstantiator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneGenericBoundObjectInstantiator");

	return Clss;
}


// MovieSceneGenericBoundObjectInstantiator MovieScene.Default__MovieSceneGenericBoundObjectInstantiator
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneGenericBoundObjectInstantiator* UMovieSceneGenericBoundObjectInstantiator::GetDefaultObj()
{
	static class UMovieSceneGenericBoundObjectInstantiator* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneGenericBoundObjectInstantiator*>(UMovieSceneGenericBoundObjectInstantiator::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneBoundSceneComponentInstantiator
// (None)

class UClass* UMovieSceneBoundSceneComponentInstantiator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneBoundSceneComponentInstantiator");

	return Clss;
}


// MovieSceneBoundSceneComponentInstantiator MovieScene.Default__MovieSceneBoundSceneComponentInstantiator
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneBoundSceneComponentInstantiator* UMovieSceneBoundSceneComponentInstantiator::GetDefaultObj()
{
	static class UMovieSceneBoundSceneComponentInstantiator* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneBoundSceneComponentInstantiator*>(UMovieSceneBoundSceneComponentInstantiator::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneValueDecomposer
// (None)

class UClass* IMovieSceneValueDecomposer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneValueDecomposer");

	return Clss;
}


// MovieSceneValueDecomposer MovieScene.Default__MovieSceneValueDecomposer
// (Public, ClassDefaultObject, ArchetypeObject)

class IMovieSceneValueDecomposer* IMovieSceneValueDecomposer::GetDefaultObj()
{
	static class IMovieSceneValueDecomposer* Default = nullptr;

	if (!Default)
		Default = static_cast<IMovieSceneValueDecomposer*>(IMovieSceneValueDecomposer::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneEvalTimeSystem
// (None)

class UClass* UMovieSceneEvalTimeSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEvalTimeSystem");

	return Clss;
}


// MovieSceneEvalTimeSystem MovieScene.Default__MovieSceneEvalTimeSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneEvalTimeSystem* UMovieSceneEvalTimeSystem::GetDefaultObj()
{
	static class UMovieSceneEvalTimeSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneEvalTimeSystem*>(UMovieSceneEvalTimeSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneEvaluationHookSystem
// (None)

class UClass* UMovieSceneEvaluationHookSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEvaluationHookSystem");

	return Clss;
}


// MovieSceneEvaluationHookSystem MovieScene.Default__MovieSceneEvaluationHookSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneEvaluationHookSystem* UMovieSceneEvaluationHookSystem::GetDefaultObj()
{
	static class UMovieSceneEvaluationHookSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneEvaluationHookSystem*>(UMovieSceneEvaluationHookSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieScenePreAnimatedStateSystemInterface
// (None)

class UClass* IMovieScenePreAnimatedStateSystemInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScenePreAnimatedStateSystemInterface");

	return Clss;
}


// MovieScenePreAnimatedStateSystemInterface MovieScene.Default__MovieScenePreAnimatedStateSystemInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IMovieScenePreAnimatedStateSystemInterface* IMovieScenePreAnimatedStateSystemInterface::GetDefaultObj()
{
	static class IMovieScenePreAnimatedStateSystemInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IMovieScenePreAnimatedStateSystemInterface*>(IMovieScenePreAnimatedStateSystemInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneCachePreAnimatedStateSystem
// (None)

class UClass* UMovieSceneCachePreAnimatedStateSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCachePreAnimatedStateSystem");

	return Clss;
}


// MovieSceneCachePreAnimatedStateSystem MovieScene.Default__MovieSceneCachePreAnimatedStateSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCachePreAnimatedStateSystem* UMovieSceneCachePreAnimatedStateSystem::GetDefaultObj()
{
	static class UMovieSceneCachePreAnimatedStateSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCachePreAnimatedStateSystem*>(UMovieSceneCachePreAnimatedStateSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneRestorePreAnimatedStateSystem
// (None)

class UClass* UMovieSceneRestorePreAnimatedStateSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneRestorePreAnimatedStateSystem");

	return Clss;
}


// MovieSceneRestorePreAnimatedStateSystem MovieScene.Default__MovieSceneRestorePreAnimatedStateSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneRestorePreAnimatedStateSystem* UMovieSceneRestorePreAnimatedStateSystem::GetDefaultObj()
{
	static class UMovieSceneRestorePreAnimatedStateSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneRestorePreAnimatedStateSystem*>(UMovieSceneRestorePreAnimatedStateSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneSpawnablesSystem
// (None)

class UClass* UMovieSceneSpawnablesSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSpawnablesSystem");

	return Clss;
}


// MovieSceneSpawnablesSystem MovieScene.Default__MovieSceneSpawnablesSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSpawnablesSystem* UMovieSceneSpawnablesSystem::GetDefaultObj()
{
	static class UMovieSceneSpawnablesSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSpawnablesSystem*>(UMovieSceneSpawnablesSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneTrackInstance
// (None)

class UClass* UMovieSceneTrackInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneTrackInstance");

	return Clss;
}


// MovieSceneTrackInstance MovieScene.Default__MovieSceneTrackInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneTrackInstance* UMovieSceneTrackInstance::GetDefaultObj()
{
	static class UMovieSceneTrackInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneTrackInstance*>(UMovieSceneTrackInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneTrackInstanceInstantiator
// (None)

class UClass* UMovieSceneTrackInstanceInstantiator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneTrackInstanceInstantiator");

	return Clss;
}


// MovieSceneTrackInstanceInstantiator MovieScene.Default__MovieSceneTrackInstanceInstantiator
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneTrackInstanceInstantiator* UMovieSceneTrackInstanceInstantiator::GetDefaultObj()
{
	static class UMovieSceneTrackInstanceInstantiator* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneTrackInstanceInstantiator*>(UMovieSceneTrackInstanceInstantiator::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneTrackInstanceSystem
// (None)

class UClass* UMovieSceneTrackInstanceSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneTrackInstanceSystem");

	return Clss;
}


// MovieSceneTrackInstanceSystem MovieScene.Default__MovieSceneTrackInstanceSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneTrackInstanceSystem* UMovieSceneTrackInstanceSystem::GetDefaultObj()
{
	static class UMovieSceneTrackInstanceSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneTrackInstanceSystem*>(UMovieSceneTrackInstanceSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneCustomClockSource
// (None)

class UClass* IMovieSceneCustomClockSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCustomClockSource");

	return Clss;
}


// MovieSceneCustomClockSource MovieScene.Default__MovieSceneCustomClockSource
// (Public, ClassDefaultObject, ArchetypeObject)

class IMovieSceneCustomClockSource* IMovieSceneCustomClockSource::GetDefaultObj()
{
	static class IMovieSceneCustomClockSource* Default = nullptr;

	if (!Default)
		Default = static_cast<IMovieSceneCustomClockSource*>(IMovieSceneCustomClockSource::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieScene.MovieSceneCustomClockSource.OnTick
// (Native, Public)
// Parameters:
// float                              DeltaSeconds                                                     (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              InPlayRate                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, EditConst, InstancedReference, SubobjectReference)

float IMovieSceneCustomClockSource::OnTick(float* InPlayRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneCustomClockSource", "OnTick");

	Params::IMovieSceneCustomClockSource_OnTick_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPlayRate != nullptr)
		*InPlayRate = Parms.InPlayRate;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying
// (Native, Public, HasOutParams)
// Parameters:
// struct FQualifiedFrameTime         InStopTime                                                       (BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

struct FQualifiedFrameTime IMovieSceneCustomClockSource::OnStopPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneCustomClockSource", "OnStopPlaying");

	Params::IMovieSceneCustomClockSource_OnStopPlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying
// (Native, Public, HasOutParams)
// Parameters:
// struct FQualifiedFrameTime         InStartTime                                                      (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void IMovieSceneCustomClockSource::OnStartPlaying(const struct FQualifiedFrameTime& InStartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneCustomClockSource", "OnStartPlaying");

	Params::IMovieSceneCustomClockSource_OnStartPlaying_Params Parms{};

	Parms.InStartTime = InStartTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime
// (Native, Public, HasOutParams)
// Parameters:
// struct FQualifiedFrameTime         InCurrentTime                                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              InPlayRate                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, EditConst, InstancedReference, SubobjectReference)
// struct FFrameTime                  ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FQualifiedFrameTime IMovieSceneCustomClockSource::OnRequestCurrentTime(float* InPlayRate, struct FFrameTime* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneCustomClockSource", "OnRequestCurrentTime");

	Params::IMovieSceneCustomClockSource_OnRequestCurrentTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPlayRate != nullptr)
		*InPlayRate = Parms.InPlayRate;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Class MovieScene.MovieSceneBuiltInEasingFunction
// (None)

class UClass* UMovieSceneBuiltInEasingFunction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneBuiltInEasingFunction");

	return Clss;
}


// MovieSceneBuiltInEasingFunction MovieScene.Default__MovieSceneBuiltInEasingFunction
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneBuiltInEasingFunction* UMovieSceneBuiltInEasingFunction::GetDefaultObj()
{
	static class UMovieSceneBuiltInEasingFunction* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneBuiltInEasingFunction*>(UMovieSceneBuiltInEasingFunction::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneEasingExternalCurve
// (None)

class UClass* UMovieSceneEasingExternalCurve::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEasingExternalCurve");

	return Clss;
}


// MovieSceneEasingExternalCurve MovieScene.Default__MovieSceneEasingExternalCurve
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneEasingExternalCurve* UMovieSceneEasingExternalCurve::GetDefaultObj()
{
	static class UMovieSceneEasingExternalCurve* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneEasingExternalCurve*>(UMovieSceneEasingExternalCurve::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.NodeAndChannelMappings
// (None)

class UClass* INodeAndChannelMappings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NodeAndChannelMappings");

	return Clss;
}


// NodeAndChannelMappings MovieScene.Default__NodeAndChannelMappings
// (Public, ClassDefaultObject, ArchetypeObject)

class INodeAndChannelMappings* INodeAndChannelMappings::GetDefaultObj()
{
	static class INodeAndChannelMappings* Default = nullptr;

	if (!Default)
		Default = static_cast<INodeAndChannelMappings*>(INodeAndChannelMappings::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneNodeGroup
// (None)

class UClass* UMovieSceneNodeGroup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneNodeGroup");

	return Clss;
}


// MovieSceneNodeGroup MovieScene.Default__MovieSceneNodeGroup
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneNodeGroup* UMovieSceneNodeGroup::GetDefaultObj()
{
	static class UMovieSceneNodeGroup* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneNodeGroup*>(UMovieSceneNodeGroup::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneNodeGroupCollection
// (None)

class UClass* UMovieSceneNodeGroupCollection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneNodeGroupCollection");

	return Clss;
}


// MovieSceneNodeGroupCollection MovieScene.Default__MovieSceneNodeGroupCollection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneNodeGroupCollection* UMovieSceneNodeGroupCollection::GetDefaultObj()
{
	static class UMovieSceneNodeGroupCollection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneNodeGroupCollection*>(UMovieSceneNodeGroupCollection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieScene
// (None)

class UClass* UMovieScene::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScene");

	return Clss;
}


// MovieScene MovieScene.Default__MovieScene
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieScene* UMovieScene::GetDefaultObj()
{
	static class UMovieScene* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScene*>(UMovieScene::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneBindingOverrides
// (None)

class UClass* UMovieSceneBindingOverrides::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneBindingOverrides");

	return Clss;
}


// MovieSceneBindingOverrides MovieScene.Default__MovieSceneBindingOverrides
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneBindingOverrides* UMovieSceneBindingOverrides::GetDefaultObj()
{
	static class UMovieSceneBindingOverrides* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneBindingOverrides*>(UMovieSceneBindingOverrides::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneFolder
// (None)

class UClass* UMovieSceneFolder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneFolder");

	return Clss;
}


// MovieSceneFolder MovieScene.Default__MovieSceneFolder
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneFolder* UMovieSceneFolder::GetDefaultObj()
{
	static class UMovieSceneFolder* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneFolder*>(UMovieSceneFolder::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneSequenceTickManager
// (None)

class UClass* UMovieSceneSequenceTickManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSequenceTickManager");

	return Clss;
}


// MovieSceneSequenceTickManager MovieScene.Default__MovieSceneSequenceTickManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSequenceTickManager* UMovieSceneSequenceTickManager::GetDefaultObj()
{
	static class UMovieSceneSequenceTickManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSequenceTickManager*>(UMovieSceneSequenceTickManager::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneBoolSection
// (None)

class UClass* UMovieSceneBoolSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneBoolSection");

	return Clss;
}


// MovieSceneBoolSection MovieScene.Default__MovieSceneBoolSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneBoolSection* UMovieSceneBoolSection::GetDefaultObj()
{
	static class UMovieSceneBoolSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneBoolSection*>(UMovieSceneBoolSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneHookSection
// (None)

class UClass* UMovieSceneHookSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneHookSection");

	return Clss;
}


// MovieSceneHookSection MovieScene.Default__MovieSceneHookSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneHookSection* UMovieSceneHookSection::GetDefaultObj()
{
	static class UMovieSceneHookSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneHookSection*>(UMovieSceneHookSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneSpawnSection
// (None)

class UClass* UMovieSceneSpawnSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSpawnSection");

	return Clss;
}


// MovieSceneSpawnSection MovieScene.Default__MovieSceneSpawnSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSpawnSection* UMovieSceneSpawnSection::GetDefaultObj()
{
	static class UMovieSceneSpawnSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSpawnSection*>(UMovieSceneSpawnSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.TestMovieSceneTrack
// (None)

class UClass* UTestMovieSceneTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestMovieSceneTrack");

	return Clss;
}


// TestMovieSceneTrack MovieScene.Default__TestMovieSceneTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UTestMovieSceneTrack* UTestMovieSceneTrack::GetDefaultObj()
{
	static class UTestMovieSceneTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UTestMovieSceneTrack*>(UTestMovieSceneTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.TestMovieSceneSection
// (None)

class UClass* UTestMovieSceneSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestMovieSceneSection");

	return Clss;
}


// TestMovieSceneSection MovieScene.Default__TestMovieSceneSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UTestMovieSceneSection* UTestMovieSceneSection::GetDefaultObj()
{
	static class UTestMovieSceneSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UTestMovieSceneSection*>(UTestMovieSceneSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.TestMovieSceneSequence
// (None)

class UClass* UTestMovieSceneSequence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestMovieSceneSequence");

	return Clss;
}


// TestMovieSceneSequence MovieScene.Default__TestMovieSceneSequence
// (Public, ClassDefaultObject, ArchetypeObject)

class UTestMovieSceneSequence* UTestMovieSceneSequence::GetDefaultObj()
{
	static class UTestMovieSceneSequence* Default = nullptr;

	if (!Default)
		Default = static_cast<UTestMovieSceneSequence*>(UTestMovieSceneSequence::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.TestMovieSceneSubTrack
// (None)

class UClass* UTestMovieSceneSubTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestMovieSceneSubTrack");

	return Clss;
}


// TestMovieSceneSubTrack MovieScene.Default__TestMovieSceneSubTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UTestMovieSceneSubTrack* UTestMovieSceneSubTrack::GetDefaultObj()
{
	static class UTestMovieSceneSubTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UTestMovieSceneSubTrack*>(UTestMovieSceneSubTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.TestMovieSceneSubSection
// (None)

class UClass* UTestMovieSceneSubSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestMovieSceneSubSection");

	return Clss;
}


// TestMovieSceneSubSection MovieScene.Default__TestMovieSceneSubSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UTestMovieSceneSubSection* UTestMovieSceneSubSection::GetDefaultObj()
{
	static class UTestMovieSceneSubSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UTestMovieSceneSubSection*>(UTestMovieSceneSubSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.TestMovieSceneEvalHookTrack
// (None)

class UClass* UTestMovieSceneEvalHookTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestMovieSceneEvalHookTrack");

	return Clss;
}


// TestMovieSceneEvalHookTrack MovieScene.Default__TestMovieSceneEvalHookTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UTestMovieSceneEvalHookTrack* UTestMovieSceneEvalHookTrack::GetDefaultObj()
{
	static class UTestMovieSceneEvalHookTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UTestMovieSceneEvalHookTrack*>(UTestMovieSceneEvalHookTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.TestMovieSceneEvalHookSection
// (None)

class UClass* UTestMovieSceneEvalHookSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestMovieSceneEvalHookSection");

	return Clss;
}


// TestMovieSceneEvalHookSection MovieScene.Default__TestMovieSceneEvalHookSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UTestMovieSceneEvalHookSection* UTestMovieSceneEvalHookSection::GetDefaultObj()
{
	static class UTestMovieSceneEvalHookSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UTestMovieSceneEvalHookSection*>(UTestMovieSceneEvalHookSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneSpawnTrack
// (None)

class UClass* UMovieSceneSpawnTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSpawnTrack");

	return Clss;
}


// MovieSceneSpawnTrack MovieScene.Default__MovieSceneSpawnTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSpawnTrack* UMovieSceneSpawnTrack::GetDefaultObj()
{
	static class UMovieSceneSpawnTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSpawnTrack*>(UMovieSceneSpawnTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieScene.MovieSceneRootInstantiatorSystem
// (None)

class UClass* UMovieSceneRootInstantiatorSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneRootInstantiatorSystem");

	return Clss;
}


// MovieSceneRootInstantiatorSystem MovieScene.Default__MovieSceneRootInstantiatorSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneRootInstantiatorSystem* UMovieSceneRootInstantiatorSystem::GetDefaultObj()
{
	static class UMovieSceneRootInstantiatorSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneRootInstantiatorSystem*>(UMovieSceneRootInstantiatorSystem::StaticClass()->DefaultObject);

	return Default;
}

}


