#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SequencerScripting.MovieSceneScriptingKey
// (None)

class UClass* UMovieSceneScriptingKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingKey");

	return Clss;
}


// MovieSceneScriptingKey SequencerScripting.Default__MovieSceneScriptingKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingKey* UMovieSceneScriptingKey::GetDefaultObj()
{
	static class UMovieSceneScriptingKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingKey*>(UMovieSceneScriptingKey::StaticClass()->DefaultObject);

	return Default;
}


// Class SequencerScripting.MovieSceneScriptingActorReferenceKey
// (None)

class UClass* UMovieSceneScriptingActorReferenceKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingActorReferenceKey");

	return Clss;
}


// MovieSceneScriptingActorReferenceKey SequencerScripting.Default__MovieSceneScriptingActorReferenceKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingActorReferenceKey* UMovieSceneScriptingActorReferenceKey::GetDefaultObj()
{
	static class UMovieSceneScriptingActorReferenceKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingActorReferenceKey*>(UMovieSceneScriptingActorReferenceKey::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetValue
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  InNewValue                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingActorReferenceKey::SetValue(const struct FMovieSceneObjectBindingID& InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceKey", "SetValue");

	Params::UMovieSceneScriptingActorReferenceKey_SetValue_Params Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                NewFrameNumber                                                   (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              SubFrame                                                         (ConstParm, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingActorReferenceKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceKey", "SetTime");

	Params::UMovieSceneScriptingActorReferenceKey_SetTime_Params Parms{};

	Parms.NewFrameNumber = NewFrameNumber;
	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMovieSceneObjectBindingID  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingActorReferenceKey::GetValue(const struct FMovieSceneObjectBindingID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceKey", "GetValue");

	Params::UMovieSceneScriptingActorReferenceKey_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESequenceTimeUnit       TimeUnit                                                         (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FFrameTime                  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingActorReferenceKey::GetTime(enum class ESequenceTimeUnit TimeUnit, const struct FFrameTime& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceKey", "GetTime");

	Params::UMovieSceneScriptingActorReferenceKey_GetTime_Params Parms{};

	Parms.TimeUnit = TimeUnit;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SequencerScripting.MovieSceneScriptingChannel
// (None)

class UClass* UMovieSceneScriptingChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingChannel");

	return Clss;
}


// MovieSceneScriptingChannel SequencerScripting.Default__MovieSceneScriptingChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingChannel* UMovieSceneScriptingChannel::GetDefaultObj()
{
	static class UMovieSceneScriptingChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingChannel*>(UMovieSceneScriptingChannel::StaticClass()->DefaultObject);

	return Default;
}


// Class SequencerScripting.MovieSceneScriptingActorReferenceChannel
// (None)

class UClass* UMovieSceneScriptingActorReferenceChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingActorReferenceChannel");

	return Clss;
}


// MovieSceneScriptingActorReferenceChannel SequencerScripting.Default__MovieSceneScriptingActorReferenceChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingActorReferenceChannel* UMovieSceneScriptingActorReferenceChannel::GetDefaultObj()
{
	static class UMovieSceneScriptingActorReferenceChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingActorReferenceChannel*>(UMovieSceneScriptingActorReferenceChannel::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.SetDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  InDefaultValue                                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingActorReferenceChannel::SetDefault(const struct FMovieSceneObjectBindingID& InDefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceChannel", "SetDefault");

	Params::UMovieSceneScriptingActorReferenceChannel_SetDefault_Params Parms{};

	Parms.InDefaultValue = InDefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneScriptingKey*     Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void UMovieSceneScriptingActorReferenceChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceChannel", "RemoveKey");

	Params::UMovieSceneScriptingActorReferenceChannel_RemoveKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneScriptingActorReferenceChannel::RemoveDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceChannel", "RemoveDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.HasDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingActorReferenceChannel::HasDefault(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceChannel", "HasDefault");

	Params::UMovieSceneScriptingActorReferenceChannel_HasDefault_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetKeys
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMovieSceneScriptingKey*>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingActorReferenceChannel::GetKeys(const TArray<class UMovieSceneScriptingKey*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceChannel", "GetKeys");

	Params::UMovieSceneScriptingActorReferenceChannel_GetKeys_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMovieSceneObjectBindingID  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingActorReferenceChannel::GetDefault(const struct FMovieSceneObjectBindingID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceChannel", "GetDefault");

	Params::UMovieSceneScriptingActorReferenceChannel_GetDefault_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.AddKey
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                InTime                                                           (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// struct FMovieSceneObjectBindingID  NewValue                                                         (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// float                              SubFrame                                                         (ConstParm, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneScriptingActorReferenceKey*ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FMovieSceneObjectBindingID UMovieSceneScriptingActorReferenceChannel::AddKey(struct FFrameNumber* InTime, float SubFrame, enum class ESequenceTimeUnit TimeUnit, class UMovieSceneScriptingActorReferenceKey* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceChannel", "AddKey");

	Params::UMovieSceneScriptingActorReferenceChannel_AddKey_Params Parms{};

	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTime != nullptr)
		*InTime = std::move(Parms.InTime);

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneScriptingBoolKey
// (None)

class UClass* UMovieSceneScriptingBoolKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingBoolKey");

	return Clss;
}


// MovieSceneScriptingBoolKey SequencerScripting.Default__MovieSceneScriptingBoolKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingBoolKey* UMovieSceneScriptingBoolKey::GetDefaultObj()
{
	static class UMovieSceneScriptingBoolKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingBoolKey*>(UMovieSceneScriptingBoolKey::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingBoolKey.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InNewValue                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingBoolKey::SetValue(bool InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingBoolKey", "SetValue");

	Params::UMovieSceneScriptingBoolKey_SetValue_Params Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingBoolKey.SetTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                NewFrameNumber                                                   (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              SubFrame                                                         (ConstParm, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingBoolKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingBoolKey", "SetTime");

	Params::UMovieSceneScriptingBoolKey_SetTime_Params Parms{};

	Parms.NewFrameNumber = NewFrameNumber;
	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingBoolKey.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingBoolKey::GetValue(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingBoolKey", "GetValue");

	Params::UMovieSceneScriptingBoolKey_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingBoolKey.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESequenceTimeUnit       TimeUnit                                                         (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FFrameTime                  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingBoolKey::GetTime(enum class ESequenceTimeUnit TimeUnit, const struct FFrameTime& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingBoolKey", "GetTime");

	Params::UMovieSceneScriptingBoolKey_GetTime_Params Parms{};

	Parms.TimeUnit = TimeUnit;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SequencerScripting.MovieSceneScriptingBoolChannel
// (None)

class UClass* UMovieSceneScriptingBoolChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingBoolChannel");

	return Clss;
}


// MovieSceneScriptingBoolChannel SequencerScripting.Default__MovieSceneScriptingBoolChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingBoolChannel* UMovieSceneScriptingBoolChannel::GetDefaultObj()
{
	static class UMovieSceneScriptingBoolChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingBoolChannel*>(UMovieSceneScriptingBoolChannel::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.SetDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InDefaultValue                                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingBoolChannel::SetDefault(bool InDefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "SetDefault");

	Params::UMovieSceneScriptingBoolChannel_SetDefault_Params Parms{};

	Parms.InDefaultValue = InDefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneScriptingKey*     Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void UMovieSceneScriptingBoolChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "RemoveKey");

	Params::UMovieSceneScriptingBoolChannel_RemoveKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneScriptingBoolChannel::RemoveDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "RemoveDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.HasDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingBoolChannel::HasDefault(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "HasDefault");

	Params::UMovieSceneScriptingBoolChannel_HasDefault_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.GetNumKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingBoolChannel::GetNumKeys(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "GetNumKeys");

	Params::UMovieSceneScriptingBoolChannel_GetNumKeys_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.GetKeys
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMovieSceneScriptingKey*>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingBoolChannel::GetKeys(const TArray<class UMovieSceneScriptingKey*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "GetKeys");

	Params::UMovieSceneScriptingBoolChannel_GetKeys_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.GetDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingBoolChannel::GetDefault(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "GetDefault");

	Params::UMovieSceneScriptingBoolChannel_GetDefault_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.EvaluateKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// struct FFrameRate                  FrameRate                                                        (ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm)
// TArray<bool>                       ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FFrameRate UMovieSceneScriptingBoolChannel::EvaluateKeys(const TArray<bool>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "EvaluateKeys");

	Params::UMovieSceneScriptingBoolChannel_EvaluateKeys_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.ComputeEffectiveRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSequencerScriptingRange    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingBoolChannel::ComputeEffectiveRange(const struct FSequencerScriptingRange& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "ComputeEffectiveRange");

	Params::UMovieSceneScriptingBoolChannel_ComputeEffectiveRange_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.AddKey
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                InTime                                                           (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// bool                               NewValue                                                         (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// float                              SubFrame                                                         (ConstParm, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneScriptingBoolKey* ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneScriptingBoolChannel::AddKey(struct FFrameNumber* InTime, float SubFrame, enum class ESequenceTimeUnit TimeUnit, class UMovieSceneScriptingBoolKey* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "AddKey");

	Params::UMovieSceneScriptingBoolChannel_AddKey_Params Parms{};

	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTime != nullptr)
		*InTime = std::move(Parms.InTime);

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneScriptingByteKey
// (None)

class UClass* UMovieSceneScriptingByteKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingByteKey");

	return Clss;
}


// MovieSceneScriptingByteKey SequencerScripting.Default__MovieSceneScriptingByteKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingByteKey* UMovieSceneScriptingByteKey::GetDefaultObj()
{
	static class UMovieSceneScriptingByteKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingByteKey*>(UMovieSceneScriptingByteKey::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingByteKey.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// uint8                              InNewValue                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingByteKey::SetValue(uint8 InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingByteKey", "SetValue");

	Params::UMovieSceneScriptingByteKey_SetValue_Params Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingByteKey.SetTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                NewFrameNumber                                                   (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              SubFrame                                                         (ConstParm, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingByteKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingByteKey", "SetTime");

	Params::UMovieSceneScriptingByteKey_SetTime_Params Parms{};

	Parms.NewFrameNumber = NewFrameNumber;
	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingByteKey.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingByteKey::GetValue(uint8 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingByteKey", "GetValue");

	Params::UMovieSceneScriptingByteKey_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingByteKey.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESequenceTimeUnit       TimeUnit                                                         (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FFrameTime                  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingByteKey::GetTime(enum class ESequenceTimeUnit TimeUnit, const struct FFrameTime& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingByteKey", "GetTime");

	Params::UMovieSceneScriptingByteKey_GetTime_Params Parms{};

	Parms.TimeUnit = TimeUnit;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SequencerScripting.MovieSceneScriptingByteChannel
// (None)

class UClass* UMovieSceneScriptingByteChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingByteChannel");

	return Clss;
}


// MovieSceneScriptingByteChannel SequencerScripting.Default__MovieSceneScriptingByteChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingByteChannel* UMovieSceneScriptingByteChannel::GetDefaultObj()
{
	static class UMovieSceneScriptingByteChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingByteChannel*>(UMovieSceneScriptingByteChannel::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingByteChannel.SetDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// uint8                              InDefaultValue                                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingByteChannel::SetDefault(uint8 InDefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingByteChannel", "SetDefault");

	Params::UMovieSceneScriptingByteChannel_SetDefault_Params Parms{};

	Parms.InDefaultValue = InDefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneScriptingKey*     Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void UMovieSceneScriptingByteChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingByteChannel", "RemoveKey");

	Params::UMovieSceneScriptingByteChannel_RemoveKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneScriptingByteChannel::RemoveDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingByteChannel", "RemoveDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingByteChannel.HasDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingByteChannel::HasDefault(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingByteChannel", "HasDefault");

	Params::UMovieSceneScriptingByteChannel_HasDefault_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingByteChannel.GetKeys
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMovieSceneScriptingKey*>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingByteChannel::GetKeys(const TArray<class UMovieSceneScriptingKey*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingByteChannel", "GetKeys");

	Params::UMovieSceneScriptingByteChannel_GetKeys_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingByteChannel.GetDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingByteChannel::GetDefault(uint8 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingByteChannel", "GetDefault");

	Params::UMovieSceneScriptingByteChannel_GetDefault_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingByteChannel.AddKey
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                InTime                                                           (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// uint8                              NewValue                                                         (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// float                              SubFrame                                                         (ConstParm, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EMovieSceneKeyInterpolationInInterpolation                                                  (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneScriptingByteKey* ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

uint8 UMovieSceneScriptingByteChannel::AddKey(struct FFrameNumber* InTime, float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation, class UMovieSceneScriptingByteKey* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingByteChannel", "AddKey");

	Params::UMovieSceneScriptingByteChannel_AddKey_Params Parms{};

	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;
	Parms.InInterpolation = InInterpolation;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTime != nullptr)
		*InTime = std::move(Parms.InTime);

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneScriptingDoubleKey
// (None)

class UClass* UMovieSceneScriptingDoubleKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingDoubleKey");

	return Clss;
}


// MovieSceneScriptingDoubleKey SequencerScripting.Default__MovieSceneScriptingDoubleKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingDoubleKey* UMovieSceneScriptingDoubleKey::GetDefaultObj()
{
	static class UMovieSceneScriptingDoubleKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingDoubleKey*>(UMovieSceneScriptingDoubleKey::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// double                             InNewValue                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingDoubleKey::SetValue(double InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "SetValue");

	Params::UMovieSceneScriptingDoubleKey_SetValue_Params Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                NewFrameNumber                                                   (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              SubFrame                                                         (ConstParm, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingDoubleKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "SetTime");

	Params::UMovieSceneScriptingDoubleKey_SetTime_Params Parms{};

	Parms.NewFrameNumber = NewFrameNumber;
	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentWeightMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ERichCurveTangentWeightModeInNewValue                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingDoubleKey::SetTangentWeightMode(enum class ERichCurveTangentWeightMode InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "SetTangentWeightMode");

	Params::UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Params Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ERichCurveTangentMode   InNewValue                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingDoubleKey::SetTangentMode(enum class ERichCurveTangentMode InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "SetTangentMode");

	Params::UMovieSceneScriptingDoubleKey_SetTangentMode_Params Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangentWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InNewValue                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingDoubleKey::SetLeaveTangentWeight(float InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "SetLeaveTangentWeight");

	Params::UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Params Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InNewValue                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingDoubleKey::SetLeaveTangent(float InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "SetLeaveTangent");

	Params::UMovieSceneScriptingDoubleKey_SetLeaveTangent_Params Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetInterpolationMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ERichCurveInterpMode    InNewValue                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingDoubleKey::SetInterpolationMode(enum class ERichCurveInterpMode InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "SetInterpolationMode");

	Params::UMovieSceneScriptingDoubleKey_SetInterpolationMode_Params Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangentWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InNewValue                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingDoubleKey::SetArriveTangentWeight(float InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "SetArriveTangentWeight");

	Params::UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Params Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InNewValue                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingDoubleKey::SetArriveTangent(float InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "SetArriveTangent");

	Params::UMovieSceneScriptingDoubleKey_SetArriveTangent_Params Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingDoubleKey::GetValue(double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "GetValue");

	Params::UMovieSceneScriptingDoubleKey_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESequenceTimeUnit       TimeUnit                                                         (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FFrameTime                  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingDoubleKey::GetTime(enum class ESequenceTimeUnit TimeUnit, const struct FFrameTime& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "GetTime");

	Params::UMovieSceneScriptingDoubleKey_GetTime_Params Parms{};

	Parms.TimeUnit = TimeUnit;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentWeightMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERichCurveTangentWeightModeReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingDoubleKey::GetTangentWeightMode(enum class ERichCurveTangentWeightMode ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "GetTangentWeightMode");

	Params::UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERichCurveTangentMode   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingDoubleKey::GetTangentMode(enum class ERichCurveTangentMode ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "GetTangentMode");

	Params::UMovieSceneScriptingDoubleKey_GetTangentMode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangentWeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingDoubleKey::GetLeaveTangentWeight(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "GetLeaveTangentWeight");

	Params::UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingDoubleKey::GetLeaveTangent(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "GetLeaveTangent");

	Params::UMovieSceneScriptingDoubleKey_GetLeaveTangent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetInterpolationMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERichCurveInterpMode    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingDoubleKey::GetInterpolationMode(enum class ERichCurveInterpMode ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "GetInterpolationMode");

	Params::UMovieSceneScriptingDoubleKey_GetInterpolationMode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangentWeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingDoubleKey::GetArriveTangentWeight(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "GetArriveTangentWeight");

	Params::UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingDoubleKey::GetArriveTangent(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "GetArriveTangent");

	Params::UMovieSceneScriptingDoubleKey_GetArriveTangent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SequencerScripting.MovieSceneScriptingDoubleChannel
// (None)

class UClass* UMovieSceneScriptingDoubleChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingDoubleChannel");

	return Clss;
}


// MovieSceneScriptingDoubleChannel SequencerScripting.Default__MovieSceneScriptingDoubleChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingDoubleChannel* UMovieSceneScriptingDoubleChannel::GetDefaultObj()
{
	static class UMovieSceneScriptingDoubleChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingDoubleChannel*>(UMovieSceneScriptingDoubleChannel::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPreInfinityExtrapolation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ERichCurveExtrapolation InExtrapolation                                                  (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingDoubleChannel::SetPreInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "SetPreInfinityExtrapolation");

	Params::UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Params Parms{};

	Parms.InExtrapolation = InExtrapolation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPostInfinityExtrapolation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ERichCurveExtrapolation InExtrapolation                                                  (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingDoubleChannel::SetPostInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "SetPostInfinityExtrapolation");

	Params::UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Params Parms{};

	Parms.InExtrapolation = InExtrapolation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// double                             InDefaultValue                                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingDoubleChannel::SetDefault(double InDefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "SetDefault");

	Params::UMovieSceneScriptingDoubleChannel_SetDefault_Params Parms{};

	Parms.InDefaultValue = InDefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneScriptingKey*     Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void UMovieSceneScriptingDoubleChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "RemoveKey");

	Params::UMovieSceneScriptingDoubleChannel_RemoveKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneScriptingDoubleChannel::RemoveDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "RemoveDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.HasDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingDoubleChannel::HasDefault(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "HasDefault");

	Params::UMovieSceneScriptingDoubleChannel_HasDefault_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPreInfinityExtrapolation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERichCurveExtrapolation ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingDoubleChannel::GetPreInfinityExtrapolation(enum class ERichCurveExtrapolation ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "GetPreInfinityExtrapolation");

	Params::UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPostInfinityExtrapolation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERichCurveExtrapolation ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingDoubleChannel::GetPostInfinityExtrapolation(enum class ERichCurveExtrapolation ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "GetPostInfinityExtrapolation");

	Params::UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetNumKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingDoubleChannel::GetNumKeys(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "GetNumKeys");

	Params::UMovieSceneScriptingDoubleChannel_GetNumKeys_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetKeys
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMovieSceneScriptingKey*>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingDoubleChannel::GetKeys(const TArray<class UMovieSceneScriptingKey*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "GetKeys");

	Params::UMovieSceneScriptingDoubleChannel_GetKeys_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingDoubleChannel::GetDefault(double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "GetDefault");

	Params::UMovieSceneScriptingDoubleChannel_GetDefault_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.EvaluateKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// struct FFrameRate                  FrameRate                                                        (ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm)
// TArray<double>                     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FFrameRate UMovieSceneScriptingDoubleChannel::EvaluateKeys(const TArray<double>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "EvaluateKeys");

	Params::UMovieSceneScriptingDoubleChannel_EvaluateKeys_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.ComputeEffectiveRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSequencerScriptingRange    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingDoubleChannel::ComputeEffectiveRange(const struct FSequencerScriptingRange& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "ComputeEffectiveRange");

	Params::UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.AddKey
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                InTime                                                           (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// double                             NewValue                                                         (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// float                              SubFrame                                                         (ConstParm, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EMovieSceneKeyInterpolationInInterpolation                                                  (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneScriptingDoubleKey*ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

double UMovieSceneScriptingDoubleChannel::AddKey(struct FFrameNumber* InTime, float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation, class UMovieSceneScriptingDoubleKey* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "AddKey");

	Params::UMovieSceneScriptingDoubleChannel_AddKey_Params Parms{};

	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;
	Parms.InInterpolation = InInterpolation;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTime != nullptr)
		*InTime = std::move(Parms.InTime);

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneScriptingEventKey
// (None)

class UClass* UMovieSceneScriptingEventKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingEventKey");

	return Clss;
}


// MovieSceneScriptingEventKey SequencerScripting.Default__MovieSceneScriptingEventKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingEventKey* UMovieSceneScriptingEventKey::GetDefaultObj()
{
	static class UMovieSceneScriptingEventKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingEventKey*>(UMovieSceneScriptingEventKey::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingEventKey.SetValue
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneEvent            InNewValue                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingEventKey::SetValue(const struct FMovieSceneEvent& InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingEventKey", "SetValue");

	Params::UMovieSceneScriptingEventKey_SetValue_Params Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingEventKey.SetTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                NewFrameNumber                                                   (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              SubFrame                                                         (ConstParm, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingEventKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingEventKey", "SetTime");

	Params::UMovieSceneScriptingEventKey_SetTime_Params Parms{};

	Parms.NewFrameNumber = NewFrameNumber;
	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingEventKey.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMovieSceneEvent            ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingEventKey::GetValue(const struct FMovieSceneEvent& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingEventKey", "GetValue");

	Params::UMovieSceneScriptingEventKey_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingEventKey.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESequenceTimeUnit       TimeUnit                                                         (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FFrameTime                  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingEventKey::GetTime(enum class ESequenceTimeUnit TimeUnit, const struct FFrameTime& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingEventKey", "GetTime");

	Params::UMovieSceneScriptingEventKey_GetTime_Params Parms{};

	Parms.TimeUnit = TimeUnit;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SequencerScripting.MovieSceneScriptingEventChannel
// (None)

class UClass* UMovieSceneScriptingEventChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingEventChannel");

	return Clss;
}


// MovieSceneScriptingEventChannel SequencerScripting.Default__MovieSceneScriptingEventChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingEventChannel* UMovieSceneScriptingEventChannel::GetDefaultObj()
{
	static class UMovieSceneScriptingEventChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingEventChannel*>(UMovieSceneScriptingEventChannel::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingEventChannel.RemoveKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneScriptingKey*     Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void UMovieSceneScriptingEventChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingEventChannel", "RemoveKey");

	Params::UMovieSceneScriptingEventChannel_RemoveKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingEventChannel.GetKeys
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMovieSceneScriptingKey*>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingEventChannel::GetKeys(const TArray<class UMovieSceneScriptingKey*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingEventChannel", "GetKeys");

	Params::UMovieSceneScriptingEventChannel_GetKeys_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingEventChannel.AddKey
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                InTime                                                           (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// struct FMovieSceneEvent            NewValue                                                         (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// float                              SubFrame                                                         (ConstParm, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneScriptingEventKey*ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FMovieSceneEvent UMovieSceneScriptingEventChannel::AddKey(struct FFrameNumber* InTime, float SubFrame, enum class ESequenceTimeUnit TimeUnit, class UMovieSceneScriptingEventKey* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingEventChannel", "AddKey");

	Params::UMovieSceneScriptingEventChannel_AddKey_Params Parms{};

	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTime != nullptr)
		*InTime = std::move(Parms.InTime);

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneScriptingFloatKey
// (None)

class UClass* UMovieSceneScriptingFloatKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingFloatKey");

	return Clss;
}


// MovieSceneScriptingFloatKey SequencerScripting.Default__MovieSceneScriptingFloatKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingFloatKey* UMovieSceneScriptingFloatKey::GetDefaultObj()
{
	static class UMovieSceneScriptingFloatKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingFloatKey*>(UMovieSceneScriptingFloatKey::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingFloatKey.SetValue
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InNewValue                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingFloatKey::SetValue(float InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "SetValue");

	Params::UMovieSceneScriptingFloatKey_SetValue_Params Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.SetTime
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                NewFrameNumber                                                   (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              SubFrame                                                         (ConstParm, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingFloatKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "SetTime");

	Params::UMovieSceneScriptingFloatKey_SetTime_Params Parms{};

	Parms.NewFrameNumber = NewFrameNumber;
	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentWeightMode
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class ERichCurveTangentWeightModeInNewValue                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingFloatKey::SetTangentWeightMode(enum class ERichCurveTangentWeightMode InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "SetTangentWeightMode");

	Params::UMovieSceneScriptingFloatKey_SetTangentWeightMode_Params Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentMode
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class ERichCurveTangentMode   InNewValue                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingFloatKey::SetTangentMode(enum class ERichCurveTangentMode InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "SetTangentMode");

	Params::UMovieSceneScriptingFloatKey_SetTangentMode_Params Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangentWeight
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InNewValue                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingFloatKey::SetLeaveTangentWeight(float InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "SetLeaveTangentWeight");

	Params::UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Params Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangent
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InNewValue                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingFloatKey::SetLeaveTangent(float InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "SetLeaveTangent");

	Params::UMovieSceneScriptingFloatKey_SetLeaveTangent_Params Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.SetInterpolationMode
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class ERichCurveInterpMode    InNewValue                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingFloatKey::SetInterpolationMode(enum class ERichCurveInterpMode InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "SetInterpolationMode");

	Params::UMovieSceneScriptingFloatKey_SetInterpolationMode_Params Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangentWeight
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InNewValue                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingFloatKey::SetArriveTangentWeight(float InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "SetArriveTangentWeight");

	Params::UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Params Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangent
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InNewValue                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingFloatKey::SetArriveTangent(float InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "SetArriveTangent");

	Params::UMovieSceneScriptingFloatKey_SetArriveTangent_Params Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.GetValue
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingFloatKey::GetValue(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "GetValue");

	Params::UMovieSceneScriptingFloatKey_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESequenceTimeUnit       TimeUnit                                                         (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FFrameTime                  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingFloatKey::GetTime(enum class ESequenceTimeUnit TimeUnit, const struct FFrameTime& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "GetTime");

	Params::UMovieSceneScriptingFloatKey_GetTime_Params Parms{};

	Parms.TimeUnit = TimeUnit;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERichCurveTangentWeightModeReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingFloatKey::GetTangentWeightMode(enum class ERichCurveTangentWeightMode ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "GetTangentWeightMode");

	Params::UMovieSceneScriptingFloatKey_GetTangentWeightMode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERichCurveTangentMode   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingFloatKey::GetTangentMode(enum class ERichCurveTangentMode ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "GetTangentMode");

	Params::UMovieSceneScriptingFloatKey_GetTangentMode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingFloatKey::GetLeaveTangentWeight(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "GetLeaveTangentWeight");

	Params::UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingFloatKey::GetLeaveTangent(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "GetLeaveTangent");

	Params::UMovieSceneScriptingFloatKey_GetLeaveTangent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERichCurveInterpMode    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingFloatKey::GetInterpolationMode(enum class ERichCurveInterpMode ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "GetInterpolationMode");

	Params::UMovieSceneScriptingFloatKey_GetInterpolationMode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingFloatKey::GetArriveTangentWeight(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "GetArriveTangentWeight");

	Params::UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingFloatKey::GetArriveTangent(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "GetArriveTangent");

	Params::UMovieSceneScriptingFloatKey_GetArriveTangent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SequencerScripting.MovieSceneScriptingActualFloatKey
// (None)

class UClass* UMovieSceneScriptingActualFloatKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingActualFloatKey");

	return Clss;
}


// MovieSceneScriptingActualFloatKey SequencerScripting.Default__MovieSceneScriptingActualFloatKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingActualFloatKey* UMovieSceneScriptingActualFloatKey::GetDefaultObj()
{
	static class UMovieSceneScriptingActualFloatKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingActualFloatKey*>(UMovieSceneScriptingActualFloatKey::StaticClass()->DefaultObject);

	return Default;
}


// Class SequencerScripting.MovieSceneScriptingDoubleAsFloatKey
// (None)

class UClass* UMovieSceneScriptingDoubleAsFloatKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingDoubleAsFloatKey");

	return Clss;
}


// MovieSceneScriptingDoubleAsFloatKey SequencerScripting.Default__MovieSceneScriptingDoubleAsFloatKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingDoubleAsFloatKey* UMovieSceneScriptingDoubleAsFloatKey::GetDefaultObj()
{
	static class UMovieSceneScriptingDoubleAsFloatKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingDoubleAsFloatKey*>(UMovieSceneScriptingDoubleAsFloatKey::StaticClass()->DefaultObject);

	return Default;
}


// Class SequencerScripting.MovieSceneScriptingFloatChannel
// (None)

class UClass* UMovieSceneScriptingFloatChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingFloatChannel");

	return Clss;
}


// MovieSceneScriptingFloatChannel SequencerScripting.Default__MovieSceneScriptingFloatChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingFloatChannel* UMovieSceneScriptingFloatChannel::GetDefaultObj()
{
	static class UMovieSceneScriptingFloatChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingFloatChannel*>(UMovieSceneScriptingFloatChannel::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPreInfinityExtrapolation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ERichCurveExtrapolation InExtrapolation                                                  (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingFloatChannel::SetPreInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "SetPreInfinityExtrapolation");

	Params::UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Params Parms{};

	Parms.InExtrapolation = InExtrapolation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPostInfinityExtrapolation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ERichCurveExtrapolation InExtrapolation                                                  (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingFloatChannel::SetPostInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "SetPostInfinityExtrapolation");

	Params::UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Params Parms{};

	Parms.InExtrapolation = InExtrapolation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.SetDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDefaultValue                                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingFloatChannel::SetDefault(float InDefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "SetDefault");

	Params::UMovieSceneScriptingFloatChannel_SetDefault_Params Parms{};

	Parms.InDefaultValue = InDefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneScriptingKey*     Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void UMovieSceneScriptingFloatChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "RemoveKey");

	Params::UMovieSceneScriptingFloatChannel_RemoveKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneScriptingFloatChannel::RemoveDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "RemoveDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.HasDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingFloatChannel::HasDefault(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "HasDefault");

	Params::UMovieSceneScriptingFloatChannel_HasDefault_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERichCurveExtrapolation ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingFloatChannel::GetPreInfinityExtrapolation(enum class ERichCurveExtrapolation ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "GetPreInfinityExtrapolation");

	Params::UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERichCurveExtrapolation ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingFloatChannel::GetPostInfinityExtrapolation(enum class ERichCurveExtrapolation ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "GetPostInfinityExtrapolation");

	Params::UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingFloatChannel::GetNumKeys(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "GetNumKeys");

	Params::UMovieSceneScriptingFloatChannel_GetNumKeys_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetKeys
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMovieSceneScriptingKey*>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingFloatChannel::GetKeys(const TArray<class UMovieSceneScriptingKey*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "GetKeys");

	Params::UMovieSceneScriptingFloatChannel_GetKeys_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingFloatChannel::GetDefault(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "GetDefault");

	Params::UMovieSceneScriptingFloatChannel_GetDefault_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.EvaluateKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// struct FFrameRate                  FrameRate                                                        (ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm)
// TArray<float>                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FFrameRate UMovieSceneScriptingFloatChannel::EvaluateKeys(const TArray<float>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "EvaluateKeys");

	Params::UMovieSceneScriptingFloatChannel_EvaluateKeys_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSequencerScriptingRange    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingFloatChannel::ComputeEffectiveRange(const struct FSequencerScriptingRange& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "ComputeEffectiveRange");

	Params::UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.AddKey
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                InTime                                                           (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// float                              NewValue                                                         (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// float                              SubFrame                                                         (ConstParm, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EMovieSceneKeyInterpolationInInterpolation                                                  (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneScriptingFloatKey*ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UMovieSceneScriptingFloatChannel::AddKey(struct FFrameNumber* InTime, float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation, class UMovieSceneScriptingFloatKey* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "AddKey");

	Params::UMovieSceneScriptingFloatChannel_AddKey_Params Parms{};

	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;
	Parms.InInterpolation = InInterpolation;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTime != nullptr)
		*InTime = std::move(Parms.InTime);

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneScriptingIntegerKey
// (None)

class UClass* UMovieSceneScriptingIntegerKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingIntegerKey");

	return Clss;
}


// MovieSceneScriptingIntegerKey SequencerScripting.Default__MovieSceneScriptingIntegerKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingIntegerKey* UMovieSceneScriptingIntegerKey::GetDefaultObj()
{
	static class UMovieSceneScriptingIntegerKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingIntegerKey*>(UMovieSceneScriptingIntegerKey::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingIntegerKey.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InNewValue                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingIntegerKey::SetValue(int32 InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingIntegerKey", "SetValue");

	Params::UMovieSceneScriptingIntegerKey_SetValue_Params Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingIntegerKey.SetTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                NewFrameNumber                                                   (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              SubFrame                                                         (ConstParm, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingIntegerKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingIntegerKey", "SetTime");

	Params::UMovieSceneScriptingIntegerKey_SetTime_Params Parms{};

	Parms.NewFrameNumber = NewFrameNumber;
	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingIntegerKey.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingIntegerKey::GetValue(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingIntegerKey", "GetValue");

	Params::UMovieSceneScriptingIntegerKey_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingIntegerKey.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESequenceTimeUnit       TimeUnit                                                         (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FFrameTime                  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingIntegerKey::GetTime(enum class ESequenceTimeUnit TimeUnit, const struct FFrameTime& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingIntegerKey", "GetTime");

	Params::UMovieSceneScriptingIntegerKey_GetTime_Params Parms{};

	Parms.TimeUnit = TimeUnit;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SequencerScripting.MovieSceneScriptingIntegerChannel
// (None)

class UClass* UMovieSceneScriptingIntegerChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingIntegerChannel");

	return Clss;
}


// MovieSceneScriptingIntegerChannel SequencerScripting.Default__MovieSceneScriptingIntegerChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingIntegerChannel* UMovieSceneScriptingIntegerChannel::GetDefaultObj()
{
	static class UMovieSceneScriptingIntegerChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingIntegerChannel*>(UMovieSceneScriptingIntegerChannel::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingIntegerChannel.SetDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InDefaultValue                                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingIntegerChannel::SetDefault(int32 InDefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingIntegerChannel", "SetDefault");

	Params::UMovieSceneScriptingIntegerChannel_SetDefault_Params Parms{};

	Parms.InDefaultValue = InDefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneScriptingKey*     Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void UMovieSceneScriptingIntegerChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingIntegerChannel", "RemoveKey");

	Params::UMovieSceneScriptingIntegerChannel_RemoveKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneScriptingIntegerChannel::RemoveDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingIntegerChannel", "RemoveDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingIntegerChannel.HasDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingIntegerChannel::HasDefault(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingIntegerChannel", "HasDefault");

	Params::UMovieSceneScriptingIntegerChannel_HasDefault_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetKeys
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMovieSceneScriptingKey*>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingIntegerChannel::GetKeys(const TArray<class UMovieSceneScriptingKey*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingIntegerChannel", "GetKeys");

	Params::UMovieSceneScriptingIntegerChannel_GetKeys_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingIntegerChannel::GetDefault(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingIntegerChannel", "GetDefault");

	Params::UMovieSceneScriptingIntegerChannel_GetDefault_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingIntegerChannel.AddKey
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                InTime                                                           (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// int32                              NewValue                                                         (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// float                              SubFrame                                                         (ConstParm, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneScriptingIntegerKey*ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMovieSceneScriptingIntegerChannel::AddKey(struct FFrameNumber* InTime, float SubFrame, enum class ESequenceTimeUnit TimeUnit, class UMovieSceneScriptingIntegerKey* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingIntegerChannel", "AddKey");

	Params::UMovieSceneScriptingIntegerChannel_AddKey_Params Parms{};

	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTime != nullptr)
		*InTime = std::move(Parms.InTime);

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneScriptingObjectPathKey
// (None)

class UClass* UMovieSceneScriptingObjectPathKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingObjectPathKey");

	return Clss;
}


// MovieSceneScriptingObjectPathKey SequencerScripting.Default__MovieSceneScriptingObjectPathKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingObjectPathKey* UMovieSceneScriptingObjectPathKey::GetDefaultObj()
{
	static class UMovieSceneScriptingObjectPathKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingObjectPathKey*>(UMovieSceneScriptingObjectPathKey::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InNewValue                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingObjectPathKey::SetValue(class UObject* InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathKey", "SetValue");

	Params::UMovieSceneScriptingObjectPathKey_SetValue_Params Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                NewFrameNumber                                                   (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              SubFrame                                                         (ConstParm, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingObjectPathKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathKey", "SetTime");

	Params::UMovieSceneScriptingObjectPathKey_SetTime_Params Parms{};

	Parms.NewFrameNumber = NewFrameNumber;
	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingObjectPathKey::GetValue(class UObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathKey", "GetValue");

	Params::UMovieSceneScriptingObjectPathKey_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESequenceTimeUnit       TimeUnit                                                         (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FFrameTime                  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingObjectPathKey::GetTime(enum class ESequenceTimeUnit TimeUnit, const struct FFrameTime& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathKey", "GetTime");

	Params::UMovieSceneScriptingObjectPathKey_GetTime_Params Parms{};

	Parms.TimeUnit = TimeUnit;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SequencerScripting.MovieSceneScriptingObjectPathChannel
// (None)

class UClass* UMovieSceneScriptingObjectPathChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingObjectPathChannel");

	return Clss;
}


// MovieSceneScriptingObjectPathChannel SequencerScripting.Default__MovieSceneScriptingObjectPathChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingObjectPathChannel* UMovieSceneScriptingObjectPathChannel::GetDefaultObj()
{
	static class UMovieSceneScriptingObjectPathChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingObjectPathChannel*>(UMovieSceneScriptingObjectPathChannel::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.SetDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InDefaultValue                                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingObjectPathChannel::SetDefault(class UObject* InDefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathChannel", "SetDefault");

	Params::UMovieSceneScriptingObjectPathChannel_SetDefault_Params Parms{};

	Parms.InDefaultValue = InDefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneScriptingKey*     Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void UMovieSceneScriptingObjectPathChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathChannel", "RemoveKey");

	Params::UMovieSceneScriptingObjectPathChannel_RemoveKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneScriptingObjectPathChannel::RemoveDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathChannel", "RemoveDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.HasDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingObjectPathChannel::HasDefault(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathChannel", "HasDefault");

	Params::UMovieSceneScriptingObjectPathChannel_HasDefault_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetKeys
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMovieSceneScriptingKey*>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingObjectPathChannel::GetKeys(const TArray<class UMovieSceneScriptingKey*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathChannel", "GetKeys");

	Params::UMovieSceneScriptingObjectPathChannel_GetKeys_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingObjectPathChannel::GetDefault(class UObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathChannel", "GetDefault");

	Params::UMovieSceneScriptingObjectPathChannel_GetDefault_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.AddKey
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                InTime                                                           (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// class UObject*                     NewValue                                                         (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// float                              SubFrame                                                         (ConstParm, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneScriptingObjectPathKey*ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UMovieSceneScriptingObjectPathChannel::AddKey(struct FFrameNumber* InTime, float SubFrame, enum class ESequenceTimeUnit TimeUnit, class UMovieSceneScriptingObjectPathKey* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathChannel", "AddKey");

	Params::UMovieSceneScriptingObjectPathChannel_AddKey_Params Parms{};

	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTime != nullptr)
		*InTime = std::move(Parms.InTime);

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneScriptingStringKey
// (None)

class UClass* UMovieSceneScriptingStringKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingStringKey");

	return Clss;
}


// MovieSceneScriptingStringKey SequencerScripting.Default__MovieSceneScriptingStringKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingStringKey* UMovieSceneScriptingStringKey::GetDefaultObj()
{
	static class UMovieSceneScriptingStringKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingStringKey*>(UMovieSceneScriptingStringKey::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingStringKey.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InNewValue                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingStringKey::SetValue(const class FString& InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingStringKey", "SetValue");

	Params::UMovieSceneScriptingStringKey_SetValue_Params Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingStringKey.SetTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                NewFrameNumber                                                   (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              SubFrame                                                         (ConstParm, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingStringKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingStringKey", "SetTime");

	Params::UMovieSceneScriptingStringKey_SetTime_Params Parms{};

	Parms.NewFrameNumber = NewFrameNumber;
	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingStringKey.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingStringKey::GetValue(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingStringKey", "GetValue");

	Params::UMovieSceneScriptingStringKey_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingStringKey.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESequenceTimeUnit       TimeUnit                                                         (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FFrameTime                  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingStringKey::GetTime(enum class ESequenceTimeUnit TimeUnit, const struct FFrameTime& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingStringKey", "GetTime");

	Params::UMovieSceneScriptingStringKey_GetTime_Params Parms{};

	Parms.TimeUnit = TimeUnit;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SequencerScripting.MovieSceneScriptingStringChannel
// (None)

class UClass* UMovieSceneScriptingStringChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingStringChannel");

	return Clss;
}


// MovieSceneScriptingStringChannel SequencerScripting.Default__MovieSceneScriptingStringChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingStringChannel* UMovieSceneScriptingStringChannel::GetDefaultObj()
{
	static class UMovieSceneScriptingStringChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingStringChannel*>(UMovieSceneScriptingStringChannel::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingStringChannel.SetDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InDefaultValue                                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneScriptingStringChannel::SetDefault(const class FString& InDefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingStringChannel", "SetDefault");

	Params::UMovieSceneScriptingStringChannel_SetDefault_Params Parms{};

	Parms.InDefaultValue = InDefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneScriptingKey*     Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void UMovieSceneScriptingStringChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingStringChannel", "RemoveKey");

	Params::UMovieSceneScriptingStringChannel_RemoveKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneScriptingStringChannel::RemoveDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingStringChannel", "RemoveDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingStringChannel.HasDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingStringChannel::HasDefault(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingStringChannel", "HasDefault");

	Params::UMovieSceneScriptingStringChannel_HasDefault_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingStringChannel.GetKeys
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMovieSceneScriptingKey*>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingStringChannel::GetKeys(const TArray<class UMovieSceneScriptingKey*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingStringChannel", "GetKeys");

	Params::UMovieSceneScriptingStringChannel_GetKeys_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingStringChannel.GetDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneScriptingStringChannel::GetDefault(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingStringChannel", "GetDefault");

	Params::UMovieSceneScriptingStringChannel_GetDefault_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingStringChannel.AddKey
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                InTime                                                           (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// class FString                      NewValue                                                         (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// float                              SubFrame                                                         (ConstParm, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneScriptingStringKey*ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UMovieSceneScriptingStringChannel::AddKey(struct FFrameNumber* InTime, float SubFrame, enum class ESequenceTimeUnit TimeUnit, class UMovieSceneScriptingStringKey* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingStringChannel", "AddKey");

	Params::UMovieSceneScriptingStringChannel_AddKey_Params Parms{};

	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTime != nullptr)
		*InTime = std::move(Parms.InTime);

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneBindingExtensions
// (None)

class UClass* UMovieSceneBindingExtensions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneBindingExtensions");

	return Clss;
}


// MovieSceneBindingExtensions SequencerScripting.Default__MovieSceneBindingExtensions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneBindingExtensions* UMovieSceneBindingExtensions::GetDefaultObj()
{
	static class UMovieSceneBindingExtensions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneBindingExtensions*>(UMovieSceneBindingExtensions::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneBindingExtensions.SetSpawnableBindingID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FMovieSceneObjectBindingID  SpawnableBindingID                                               (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneBindingExtensions::SetSpawnableBindingID(const struct FMovieSceneBindingProxy& InBinding, struct FMovieSceneObjectBindingID* SpawnableBindingID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "SetSpawnableBindingID");

	Params::UMovieSceneBindingExtensions_SetSpawnableBindingID_Params Parms{};

	Parms.InBinding = InBinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SpawnableBindingID != nullptr)
		*SpawnableBindingID = std::move(Parms.SpawnableBindingID);

}


// Function SequencerScripting.MovieSceneBindingExtensions.SetSortingOrder
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              SortingOrder                                                     (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneBindingExtensions::SetSortingOrder(const struct FMovieSceneBindingProxy& InBinding, int32* SortingOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "SetSortingOrder");

	Params::UMovieSceneBindingExtensions_SetSortingOrder_Params Parms{};

	Parms.InBinding = InBinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SortingOrder != nullptr)
		*SortingOrder = Parms.SortingOrder;

}


// Function SequencerScripting.MovieSceneBindingExtensions.SetParent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FMovieSceneBindingProxy     InParentBinding                                                  (Edit, ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneBindingExtensions::SetParent(const struct FMovieSceneBindingProxy& InBinding, struct FMovieSceneBindingProxy* InParentBinding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "SetParent");

	Params::UMovieSceneBindingExtensions_SetParent_Params Parms{};

	Parms.InBinding = InBinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InParentBinding != nullptr)
		*InParentBinding = std::move(Parms.InParentBinding);

}


// Function SequencerScripting.MovieSceneBindingExtensions.SetName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      InName                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneBindingExtensions::SetName(const struct FMovieSceneBindingProxy& InBinding, class FString* InName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "SetName");

	Params::UMovieSceneBindingExtensions_SetName_Params Parms{};

	Parms.InBinding = InBinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InName != nullptr)
		*InName = std::move(Parms.InName);

}


// Function SequencerScripting.MovieSceneBindingExtensions.SetDisplayName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        InDisplayName                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneBindingExtensions::SetDisplayName(const struct FMovieSceneBindingProxy& InBinding, class FText* InDisplayName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "SetDisplayName");

	Params::UMovieSceneBindingExtensions_SetDisplayName_Params Parms{};

	Parms.InBinding = InBinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InDisplayName != nullptr)
		*InDisplayName = Parms.InDisplayName;

}


// Function SequencerScripting.MovieSceneBindingExtensions.RemoveTrack
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneTrack*            TrackToRemove                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneBindingExtensions::RemoveTrack(const struct FMovieSceneBindingProxy& InBinding, class UMovieSceneTrack** TrackToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "RemoveTrack");

	Params::UMovieSceneBindingExtensions_RemoveTrack_Params Parms{};

	Parms.InBinding = InBinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TrackToRemove != nullptr)
		*TrackToRemove = Parms.TrackToRemove;

}


// Function SequencerScripting.MovieSceneBindingExtensions.Remove
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneBindingExtensions::Remove(const struct FMovieSceneBindingProxy& InBinding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "Remove");

	Params::UMovieSceneBindingExtensions_Remove_Params Parms{};

	Parms.InBinding = InBinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     SourceBindingId                                                  (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FMovieSceneBindingProxy     DestinationBindingId                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneBindingExtensions::MoveBindingContents(struct FMovieSceneBindingProxy* SourceBindingId, const struct FMovieSceneBindingProxy& DestinationBindingId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "MoveBindingContents");

	Params::UMovieSceneBindingExtensions_MoveBindingContents_Params Parms{};

	Parms.DestinationBindingId = DestinationBindingId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SourceBindingId != nullptr)
		*SourceBindingId = std::move(Parms.SourceBindingId);

}


// Function SequencerScripting.MovieSceneBindingExtensions.IsValid
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneBindingExtensions::IsValid(const struct FMovieSceneBindingProxy& InBinding, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "IsValid");

	Params::UMovieSceneBindingExtensions_IsValid_Params Parms{};

	Parms.InBinding = InBinding;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneBindingExtensions.GetTracks
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UMovieSceneTrack*>    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneBindingExtensions::GetTracks(const struct FMovieSceneBindingProxy& InBinding, const TArray<class UMovieSceneTrack*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "GetTracks");

	Params::UMovieSceneBindingExtensions_GetTracks_Params Parms{};

	Parms.InBinding = InBinding;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneBindingExtensions.GetSortingOrder
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneBindingExtensions::GetSortingOrder(const struct FMovieSceneBindingProxy& InBinding, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "GetSortingOrder");

	Params::UMovieSceneBindingExtensions_GetSortingOrder_Params Parms{};

	Parms.InBinding = InBinding;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UClass*                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneBindingExtensions::GetPossessedObjectClass(const struct FMovieSceneBindingProxy& InBinding, class UClass* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "GetPossessedObjectClass");

	Params::UMovieSceneBindingExtensions_GetPossessedObjectClass_Params Parms{};

	Parms.InBinding = InBinding;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneBindingExtensions.GetParent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FMovieSceneBindingProxy     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneBindingExtensions::GetParent(const struct FMovieSceneBindingProxy& InBinding, const struct FMovieSceneBindingProxy& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "GetParent");

	Params::UMovieSceneBindingExtensions_GetParent_Params Parms{};

	Parms.InBinding = InBinding;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UObject*                     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneBindingExtensions::GetObjectTemplate(const struct FMovieSceneBindingProxy& InBinding, class UObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "GetObjectTemplate");

	Params::UMovieSceneBindingExtensions_GetObjectTemplate_Params Parms{};

	Parms.InBinding = InBinding;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneBindingExtensions.GetName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneBindingExtensions::GetName(const struct FMovieSceneBindingProxy& InBinding, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "GetName");

	Params::UMovieSceneBindingExtensions_GetName_Params Parms{};

	Parms.InBinding = InBinding;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneBindingExtensions.GetId
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGuid                       ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneBindingExtensions::GetId(const struct FMovieSceneBindingProxy& InBinding, const struct FGuid& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "GetId");

	Params::UMovieSceneBindingExtensions_GetId_Params Parms{};

	Parms.InBinding = InBinding;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneBindingExtensions.GetDisplayName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneBindingExtensions::GetDisplayName(const struct FMovieSceneBindingProxy& InBinding, class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "GetDisplayName");

	Params::UMovieSceneBindingExtensions_GetDisplayName_Params Parms{};

	Parms.InBinding = InBinding;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FMovieSceneBindingProxy>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneBindingExtensions::GetChildPossessables(const struct FMovieSceneBindingProxy& InBinding, const TArray<struct FMovieSceneBindingProxy>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "GetChildPossessables");

	Params::UMovieSceneBindingExtensions_GetChildPossessables_Params Parms{};

	Parms.InBinding = InBinding;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByType
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UClass*                      TrackType                                                        (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UMovieSceneTrack*>    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneBindingExtensions::FindTracksByType(const struct FMovieSceneBindingProxy& InBinding, class UClass* TrackType, const TArray<class UMovieSceneTrack*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "FindTracksByType");

	Params::UMovieSceneBindingExtensions_FindTracksByType_Params Parms{};

	Parms.InBinding = InBinding;
	Parms.TrackType = TrackType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UClass*                      TrackType                                                        (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UMovieSceneTrack*>    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneBindingExtensions::FindTracksByExactType(const struct FMovieSceneBindingProxy& InBinding, class UClass* TrackType, const TArray<class UMovieSceneTrack*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "FindTracksByExactType");

	Params::UMovieSceneBindingExtensions_FindTracksByExactType_Params Parms{};

	Parms.InBinding = InBinding;
	Parms.TrackType = TrackType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneBindingExtensions.AddTrack
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UClass*                      TrackType                                                        (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneTrack*            ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneBindingExtensions::AddTrack(const struct FMovieSceneBindingProxy& InBinding, class UClass* TrackType, class UMovieSceneTrack* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "AddTrack");

	Params::UMovieSceneBindingExtensions_AddTrack_Params Parms{};

	Parms.InBinding = InBinding;
	Parms.TrackType = TrackType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SequencerScripting.MovieSceneEventTrackExtensions
// (None)

class UClass* UMovieSceneEventTrackExtensions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEventTrackExtensions");

	return Clss;
}


// MovieSceneEventTrackExtensions SequencerScripting.Default__MovieSceneEventTrackExtensions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneEventTrackExtensions* UMovieSceneEventTrackExtensions::GetDefaultObj()
{
	static class UMovieSceneEventTrackExtensions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneEventTrackExtensions*>(UMovieSceneEventTrackExtensions::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneEventTrackExtensions.GetBoundObjectPropertyClass
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneEvent            EventKey                                                         (ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UClass*                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneEventTrackExtensions::GetBoundObjectPropertyClass(struct FMovieSceneEvent* EventKey, class UClass* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneEventTrackExtensions", "GetBoundObjectPropertyClass");

	Params::UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EventKey != nullptr)
		*EventKey = std::move(Parms.EventKey);

}


// Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneEventTrack*       InTrack                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneEventTriggerSection*ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneEventTrackExtensions::AddEventTriggerSection(class UMovieSceneEventTrack** InTrack, class UMovieSceneEventTriggerSection* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneEventTrackExtensions", "AddEventTriggerSection");

	Params::UMovieSceneEventTrackExtensions_AddEventTriggerSection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTrack != nullptr)
		*InTrack = Parms.InTrack;

}


// Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneEventTrack*       InTrack                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneEventRepeaterSection*ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneEventTrackExtensions::AddEventRepeaterSection(class UMovieSceneEventTrack** InTrack, class UMovieSceneEventRepeaterSection* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneEventTrackExtensions", "AddEventRepeaterSection");

	Params::UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTrack != nullptr)
		*InTrack = Parms.InTrack;

}


// Class SequencerScripting.MovieSceneFolderExtensions
// (None)

class UClass* UMovieSceneFolderExtensions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneFolderExtensions");

	return Clss;
}


// MovieSceneFolderExtensions SequencerScripting.Default__MovieSceneFolderExtensions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneFolderExtensions* UMovieSceneFolderExtensions::GetDefaultObj()
{
	static class UMovieSceneFolderExtensions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneFolderExtensions*>(UMovieSceneFolderExtensions::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneFolderExtensions.SetFolderName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFolder*           Folder                                                           (Edit, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference)
// class FName                        InFolderName                                                     (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneFolder* UMovieSceneFolderExtensions::SetFolderName(class FName* InFolderName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "SetFolderName");

	Params::UMovieSceneFolderExtensions_SetFolderName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InFolderName != nullptr)
		*InFolderName = Parms.InFolderName;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.SetFolderColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMovieSceneFolder*           Folder                                                           (Edit, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference)
// struct FColor                      InFolderColor                                                    (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneFolder* UMovieSceneFolderExtensions::SetFolderColor(struct FColor* InFolderColor, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "SetFolderColor");

	Params::UMovieSceneFolderExtensions_SetFolderColor_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InFolderColor != nullptr)
		*InFolderColor = std::move(Parms.InFolderColor);

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFolder*           Folder                                                           (Edit, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference)
// class UMovieSceneTrack*            InTrack                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneFolder* UMovieSceneFolderExtensions::RemoveChildTrack(class UMovieSceneTrack** InTrack, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "RemoveChildTrack");

	Params::UMovieSceneFolderExtensions_RemoveChildTrack_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTrack != nullptr)
		*InTrack = Parms.InTrack;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFolder*           Folder                                                           (Edit, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference)
// struct FMovieSceneBindingProxy     InObjectBinding                                                  (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneFolder* UMovieSceneFolderExtensions::RemoveChildObjectBinding(struct FMovieSceneBindingProxy* InObjectBinding, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "RemoveChildObjectBinding");

	Params::UMovieSceneFolderExtensions_RemoveChildObjectBinding_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InObjectBinding != nullptr)
		*InObjectBinding = std::move(Parms.InObjectBinding);

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFolder*           Folder                                                           (Edit, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference)
// class UMovieSceneTrack*            InTrack                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneFolder* UMovieSceneFolderExtensions::RemoveChildMasterTrack(class UMovieSceneTrack** InTrack, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "RemoveChildMasterTrack");

	Params::UMovieSceneFolderExtensions_RemoveChildMasterTrack_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTrack != nullptr)
		*InTrack = Parms.InTrack;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFolder*           TargetFolder                                                     (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneFolder*           FolderToRemove                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneFolderExtensions::RemoveChildFolder(class UMovieSceneFolder** TargetFolder, class UMovieSceneFolder** FolderToRemove, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "RemoveChildFolder");

	Params::UMovieSceneFolderExtensions_RemoveChildFolder_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TargetFolder != nullptr)
		*TargetFolder = Parms.TargetFolder;

	if (FolderToRemove != nullptr)
		*FolderToRemove = Parms.FolderToRemove;

}


// Function SequencerScripting.MovieSceneFolderExtensions.GetFolderName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneFolder*           Folder                                                           (Edit, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference)
// class FName                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneFolder* UMovieSceneFolderExtensions::GetFolderName(class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "GetFolderName");

	Params::UMovieSceneFolderExtensions_GetFolderName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.GetFolderColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneFolder*           Folder                                                           (Edit, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference)
// struct FColor                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneFolder* UMovieSceneFolderExtensions::GetFolderColor(const struct FColor& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "GetFolderColor");

	Params::UMovieSceneFolderExtensions_GetFolderColor_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.GetChildTracks
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneFolder*           Folder                                                           (Edit, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference)
// TArray<class UMovieSceneTrack*>    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneFolder* UMovieSceneFolderExtensions::GetChildTracks(const TArray<class UMovieSceneTrack*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "GetChildTracks");

	Params::UMovieSceneFolderExtensions_GetChildTracks_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneFolder*           Folder                                                           (Edit, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference)
// TArray<struct FMovieSceneBindingProxy>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneFolder* UMovieSceneFolderExtensions::GetChildObjectBindings(const TArray<struct FMovieSceneBindingProxy>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "GetChildObjectBindings");

	Params::UMovieSceneFolderExtensions_GetChildObjectBindings_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneFolder*           Folder                                                           (Edit, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference)
// TArray<class UMovieSceneTrack*>    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneFolder* UMovieSceneFolderExtensions::GetChildMasterTracks(const TArray<class UMovieSceneTrack*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "GetChildMasterTracks");

	Params::UMovieSceneFolderExtensions_GetChildMasterTracks_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.GetChildFolders
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneFolder*           Folder                                                           (Edit, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference)
// TArray<class UMovieSceneFolder*>   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneFolder* UMovieSceneFolderExtensions::GetChildFolders(const TArray<class UMovieSceneFolder*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "GetChildFolders");

	Params::UMovieSceneFolderExtensions_GetChildFolders_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.AddChildTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFolder*           Folder                                                           (Edit, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference)
// class UMovieSceneTrack*            InTrack                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneFolder* UMovieSceneFolderExtensions::AddChildTrack(class UMovieSceneTrack** InTrack, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "AddChildTrack");

	Params::UMovieSceneFolderExtensions_AddChildTrack_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTrack != nullptr)
		*InTrack = Parms.InTrack;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFolder*           Folder                                                           (Edit, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference)
// struct FMovieSceneBindingProxy     InObjectBinding                                                  (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneFolder* UMovieSceneFolderExtensions::AddChildObjectBinding(struct FMovieSceneBindingProxy* InObjectBinding, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "AddChildObjectBinding");

	Params::UMovieSceneFolderExtensions_AddChildObjectBinding_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InObjectBinding != nullptr)
		*InObjectBinding = std::move(Parms.InObjectBinding);

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFolder*           Folder                                                           (Edit, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference)
// class UMovieSceneTrack*            InTrack                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneFolder* UMovieSceneFolderExtensions::AddChildMasterTrack(class UMovieSceneTrack** InTrack, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "AddChildMasterTrack");

	Params::UMovieSceneFolderExtensions_AddChildMasterTrack_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTrack != nullptr)
		*InTrack = Parms.InTrack;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.AddChildFolder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFolder*           TargetFolder                                                     (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneFolder*           FolderToAdd                                                      (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneFolderExtensions::AddChildFolder(class UMovieSceneFolder** TargetFolder, class UMovieSceneFolder** FolderToAdd, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "AddChildFolder");

	Params::UMovieSceneFolderExtensions_AddChildFolder_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TargetFolder != nullptr)
		*TargetFolder = Parms.TargetFolder;

	if (FolderToAdd != nullptr)
		*FolderToAdd = Parms.FolderToAdd;

}


// Class SequencerScripting.MovieSceneMaterialTrackExtensions
// (None)

class UClass* UMovieSceneMaterialTrackExtensions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneMaterialTrackExtensions");

	return Clss;
}


// MovieSceneMaterialTrackExtensions SequencerScripting.Default__MovieSceneMaterialTrackExtensions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneMaterialTrackExtensions* UMovieSceneMaterialTrackExtensions::GetDefaultObj()
{
	static class UMovieSceneMaterialTrackExtensions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneMaterialTrackExtensions*>(UMovieSceneMaterialTrackExtensions::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneMaterialTrackExtensions.SetMaterialIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneComponentMaterialTrack*Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MaterialIndex                                                    (ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UMovieSceneMaterialTrackExtensions::SetMaterialIndex(class UMovieSceneComponentMaterialTrack** Track, int32 MaterialIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneMaterialTrackExtensions", "SetMaterialIndex");

	Params::UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Params Parms{};

	Parms.MaterialIndex = MaterialIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

}


// Function SequencerScripting.MovieSceneMaterialTrackExtensions.GetMaterialIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneComponentMaterialTrack*Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneMaterialTrackExtensions::GetMaterialIndex(class UMovieSceneComponentMaterialTrack** Track, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneMaterialTrackExtensions", "GetMaterialIndex");

	Params::UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

}


// Class SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions
// (None)

class UClass* UMovieScenePrimitiveMaterialTrackExtensions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScenePrimitiveMaterialTrackExtensions");

	return Clss;
}


// MovieScenePrimitiveMaterialTrackExtensions SequencerScripting.Default__MovieScenePrimitiveMaterialTrackExtensions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScenePrimitiveMaterialTrackExtensions* UMovieScenePrimitiveMaterialTrackExtensions::GetDefaultObj()
{
	static class UMovieScenePrimitiveMaterialTrackExtensions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScenePrimitiveMaterialTrackExtensions*>(UMovieScenePrimitiveMaterialTrackExtensions::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.SetMaterialIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieScenePrimitiveMaterialTrack*Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MaterialIndex                                                    (ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UMovieScenePrimitiveMaterialTrackExtensions::SetMaterialIndex(class UMovieScenePrimitiveMaterialTrack** Track, int32 MaterialIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieScenePrimitiveMaterialTrackExtensions", "SetMaterialIndex");

	Params::UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Params Parms{};

	Parms.MaterialIndex = MaterialIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

}


// Function SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.GetMaterialIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieScenePrimitiveMaterialTrack*Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieScenePrimitiveMaterialTrackExtensions::GetMaterialIndex(class UMovieScenePrimitiveMaterialTrack** Track, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieScenePrimitiveMaterialTrackExtensions", "GetMaterialIndex");

	Params::UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

}


// Class SequencerScripting.MovieScenePropertyTrackExtensions
// (None)

class UClass* UMovieScenePropertyTrackExtensions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScenePropertyTrackExtensions");

	return Clss;
}


// MovieScenePropertyTrackExtensions SequencerScripting.Default__MovieScenePropertyTrackExtensions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScenePropertyTrackExtensions* UMovieScenePropertyTrackExtensions::GetDefaultObj()
{
	static class UMovieScenePropertyTrackExtensions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScenePropertyTrackExtensions*>(UMovieScenePropertyTrackExtensions::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieScenePropertyTrackExtensions.SetPropertyNameAndPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UMovieScenePropertyTrack*    Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InPropertyName                                                   (Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      InPropertyPath                                                   (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieScenePropertyTrackExtensions::SetPropertyNameAndPath(class UMovieScenePropertyTrack** Track, class FName* InPropertyName, class FString* InPropertyPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieScenePropertyTrackExtensions", "SetPropertyNameAndPath");

	Params::UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

	if (InPropertyName != nullptr)
		*InPropertyName = Parms.InPropertyName;

	if (InPropertyPath != nullptr)
		*InPropertyPath = std::move(Parms.InPropertyPath);

}


// Function SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneObjectPropertyTrack*Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UClass*                      PropertyClass                                                    (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

class UClass* UMovieScenePropertyTrackExtensions::SetObjectPropertyClass(class UMovieSceneObjectPropertyTrack** Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieScenePropertyTrackExtensions", "SetObjectPropertyClass");

	Params::UMovieScenePropertyTrackExtensions_SetObjectPropertyClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieScenePropertyTrackExtensions.SetByteTrackEnum
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneByteTrack*        Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UEnum*                       InEnum                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieScenePropertyTrackExtensions::SetByteTrackEnum(class UMovieSceneByteTrack** Track, class UEnum** InEnum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieScenePropertyTrackExtensions", "SetByteTrackEnum");

	Params::UMovieScenePropertyTrackExtensions_SetByteTrackEnum_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

	if (InEnum != nullptr)
		*InEnum = Parms.InEnum;

}


// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieScenePropertyTrack*    Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieScenePropertyTrackExtensions::GetUniqueTrackName(class UMovieScenePropertyTrack** Track, class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieScenePropertyTrackExtensions", "GetUniqueTrackName");

	Params::UMovieScenePropertyTrackExtensions_GetUniqueTrackName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

}


// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieScenePropertyTrack*    Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieScenePropertyTrackExtensions::GetPropertyPath(class UMovieScenePropertyTrack** Track, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieScenePropertyTrackExtensions", "GetPropertyPath");

	Params::UMovieScenePropertyTrackExtensions_GetPropertyPath_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

}


// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieScenePropertyTrack*    Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieScenePropertyTrackExtensions::GetPropertyName(class UMovieScenePropertyTrack** Track, class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieScenePropertyTrackExtensions", "GetPropertyName");

	Params::UMovieScenePropertyTrackExtensions_GetPropertyName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

}


// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneObjectPropertyTrack*Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UClass*                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieScenePropertyTrackExtensions::GetObjectPropertyClass(class UMovieSceneObjectPropertyTrack** Track, class UClass* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieScenePropertyTrackExtensions", "GetObjectPropertyClass");

	Params::UMovieScenePropertyTrackExtensions_GetObjectPropertyClass_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

}


// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetByteTrackEnum
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneByteTrack*        Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UEnum*                       ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieScenePropertyTrackExtensions::GetByteTrackEnum(class UMovieSceneByteTrack** Track, class UEnum* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieScenePropertyTrackExtensions", "GetByteTrackEnum");

	Params::UMovieScenePropertyTrackExtensions_GetByteTrackEnum_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

}


// Class SequencerScripting.MovieSceneSectionExtensions
// (None)

class UClass* UMovieSceneSectionExtensions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSectionExtensions");

	return Clss;
}


// MovieSceneSectionExtensions SequencerScripting.Default__MovieSceneSectionExtensions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSectionExtensions* UMovieSceneSectionExtensions::GetDefaultObj()
{
	static class UMovieSceneSectionExtensions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSectionExtensions*>(UMovieSceneSectionExtensions::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// float                              StartTime                                                        (BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float UMovieSceneSectionExtensions::SetStartFrameSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "SetStartFrameSeconds");

	Params::UMovieSceneSectionExtensions_SetStartFrameSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// bool                               bIsBounded                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMovieSceneSection* UMovieSceneSectionExtensions::SetStartFrameBounded(bool* bIsBounded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "SetStartFrameBounded");

	Params::UMovieSceneSectionExtensions_SetStartFrameBounded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsBounded != nullptr)
		*bIsBounded = Parms.bIsBounded;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// int32                              StartFrame                                                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

int32 UMovieSceneSectionExtensions::SetStartFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "SetStartFrame");

	Params::UMovieSceneSectionExtensions_SetStartFrame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// float                              StartTime                                                        (BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              EndTime                                                          (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float UMovieSceneSectionExtensions::SetRangeSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "SetRangeSeconds");

	Params::UMovieSceneSectionExtensions_SetRangeSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.SetRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// int32                              StartFrame                                                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// int32                              EndFrame                                                         (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

int32 UMovieSceneSectionExtensions::SetRange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "SetRange");

	Params::UMovieSceneSectionExtensions_SetRange_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// float                              EndTime                                                          (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float UMovieSceneSectionExtensions::SetEndFrameSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "SetEndFrameSeconds");

	Params::UMovieSceneSectionExtensions_SetEndFrameSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// bool                               bIsBounded                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMovieSceneSection* UMovieSceneSectionExtensions::SetEndFrameBounded(bool* bIsBounded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "SetEndFrameBounded");

	Params::UMovieSceneSectionExtensions_SetEndFrameBounded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsBounded != nullptr)
		*bIsBounded = Parms.bIsBounded;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// int32                              EndFrame                                                         (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

int32 UMovieSceneSectionExtensions::SetEndFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "SetEndFrame");

	Params::UMovieSceneSectionExtensions_SetEndFrame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.HasStartFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneSection* UMovieSceneSectionExtensions::HasStartFrame(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "HasStartFrame");

	Params::UMovieSceneSectionExtensions_HasStartFrame_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.HasEndFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneSection* UMovieSceneSectionExtensions::HasEndFrame(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "HasEndFrame");

	Params::UMovieSceneSectionExtensions_HasEndFrame_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneSection* UMovieSceneSectionExtensions::GetStartFrameSeconds(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "GetStartFrameSeconds");

	Params::UMovieSceneSectionExtensions_GetStartFrameSeconds_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneSection* UMovieSceneSectionExtensions::GetStartFrame(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "GetStartFrame");

	Params::UMovieSceneSectionExtensions_GetStartFrame_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSubSection*       Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// int32                              InFrame                                                          (ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneSequence*         ParentSequence                                                   (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneSubSection* UMovieSceneSectionExtensions::GetParentSequenceFrame(int32* InFrame, class UMovieSceneSequence** ParentSequence, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "GetParentSequenceFrame");

	Params::UMovieSceneSectionExtensions_GetParentSequenceFrame_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InFrame != nullptr)
		*InFrame = Parms.InFrame;

	if (ParentSequence != nullptr)
		*ParentSequence = Parms.ParentSequence;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneSection* UMovieSceneSectionExtensions::GetEndFrameSeconds(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "GetEndFrameSeconds");

	Params::UMovieSceneSectionExtensions_GetEndFrameSeconds_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneSection* UMovieSceneSectionExtensions::GetEndFrame(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "GetEndFrame");

	Params::UMovieSceneSectionExtensions_GetEndFrame_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.GetChannelsByType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// class UClass*                      ChannelType                                                      (Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UMovieSceneScriptingChannel*>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneSection* UMovieSceneSectionExtensions::GetChannelsByType(class UClass** ChannelType, const TArray<class UMovieSceneScriptingChannel*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "GetChannelsByType");

	Params::UMovieSceneSectionExtensions_GetChannelsByType_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ChannelType != nullptr)
		*ChannelType = Parms.ChannelType;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.GetChannels
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// TArray<class UMovieSceneScriptingChannel*>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneSection* UMovieSceneSectionExtensions::GetChannels(const TArray<class UMovieSceneScriptingChannel*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "GetChannels");

	Params::UMovieSceneSectionExtensions_GetChannels_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeStartFrameSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneSection* UMovieSceneSectionExtensions::GetAutoSizeStartFrameSeconds(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "GetAutoSizeStartFrameSeconds");

	Params::UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeStartFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneSection* UMovieSceneSectionExtensions::GetAutoSizeStartFrame(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "GetAutoSizeStartFrame");

	Params::UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeHasStartFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneSection* UMovieSceneSectionExtensions::GetAutoSizeHasStartFrame(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "GetAutoSizeHasStartFrame");

	Params::UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeHasEndFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneSection* UMovieSceneSectionExtensions::GetAutoSizeHasEndFrame(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "GetAutoSizeHasEndFrame");

	Params::UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeEndFrameSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneSection* UMovieSceneSectionExtensions::GetAutoSizeEndFrameSeconds(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "GetAutoSizeEndFrameSeconds");

	Params::UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeEndFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneSection* UMovieSceneSectionExtensions::GetAutoSizeEndFrame(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "GetAutoSizeEndFrame");

	Params::UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.GetAllChannels
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// TArray<class UMovieSceneScriptingChannel*>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneSection* UMovieSceneSectionExtensions::GetAllChannels(const TArray<class UMovieSceneScriptingChannel*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "GetAllChannels");

	Params::UMovieSceneSectionExtensions_GetAllChannels_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.FindChannelsByType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// class UClass*                      ChannelType                                                      (Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UMovieSceneScriptingChannel*>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneSection* UMovieSceneSectionExtensions::FindChannelsByType(class UClass** ChannelType, const TArray<class UMovieSceneScriptingChannel*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "FindChannelsByType");

	Params::UMovieSceneSectionExtensions_FindChannelsByType_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ChannelType != nullptr)
		*ChannelType = Parms.ChannelType;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneSequenceExtensions
// (None)

class UClass* UMovieSceneSequenceExtensions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSequenceExtensions");

	return Clss;
}


// MovieSceneSequenceExtensions SequencerScripting.Default__MovieSceneSequenceExtensions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSequenceExtensions* UMovieSceneSequenceExtensions::GetDefaultObj()
{
	static class UMovieSceneSequenceExtensions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSequenceExtensions*>(UMovieSceneSequenceExtensions::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.SortMarkedFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::SortMarkedFrames(class UMovieSceneSequence** Sequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SortMarkedFrames");

	Params::UMovieSceneSequenceExtensions_SortMarkedFrames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         InSequence                                                       (Edit, ExportObject, Transient, Config, InstancedReference, SubobjectReference)
// float                              StartTimeInSeconds                                               (ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UMovieSceneSequenceExtensions::SetWorkRangeStart(class UMovieSceneSequence* InSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetWorkRangeStart");

	Params::UMovieSceneSequenceExtensions_SetWorkRangeStart_Params Parms{};

	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         InSequence                                                       (Edit, ExportObject, Transient, Config, InstancedReference, SubobjectReference)
// float                              EndTimeInSeconds                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UMovieSceneSequenceExtensions::SetWorkRangeEnd(class UMovieSceneSequence* InSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetWorkRangeEnd");

	Params::UMovieSceneSequenceExtensions_SetWorkRangeEnd_Params Parms{};

	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         InSequence                                                       (Edit, ExportObject, Transient, Config, InstancedReference, SubobjectReference)
// float                              StartTimeInSeconds                                               (ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UMovieSceneSequenceExtensions::SetViewRangeStart(class UMovieSceneSequence* InSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetViewRangeStart");

	Params::UMovieSceneSequenceExtensions_SetViewRangeStart_Params Parms{};

	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         InSequence                                                       (Edit, ExportObject, Transient, Config, InstancedReference, SubobjectReference)
// float                              EndTimeInSeconds                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UMovieSceneSequenceExtensions::SetViewRangeEnd(class UMovieSceneSequence* InSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetViewRangeEnd");

	Params::UMovieSceneSequenceExtensions_SetViewRangeEnd_Params Parms{};

	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FFrameRate                  TickResolution                                                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

struct FFrameRate UMovieSceneSequenceExtensions::SetTickResolutionDirectly(class UMovieSceneSequence** Sequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetTickResolutionDirectly");

	Params::UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FFrameRate                  TickResolution                                                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

struct FFrameRate UMovieSceneSequenceExtensions::SetTickResolution(class UMovieSceneSequence** Sequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetTickResolution");

	Params::UMovieSceneSequenceExtensions_SetTickResolution_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               bInReadOnly                                                      (ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UMovieSceneSequenceExtensions::SetReadOnly(class UMovieSceneSequence** Sequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetReadOnly");

	Params::UMovieSceneSequenceExtensions_SetReadOnly_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// float                              StartTime                                                        (BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float UMovieSceneSequenceExtensions::SetPlaybackStartSeconds(class UMovieSceneSequence** Sequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetPlaybackStartSeconds");

	Params::UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// int32                              StartFrame                                                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

int32 UMovieSceneSequenceExtensions::SetPlaybackStart(class UMovieSceneSequence** Sequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetPlaybackStart");

	Params::UMovieSceneSequenceExtensions_SetPlaybackStart_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// float                              EndTime                                                          (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float UMovieSceneSequenceExtensions::SetPlaybackEndSeconds(class UMovieSceneSequence** Sequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetPlaybackEndSeconds");

	Params::UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// int32                              EndFrame                                                         (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

int32 UMovieSceneSequenceExtensions::SetPlaybackEnd(class UMovieSceneSequence** Sequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetPlaybackEnd");

	Params::UMovieSceneSequenceExtensions_SetPlaybackEnd_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// int32                              InMarkIndex                                                      (Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FFrameNumber                InFrameNumber                                                    (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UMovieSceneSequenceExtensions::SetMarkedFrame(class UMovieSceneSequence** Sequence, struct FFrameNumber* InFrameNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetMarkedFrame");

	Params::UMovieSceneSequenceExtensions_SetMarkedFrame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	if (InFrameNumber != nullptr)
		*InFrameNumber = std::move(Parms.InFrameNumber);

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         InSequence                                                       (Edit, ExportObject, Transient, Config, InstancedReference, SubobjectReference)
// enum class EMovieSceneEvaluationTypeInEvaluationType                                                 (ExportObject, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class EMovieSceneEvaluationType UMovieSceneSequenceExtensions::SetEvaluationType(class UMovieSceneSequence* InSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetEvaluationType");

	Params::UMovieSceneSequenceExtensions_SetEvaluationType_Params Parms{};

	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FFrameRate                  DisplayRate                                                      (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

struct FFrameRate UMovieSceneSequenceExtensions::SetDisplayRate(class UMovieSceneSequence** Sequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetDisplayRate");

	Params::UMovieSceneSequenceExtensions_SetDisplayRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetClockSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         InSequence                                                       (Edit, ExportObject, Transient, Config, InstancedReference, SubobjectReference)
// enum class EUpdateClockSource      InClockSource                                                    (ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class EUpdateClockSource UMovieSceneSequenceExtensions::SetClockSource(class UMovieSceneSequence* InSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetClockSource");

	Params::UMovieSceneSequenceExtensions_SetClockSource_Params Parms{};

	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         RootSequence                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FMovieSceneObjectBindingID  InObjectBindingID                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FMovieSceneBindingProxy     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::ResolveBindingID(class UMovieSceneSequence** RootSequence, struct FMovieSceneObjectBindingID* InObjectBindingID, const struct FMovieSceneBindingProxy& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "ResolveBindingID");

	Params::UMovieSceneSequenceExtensions_ResolveBindingID_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RootSequence != nullptr)
		*RootSequence = Parms.RootSequence;

	if (InObjectBindingID != nullptr)
		*InObjectBindingID = std::move(Parms.InObjectBindingID);

}


// Function SequencerScripting.MovieSceneSequenceExtensions.RemoveTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UMovieSceneTrack*            Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::RemoveTrack(class UMovieSceneSequence** Sequence, class UMovieSceneTrack** Track, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "RemoveTrack");

	Params::UMovieSceneSequenceExtensions_RemoveTrack_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	if (Track != nullptr)
		*Track = Parms.Track;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.RemoveRootFolderFromSequence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UMovieSceneFolder*           Folder                                                           (Edit, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference)

class UMovieSceneFolder* UMovieSceneSequenceExtensions::RemoveRootFolderFromSequence(class UMovieSceneSequence** Sequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "RemoveRootFolderFromSequence");

	Params::UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UMovieSceneTrack*            Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::RemoveMasterTrack(class UMovieSceneSequence** Sequence, class UMovieSceneTrack** Track, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "RemoveMasterTrack");

	Params::UMovieSceneSequenceExtensions_RemoveMasterTrack_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	if (Track != nullptr)
		*Track = Parms.Track;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// float                              StartTime                                                        (BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              Duration                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, DuplicateTransient)
// struct FSequencerScriptingRange    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UMovieSceneSequenceExtensions::MakeRangeSeconds(class UMovieSceneSequence** Sequence, float Duration, const struct FSequencerScriptingRange& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "MakeRangeSeconds");

	Params::UMovieSceneSequenceExtensions_MakeRangeSeconds_Params Parms{};

	Parms.Duration = Duration;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.MakeRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// int32                              StartFrame                                                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// int32                              Duration                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, DuplicateTransient)
// struct FSequencerScriptingRange    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMovieSceneSequenceExtensions::MakeRange(class UMovieSceneSequence** Sequence, int32 Duration, const struct FSequencerScriptingRange& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "MakeRange");

	Params::UMovieSceneSequenceExtensions_MakeRange_Params Parms{};

	Parms.Duration = Duration;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.MakeBindingID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FMovieSceneBindingProxy     InBinding                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EMovieSceneObjectBindingSpaceSpace                                                            (Edit, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FMovieSceneObjectBindingID  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::MakeBindingID(class UMovieSceneSequence** Sequence, const struct FMovieSceneBindingProxy& InBinding, enum class EMovieSceneObjectBindingSpace* Space, const struct FMovieSceneObjectBindingID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "MakeBindingID");

	Params::UMovieSceneSequenceExtensions_MakeBindingID_Params Parms{};

	Parms.InBinding = InBinding;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	if (Space != nullptr)
		*Space = Parms.Space;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FMovieSceneBindingProxy     InBinding                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<class UObject*>             ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UMovieSceneSequenceExtensions::LocateBoundObjects(class UMovieSceneSequence** Sequence, const struct FMovieSceneBindingProxy& InBinding, const TArray<class UObject*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "LocateBoundObjects");

	Params::UMovieSceneSequenceExtensions_LocateBoundObjects_Params Parms{};

	Parms.InBinding = InBinding;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::IsReadOnly(class UMovieSceneSequence** Sequence, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "IsReadOnly");

	Params::UMovieSceneSequenceExtensions_IsReadOnly_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneSequence*         InSequence                                                       (Edit, ExportObject, Transient, Config, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::GetWorkRangeStart(class UMovieSceneSequence* InSequence, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetWorkRangeStart");

	Params::UMovieSceneSequenceExtensions_GetWorkRangeStart_Params Parms{};

	Parms.InSequence = InSequence;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneSequence*         InSequence                                                       (Edit, ExportObject, Transient, Config, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::GetWorkRangeEnd(class UMovieSceneSequence* InSequence, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetWorkRangeEnd");

	Params::UMovieSceneSequenceExtensions_GetWorkRangeEnd_Params Parms{};

	Parms.InSequence = InSequence;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneSequence*         InSequence                                                       (Edit, ExportObject, Transient, Config, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::GetViewRangeStart(class UMovieSceneSequence* InSequence, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetViewRangeStart");

	Params::UMovieSceneSequenceExtensions_GetViewRangeStart_Params Parms{};

	Parms.InSequence = InSequence;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneSequence*         InSequence                                                       (Edit, ExportObject, Transient, Config, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::GetViewRangeEnd(class UMovieSceneSequence* InSequence, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetViewRangeEnd");

	Params::UMovieSceneSequenceExtensions_GetViewRangeEnd_Params Parms{};

	Parms.InSequence = InSequence;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetTracks
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// TArray<class UMovieSceneTrack*>    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::GetTracks(class UMovieSceneSequence** Sequence, const TArray<class UMovieSceneTrack*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetTracks");

	Params::UMovieSceneSequenceExtensions_GetTracks_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetTimecodeSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FTimecode                   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::GetTimecodeSource(class UMovieSceneSequence** Sequence, const struct FTimecode& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetTimecodeSource");

	Params::UMovieSceneSequenceExtensions_GetTimecodeSource_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FFrameRate                  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::GetTickResolution(class UMovieSceneSequence** Sequence, const struct FFrameRate& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetTickResolution");

	Params::UMovieSceneSequenceExtensions_GetTickResolution_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// TArray<struct FMovieSceneBindingProxy>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::GetSpawnables(class UMovieSceneSequence** Sequence, const TArray<struct FMovieSceneBindingProxy>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetSpawnables");

	Params::UMovieSceneSequenceExtensions_GetSpawnables_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// TArray<class UMovieSceneFolder*>   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::GetRootFoldersInSequence(class UMovieSceneSequence** Sequence, const TArray<class UMovieSceneFolder*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetRootFoldersInSequence");

	Params::UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetPossessables
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// TArray<struct FMovieSceneBindingProxy>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::GetPossessables(class UMovieSceneSequence** Sequence, const TArray<struct FMovieSceneBindingProxy>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetPossessables");

	Params::UMovieSceneSequenceExtensions_GetPossessables_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         RootSequence                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneSequence*         DestinationSequence                                              (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FMovieSceneBindingProxy     InBinding                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FMovieSceneObjectBindingID  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::GetPortableBindingID(class UMovieSceneSequence** RootSequence, class UMovieSceneSequence** DestinationSequence, const struct FMovieSceneBindingProxy& InBinding, const struct FMovieSceneObjectBindingID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetPortableBindingID");

	Params::UMovieSceneSequenceExtensions_GetPortableBindingID_Params Parms{};

	Parms.InBinding = InBinding;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RootSequence != nullptr)
		*RootSequence = Parms.RootSequence;

	if (DestinationSequence != nullptr)
		*DestinationSequence = Parms.DestinationSequence;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::GetPlaybackStartSeconds(class UMovieSceneSequence** Sequence, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetPlaybackStartSeconds");

	Params::UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::GetPlaybackStart(class UMovieSceneSequence** Sequence, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetPlaybackStart");

	Params::UMovieSceneSequenceExtensions_GetPlaybackStart_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FSequencerScriptingRange    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::GetPlaybackRange(class UMovieSceneSequence** Sequence, const struct FSequencerScriptingRange& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetPlaybackRange");

	Params::UMovieSceneSequenceExtensions_GetPlaybackRange_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::GetPlaybackEndSeconds(class UMovieSceneSequence** Sequence, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetPlaybackEndSeconds");

	Params::UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::GetPlaybackEnd(class UMovieSceneSequence** Sequence, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetPlaybackEnd");

	Params::UMovieSceneSequenceExtensions_GetPlaybackEnd_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UMovieScene*                 ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::GetMovieScene(class UMovieSceneSequence** Sequence, class UMovieScene* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetMovieScene");

	Params::UMovieSceneSequenceExtensions_GetMovieScene_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// TArray<class UMovieSceneTrack*>    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::GetMasterTracks(class UMovieSceneSequence** Sequence, const TArray<class UMovieSceneTrack*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetMasterTracks");

	Params::UMovieSceneSequenceExtensions_GetMasterTracks_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// TArray<struct FMovieSceneMarkedFrame>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::GetMarkedFrames(class UMovieSceneSequence** Sequence, const TArray<struct FMovieSceneMarkedFrame>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetMarkedFrames");

	Params::UMovieSceneSequenceExtensions_GetMarkedFrames_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneSequence*         InSequence                                                       (Edit, ExportObject, Transient, Config, InstancedReference, SubobjectReference)
// enum class EMovieSceneEvaluationTypeReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::GetEvaluationType(class UMovieSceneSequence* InSequence, enum class EMovieSceneEvaluationType ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetEvaluationType");

	Params::UMovieSceneSequenceExtensions_GetEvaluationType_Params Parms{};

	Parms.InSequence = InSequence;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FFrameRate                  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::GetDisplayRate(class UMovieSceneSequence** Sequence, const struct FFrameRate& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetDisplayRate");

	Params::UMovieSceneSequenceExtensions_GetDisplayRate_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetClockSource
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneSequence*         InSequence                                                       (Edit, ExportObject, Transient, Config, InstancedReference, SubobjectReference)
// enum class EUpdateClockSource      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::GetClockSource(class UMovieSceneSequence* InSequence, enum class EUpdateClockSource ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetClockSource");

	Params::UMovieSceneSequenceExtensions_GetClockSource_Params Parms{};

	Parms.InSequence = InSequence;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetBindings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// TArray<struct FMovieSceneBindingProxy>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::GetBindings(class UMovieSceneSequence** Sequence, const TArray<struct FMovieSceneBindingProxy>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetBindings");

	Params::UMovieSceneSequenceExtensions_GetBindings_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetBindingID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FMovieSceneObjectBindingID  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::GetBindingID(const struct FMovieSceneBindingProxy& InBinding, const struct FMovieSceneObjectBindingID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetBindingID");

	Params::UMovieSceneSequenceExtensions_GetBindingID_Params Parms{};

	Parms.InBinding = InBinding;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.FindTracksByType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UClass*                      TrackType                                                        (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UMovieSceneTrack*>    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::FindTracksByType(class UMovieSceneSequence** Sequence, class UClass* TrackType, const TArray<class UMovieSceneTrack*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "FindTracksByType");

	Params::UMovieSceneSequenceExtensions_FindTracksByType_Params Parms{};

	Parms.TrackType = TrackType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.FindTracksByExactType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UClass*                      TrackType                                                        (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UMovieSceneTrack*>    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::FindTracksByExactType(class UMovieSceneSequence** Sequence, class UClass* TrackType, const TArray<class UMovieSceneTrack*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "FindTracksByExactType");

	Params::UMovieSceneSequenceExtensions_FindTracksByExactType_Params Parms{};

	Parms.TrackType = TrackType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FFrameNumber                InFrameNumber                                                    (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bForward                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::FindNextMarkedFrame(class UMovieSceneSequence** Sequence, struct FFrameNumber* InFrameNumber, bool* bForward, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "FindNextMarkedFrame");

	Params::UMovieSceneSequenceExtensions_FindNextMarkedFrame_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	if (InFrameNumber != nullptr)
		*InFrameNumber = std::move(Parms.InFrameNumber);

	if (bForward != nullptr)
		*bForward = Parms.bForward;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UClass*                      TrackType                                                        (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UMovieSceneTrack*>    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::FindMasterTracksByType(class UMovieSceneSequence** Sequence, class UClass* TrackType, const TArray<class UMovieSceneTrack*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "FindMasterTracksByType");

	Params::UMovieSceneSequenceExtensions_FindMasterTracksByType_Params Parms{};

	Parms.TrackType = TrackType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UClass*                      TrackType                                                        (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UMovieSceneTrack*>    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::FindMasterTracksByExactType(class UMovieSceneSequence** Sequence, class UClass* TrackType, const TArray<class UMovieSceneTrack*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "FindMasterTracksByExactType");

	Params::UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Params Parms{};

	Parms.TrackType = TrackType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class FString                      InLabel                                                          (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::FindMarkedFrameByLabel(class UMovieSceneSequence** Sequence, class FString* InLabel, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "FindMarkedFrameByLabel");

	Params::UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	if (InLabel != nullptr)
		*InLabel = std::move(Parms.InLabel);

}


// Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FFrameNumber                InFrameNumber                                                    (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::FindMarkedFrameByFrameNumber(class UMovieSceneSequence** Sequence, struct FFrameNumber* InFrameNumber, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "FindMarkedFrameByFrameNumber");

	Params::UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	if (InFrameNumber != nullptr)
		*InFrameNumber = std::move(Parms.InFrameNumber);

}


// Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// struct FMovieSceneBindingProxy     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::FindBindingByName(class UMovieSceneSequence** Sequence, class FString* Name, const struct FMovieSceneBindingProxy& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "FindBindingByName");

	Params::UMovieSceneSequenceExtensions_FindBindingByName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

}


// Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingById
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FGuid                       BindingId                                                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FMovieSceneBindingProxy     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::FindBindingById(class UMovieSceneSequence** Sequence, struct FGuid* BindingId, const struct FMovieSceneBindingProxy& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "FindBindingById");

	Params::UMovieSceneSequenceExtensions_FindBindingById_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	if (BindingId != nullptr)
		*BindingId = std::move(Parms.BindingId);

}


// Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::DeleteMarkedFrames(class UMovieSceneSequence** Sequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "DeleteMarkedFrames");

	Params::UMovieSceneSequenceExtensions_DeleteMarkedFrames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// int32                              DeleteIndex                                                      (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneSequenceExtensions::DeleteMarkedFrame(class UMovieSceneSequence** Sequence, int32* DeleteIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "DeleteMarkedFrame");

	Params::UMovieSceneSequenceExtensions_DeleteMarkedFrame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	if (DeleteIndex != nullptr)
		*DeleteIndex = Parms.DeleteIndex;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.AddTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UClass*                      TrackType                                                        (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneTrack*            ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::AddTrack(class UMovieSceneSequence** Sequence, class UClass* TrackType, class UMovieSceneTrack* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "AddTrack");

	Params::UMovieSceneSequenceExtensions_AddTrack_Params Parms{};

	Parms.TrackType = TrackType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UObject*                     ObjectToSpawn                                                    (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FMovieSceneBindingProxy     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::AddSpawnableFromInstance(class UMovieSceneSequence** Sequence, class UObject** ObjectToSpawn, const struct FMovieSceneBindingProxy& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "AddSpawnableFromInstance");

	Params::UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	if (ObjectToSpawn != nullptr)
		*ObjectToSpawn = Parms.ObjectToSpawn;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UClass*                      ClassToSpawn                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FMovieSceneBindingProxy     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::AddSpawnableFromClass(class UMovieSceneSequence** Sequence, class UClass** ClassToSpawn, const struct FMovieSceneBindingProxy& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "AddSpawnableFromClass");

	Params::UMovieSceneSequenceExtensions_AddSpawnableFromClass_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	if (ClassToSpawn != nullptr)
		*ClassToSpawn = Parms.ClassToSpawn;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class FString                      NewFolderName                                                    (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneFolder*           ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::AddRootFolderToSequence(class UMovieSceneSequence** Sequence, class FString* NewFolderName, class UMovieSceneFolder* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "AddRootFolderToSequence");

	Params::UMovieSceneSequenceExtensions_AddRootFolderToSequence_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	if (NewFolderName != nullptr)
		*NewFolderName = std::move(Parms.NewFolderName);

}


// Function SequencerScripting.MovieSceneSequenceExtensions.AddPossessable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UObject*                     ObjectToPossess                                                  (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FMovieSceneBindingProxy     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::AddPossessable(class UMovieSceneSequence** Sequence, class UObject** ObjectToPossess, const struct FMovieSceneBindingProxy& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "AddPossessable");

	Params::UMovieSceneSequenceExtensions_AddPossessable_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	if (ObjectToPossess != nullptr)
		*ObjectToPossess = Parms.ObjectToPossess;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UClass*                      TrackType                                                        (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneTrack*            ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::AddMasterTrack(class UMovieSceneSequence** Sequence, class UClass* TrackType, class UMovieSceneTrack* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "AddMasterTrack");

	Params::UMovieSceneSequenceExtensions_AddMasterTrack_Params Parms{};

	Parms.TrackType = TrackType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FMovieSceneMarkedFrame      InMarkedFrame                                                    (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneSequenceExtensions::AddMarkedFrame(class UMovieSceneSequence** Sequence, struct FMovieSceneMarkedFrame* InMarkedFrame, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "AddMarkedFrame");

	Params::UMovieSceneSequenceExtensions_AddMarkedFrame_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	if (InMarkedFrame != nullptr)
		*InMarkedFrame = std::move(Parms.InMarkedFrame);

}


// Class SequencerScripting.MovieSceneTrackExtensions
// (None)

class UClass* UMovieSceneTrackExtensions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneTrackExtensions");

	return Clss;
}


// MovieSceneTrackExtensions SequencerScripting.Default__MovieSceneTrackExtensions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneTrackExtensions* UMovieSceneTrackExtensions::GetDefaultObj()
{
	static class UMovieSceneTrackExtensions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneTrackExtensions*>(UMovieSceneTrackExtensions::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneTrackExtensions.SetTrackRowDisplayName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*            Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        InName                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              RowIndex                                                         (Edit, ExportObject, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneTrackExtensions::SetTrackRowDisplayName(class UMovieSceneTrack** Track, class FText* InName, int32* RowIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneTrackExtensions", "SetTrackRowDisplayName");

	Params::UMovieSceneTrackExtensions_SetTrackRowDisplayName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

	if (InName != nullptr)
		*InName = Parms.InName;

	if (RowIndex != nullptr)
		*RowIndex = Parms.RowIndex;

}


// Function SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*            Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              SortingOrder                                                     (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneTrackExtensions::SetSortingOrder(class UMovieSceneTrack** Track, int32* SortingOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneTrackExtensions", "SetSortingOrder");

	Params::UMovieSceneTrackExtensions_SetSortingOrder_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

	if (SortingOrder != nullptr)
		*SortingOrder = Parms.SortingOrder;

}


// Function SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*            Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)

class UMovieSceneSection* UMovieSceneTrackExtensions::SetSectionToKey(class UMovieSceneTrack** Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneTrackExtensions", "SetSectionToKey");

	Params::UMovieSceneTrackExtensions_SetSectionToKey_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneTrackExtensions.SetDisplayName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*            Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        InName                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneTrackExtensions::SetDisplayName(class UMovieSceneTrack** Track, class FText* InName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneTrackExtensions", "SetDisplayName");

	Params::UMovieSceneTrackExtensions_SetDisplayName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

	if (InName != nullptr)
		*InName = Parms.InName;

}


// Function SequencerScripting.MovieSceneTrackExtensions.SetColorTint
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*            Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FColor                      ColorTint                                                        (ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FColor UMovieSceneTrackExtensions::SetColorTint(class UMovieSceneTrack** Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneTrackExtensions", "SetColorTint");

	Params::UMovieSceneTrackExtensions_SetColorTint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneTrackExtensions.RemoveSection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*            Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)

class UMovieSceneSection* UMovieSceneTrackExtensions::RemoveSection(class UMovieSceneTrack** Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneTrackExtensions", "RemoveSection");

	Params::UMovieSceneTrackExtensions_RemoveSection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneTrackExtensions.GetTrackRowDisplayName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*            Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              RowIndex                                                         (Edit, ExportObject, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneTrackExtensions::GetTrackRowDisplayName(class UMovieSceneTrack** Track, int32* RowIndex, class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneTrackExtensions", "GetTrackRowDisplayName");

	Params::UMovieSceneTrackExtensions_GetTrackRowDisplayName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

	if (RowIndex != nullptr)
		*RowIndex = Parms.RowIndex;

}


// Function SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*            Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneTrackExtensions::GetSortingOrder(class UMovieSceneTrack** Track, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneTrackExtensions", "GetSortingOrder");

	Params::UMovieSceneTrackExtensions_GetSortingOrder_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

}


// Function SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*            Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneSection*          ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneTrackExtensions::GetSectionToKey(class UMovieSceneTrack** Track, class UMovieSceneSection* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneTrackExtensions", "GetSectionToKey");

	Params::UMovieSceneTrackExtensions_GetSectionToKey_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

}


// Function SequencerScripting.MovieSceneTrackExtensions.GetSections
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*            Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UMovieSceneSection*>  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneTrackExtensions::GetSections(class UMovieSceneTrack** Track, const TArray<class UMovieSceneSection*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneTrackExtensions", "GetSections");

	Params::UMovieSceneTrackExtensions_GetSections_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

}


// Function SequencerScripting.MovieSceneTrackExtensions.GetDisplayName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*            Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneTrackExtensions::GetDisplayName(class UMovieSceneTrack** Track, class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneTrackExtensions", "GetDisplayName");

	Params::UMovieSceneTrackExtensions_GetDisplayName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

}


// Function SequencerScripting.MovieSceneTrackExtensions.GetColorTint
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*            Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FColor                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneTrackExtensions::GetColorTint(class UMovieSceneTrack** Track, const struct FColor& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneTrackExtensions", "GetColorTint");

	Params::UMovieSceneTrackExtensions_GetColorTint_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

}


// Function SequencerScripting.MovieSceneTrackExtensions.AddSection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*            Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneSection*          ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneTrackExtensions::AddSection(class UMovieSceneTrack** Track, class UMovieSceneSection* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneTrackExtensions", "AddSection");

	Params::UMovieSceneTrackExtensions_AddSection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

}


// Class SequencerScripting.MovieSceneFloatVectorTrackExtensions
// (None)

class UClass* UMovieSceneFloatVectorTrackExtensions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneFloatVectorTrackExtensions");

	return Clss;
}


// MovieSceneFloatVectorTrackExtensions SequencerScripting.Default__MovieSceneFloatVectorTrackExtensions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneFloatVectorTrackExtensions* UMovieSceneFloatVectorTrackExtensions::GetDefaultObj()
{
	static class UMovieSceneFloatVectorTrackExtensions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneFloatVectorTrackExtensions*>(UMovieSceneFloatVectorTrackExtensions::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.SetNumChannelsUsed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFloatVectorTrack* Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              InNumChannelsUsed                                                (ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UMovieSceneFloatVectorTrackExtensions::SetNumChannelsUsed(class UMovieSceneFloatVectorTrack** Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFloatVectorTrackExtensions", "SetNumChannelsUsed");

	Params::UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.GetNumChannelsUsed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFloatVectorTrack* Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneFloatVectorTrackExtensions::GetNumChannelsUsed(class UMovieSceneFloatVectorTrack** Track, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFloatVectorTrackExtensions", "GetNumChannelsUsed");

	Params::UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

}


// Class SequencerScripting.MovieSceneDoubleVectorTrackExtensions
// (None)

class UClass* UMovieSceneDoubleVectorTrackExtensions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneDoubleVectorTrackExtensions");

	return Clss;
}


// MovieSceneDoubleVectorTrackExtensions SequencerScripting.Default__MovieSceneDoubleVectorTrackExtensions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneDoubleVectorTrackExtensions* UMovieSceneDoubleVectorTrackExtensions::GetDefaultObj()
{
	static class UMovieSceneDoubleVectorTrackExtensions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneDoubleVectorTrackExtensions*>(UMovieSceneDoubleVectorTrackExtensions::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.SetNumChannelsUsed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneDoubleVectorTrack*Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              InNumChannelsUsed                                                (ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UMovieSceneDoubleVectorTrackExtensions::SetNumChannelsUsed(class UMovieSceneDoubleVectorTrack** Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneDoubleVectorTrackExtensions", "SetNumChannelsUsed");

	Params::UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.GetNumChannelsUsed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneDoubleVectorTrack*Track                                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMovieSceneDoubleVectorTrackExtensions::GetNumChannelsUsed(class UMovieSceneDoubleVectorTrack** Track, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneDoubleVectorTrackExtensions", "GetNumChannelsUsed");

	Params::UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Track != nullptr)
		*Track = Parms.Track;

}


// Class SequencerScripting.SequencerScriptingRangeExtensions
// (None)

class UClass* USequencerScriptingRangeExtensions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequencerScriptingRangeExtensions");

	return Clss;
}


// SequencerScriptingRangeExtensions SequencerScripting.Default__SequencerScriptingRangeExtensions
// (Public, ClassDefaultObject, ArchetypeObject)

class USequencerScriptingRangeExtensions* USequencerScriptingRangeExtensions::GetDefaultObj()
{
	static class USequencerScriptingRangeExtensions* Default = nullptr;

	if (!Default)
		Default = static_cast<USequencerScriptingRangeExtensions*>(USequencerScriptingRangeExtensions::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartSeconds
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// float                              Start                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)

struct FSequencerScriptingRange USequencerScriptingRangeExtensions::SetStartSeconds(float* Start)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencerScriptingRangeExtensions", "SetStartSeconds");

	Params::USequencerScriptingRangeExtensions_SetStartSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Start != nullptr)
		*Start = Parms.Start;

	return Parms.ReturnValue;

}


// Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartFrame
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// int32                              Start                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)

struct FSequencerScriptingRange USequencerScriptingRangeExtensions::SetStartFrame(int32* Start)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencerScriptingRangeExtensions", "SetStartFrame");

	Params::USequencerScriptingRangeExtensions_SetStartFrame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Start != nullptr)
		*Start = Parms.Start;

	return Parms.ReturnValue;

}


// Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndSeconds
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// float                              End                                                              (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance)

struct FSequencerScriptingRange USequencerScriptingRangeExtensions::SetEndSeconds(float End)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencerScriptingRangeExtensions", "SetEndSeconds");

	Params::USequencerScriptingRangeExtensions_SetEndSeconds_Params Parms{};

	Parms.End = End;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndFrame
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// int32                              End                                                              (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance)

struct FSequencerScriptingRange USequencerScriptingRangeExtensions::SetEndFrame(int32 End)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencerScriptingRangeExtensions", "SetEndFrame");

	Params::USequencerScriptingRangeExtensions_SetEndFrame_Params Parms{};

	Parms.End = End;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveStart
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

struct FSequencerScriptingRange USequencerScriptingRangeExtensions::RemoveStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencerScriptingRangeExtensions", "RemoveStart");

	Params::USequencerScriptingRangeExtensions_RemoveStart_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveEnd
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

struct FSequencerScriptingRange USequencerScriptingRangeExtensions::RemoveEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencerScriptingRangeExtensions", "RemoveEnd");

	Params::USequencerScriptingRangeExtensions_RemoveEnd_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.SequencerScriptingRangeExtensions.HasStart
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSequencerScriptingRange USequencerScriptingRangeExtensions::HasStart(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencerScriptingRangeExtensions", "HasStart");

	Params::USequencerScriptingRangeExtensions_HasStart_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.SequencerScriptingRangeExtensions.HasEnd
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSequencerScriptingRange USequencerScriptingRangeExtensions::HasEnd(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencerScriptingRangeExtensions", "HasEnd");

	Params::USequencerScriptingRangeExtensions_HasEnd_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartSeconds
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSequencerScriptingRange USequencerScriptingRangeExtensions::GetStartSeconds(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencerScriptingRangeExtensions", "GetStartSeconds");

	Params::USequencerScriptingRangeExtensions_GetStartSeconds_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartFrame
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSequencerScriptingRange USequencerScriptingRangeExtensions::GetStartFrame(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencerScriptingRangeExtensions", "GetStartFrame");

	Params::USequencerScriptingRangeExtensions_GetStartFrame_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndSeconds
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSequencerScriptingRange USequencerScriptingRangeExtensions::GetEndSeconds(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencerScriptingRangeExtensions", "GetEndSeconds");

	Params::USequencerScriptingRangeExtensions_GetEndSeconds_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndFrame
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSequencerScriptingRange USequencerScriptingRangeExtensions::GetEndFrame(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencerScriptingRangeExtensions", "GetEndFrame");

	Params::USequencerScriptingRangeExtensions_GetEndFrame_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


